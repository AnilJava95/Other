package com.eviltester.webdriver;

import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.By;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.Set;
import org.openqa.selenium.Cookie;

public class RetrieveCookies
{
	@Test
	public void startWebDriver() throws InterruptedException
	{
		WebDriver driver = new ChromeDriver();

		driver.navigate().to("https://testpages.herokuapp.com/styled/cookies/adminlogin.html");

		// Input Username and Password (We are using default: Admin/AdminPass) 
		driver.findElement(By.name("username")).sendKeys("Admin");
		driver.findElement(By.name("password")).sendKeys("AdminPass");
		Thread.sleep(1080);
		driver.findElement(By.id("login")).click();

		// create file named Cookies to store Login Information 
		File file = new File("Cookies.data");
		try
		{
			// Delete old file if exists 
			file.delete(); 
			file.createNewFile();
			// Store the cookie information using Filewriter Class to write streams 
			// of characters and BufferedWriter to write the text into a file to 
			// create into a file Cookies.data 
			FileWriter fileWrite = new FileWriter(file);
			BufferedWriter Bwrite = new BufferedWriter(fileWrite);

			// loop for getting the cookie information 
			for (Cookie ck : driver.manage().getCookies()) // Read the cookie information using
			{
				Bwrite.write((ck.getName() + ";" + ck.getValue() + ";" + ck.getDomain() + ";"
					+ ck.getPath() + ";" + ck.getExpiry() + ";" + ck.isSecure()));
				Bwrite.newLine();
			}
			Bwrite.close();
			fileWrite.close();
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
		
		Thread.sleep(1000);
		
		// close webdriver
		driver.close();

		//quit webdriver
		driver.quit();
	}

	public static void main(String[] args) throws InterruptedException
	{
		RetrieveCookies r = new RetrieveCookies();
		r.startWebDriver();
	}
}
