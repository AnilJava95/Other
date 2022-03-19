package com.eviltester.webdriver;

import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.By;
import org.openqa.selenium.Alert;
import org.openqa.selenium.*;
import java.lang.Thread;

public class HandleAlert
{

	@Test
	public void startWebDriver() throws InterruptedException
	{
		WebDriver driver = new ChromeDriver();
		driver.navigate().to("https://testpages.herokuapp.com/styled/alerts/alert-test.html");

		WebElement alertButton = driver.findElement(By.id("alertexamples"));
		WebElement confirmBox = driver.findElement(By.id("confirmexample"));
		WebElement promptDialog = driver.findElement(By.id("promptexample"));

		//click on the "Show alert Box" button 
		alertButton.click();
		Thread.sleep(2000);

		//switch navigation to Alert popup 
		Alert alert = driver.switchTo().alert();
		alert.accept();
		Thread.sleep(2000);

		//confirm and reject alert 
		//click the "Show confirm box" button
		confirmBox.click();
		Thread.sleep(2000);

		//switch navigation to Alert popup S dismiss the allert by clicking "cancel" option 
		Alert dialog = driver.switchTo().alert();
		dialog.dismiss();
		Thread.sleep(2000);

		//Input text to dialog box 
		//click the "Show prompt box" button 
		promptDialog.click();
		Thread.sleep(2000);

		//capture the text in alert box 
		Alert prompt = driver.switchTo().alert();
		prompt.sendKeys("michael clicked");
		prompt.accept();
		Thread.sleep(2000);

		//close webdriver 
		//driver.close();
		
		//quit webdriver 
		//driver.quit();
	}

	public static void main(String[] args)
	{
		HandleAlert h = new HandleAlert();
		try {
			h.startWebDriver();
		}
		catch (Exception e) {
			e.printStackTrace();
		}
	}
}
