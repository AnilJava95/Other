package com.eviltester.webdriver;

import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.By;
import org.openqa.selenium.interactions.Actions;
import org.openqa.selenium.interactions.Action;

public class MouseAndKeyboard
{
	@Test
	public void startWebDriver()
	{
		WebDriver driver = new ChromeDriver();

		driver.navigate().to("https://testpages.herokuapp.com/styled/events/javascript-events.html ");

		//Locate elements to perform actions on 
		WebElement onClickButton = driver.findElement(By.id("onclick"));
		WebElement rightClick = driver.findElement(By.id("oncontextmenu"));
		WebElement onDoubleClick = driver.findElement(By.id("ondoubleclick"));
		WebElement onKeyPress = driver.findElement(By.id("onkeypress"));

		//Initialize an Action from Actions object created above 
		Actions builder = new Actions(driver);
		
		Action seriesOfActions = builder
			.moveToElement(onKeyPress)
			.sendKeys(onKeyPress, "a")
			.moveToElement(onClickButton) //move to OnClick button 
			.click() //performs single click 
			.moveToElement(onDoubleClick) //move to OnDoubleClick button 
			.doubleClick() //performs double click 
			.moveToElement(rightClick) //move to OnContextMenu button 
			.contextClick() //performs right click 
			.build();

		//execute the Action created above 
		seriesOfActions.perform();

		//driver.close(); 
		//driver.ouit(); 
	}

	public static void main(String[] args)
	{
		MouseAndKeyboard m = new MouseAndKeyboard();
		m.startWebDriver();
	}
}
