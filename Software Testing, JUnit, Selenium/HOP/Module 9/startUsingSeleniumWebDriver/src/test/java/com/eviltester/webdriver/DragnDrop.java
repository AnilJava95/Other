package com.eviltester.webdriver;

import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.By;
import org.openqa.selenium.interactions.Actions;
import org.openqa.selenium.interactions.Action;

public class DragnDrop
{
	@Test
	public void startWebDriver()
	{
		WebDriver driver = new ChromeDriver();

		driver.navigate().to("https://testpages.herokuapp.com/styled/drag-drop-javascript.html");
		
		// From is element that needs to be dragged 
		WebElement from = driver.findElement(By.id("draggable1"));
		WebElement from1 = driver.findElement(By.id("draggable2"));

		// To is element that needs to be dropped 
		WebElement to = driver.findElement(By.id("droppable1"));
		WebElement to1 = driver.findElement(By.id("droppable2"));

		// Initialize an Action from Actions object created above 
		Actions act = new Actions(driver);

		// execute the Action created above 
		act.dragAndDrop(from, to).build().perform();
		act.dragAndDrop(from1, to1).build().perform();
		act.dragAndDropBy(from1, -75, 150).build().perform();

		//driver.close(); 
		//driver.quit(); 
	}

	public static void main(String[] args)
	{
		DragnDrop d = new DragnDrop();
		d.startWebDriver();
	}
}
