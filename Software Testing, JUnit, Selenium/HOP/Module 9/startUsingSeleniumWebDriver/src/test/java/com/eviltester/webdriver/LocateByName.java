package com.eviltester.webdriver;

import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.By;
import org.openqa.selenium.*;
import org.openqa.selenium.support.ui.Select;

public class LocateByName
{
	@Test
	public void startWebDriver()
	{
		// Instantiate ChromeDriver object.
		WebDriver driver = new ChromeDriver();

		// Navigate to the website to be tested
		driver.navigate().to("https://testpages.herokuapp.com/styled/basic-html-form-test.html");

		// Instead of calling methods on WebElement objects returned by 
		// driver.findElement, we assign those objects to reference variables to 
		// call methods from these reference variables later.
		WebElement userName = driver.findElement(By.name("username"));
		WebElement passWord = driver.findElement(By.name("password"));
		WebElement comments = driver.findElement(By.name("comments"));

		// Calling WebElement methods on WebElement objects stored in WebElement 
		// reference variables. Sending text to text and password fields.
		userName.sendKeys("User01");
		passWord.sendKeys("CS570password!");
		comments.sendKeys("Welcome to Software Testing");

		// Storing the submit button element in variable submit and then calling
		// its click method to submit the form to the form handler. 
		WebElement submit = driver.findElement(By.name("submitbutton"));
		submit.click();

		// Storing the dropdown element in variable dropdown and then calling
		// its selectVisibleText method to select an option.
		Select dropdown = new Select(driver.findElement(By.name("dropdown")));
		dropdown.selectByVisibleText("Drop Down Item 6");

		// Closing the browser to free the resources.
		//driver.close();
		//driver.quit();
	}

	public static void main(String[] args)
	{
		// Create a LocateByName object called l and call its startWebDriver method
		LocateByName l = new LocateByName();
		l.startWebDriver();
	}
}
