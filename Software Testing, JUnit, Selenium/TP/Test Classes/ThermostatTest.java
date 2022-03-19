/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package programs;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author Michael
 */
public class ThermostatTest
{
	ProgrammedSettings pSet = new ProgrammedSettings();
	Thermostat thermostat = new Thermostat();

	public ThermostatTest()
	{
	}

	@BeforeClass
	public static void setUpClass()
	{
	}

	@AfterClass
	public static void tearDownClass()
	{
	}

	@Before
	public void setUp()
	{
	}

	@After
	public void tearDown()
	{
	}

	/**
	 * Heater should turn on.
	 */
	@Test
	public void testTurnHeaterOn()
	{
		System.out.println("turnHeaterOn Heater should turn on.");
		thermostat.setPeriod(Period.DAY);
		thermostat.setDay(DayType.WEEKDAY);
		thermostat.setCurrentTemp(60);
		thermostat.setThresholdDiff(2);
		thermostat.setOverride(false);
		thermostat.setOverTemp(58);
		thermostat.setTimeSinceLastRun(4);
		thermostat.setMinLag(2);

		assertTrue(thermostat.turnHeaterOn(pSet));
	}

	/**
	 * Heater should not turn on. Override = true.
	 */
	@Test
	public void testTurnHeaterOn2()
	{
		System.out.println("turnHeaterOn Should not turn on. Override = true.");
		thermostat.setPeriod(Period.DAY);
		thermostat.setDay(DayType.WEEKDAY);
		thermostat.setCurrentTemp(77);
		thermostat.setThresholdDiff(2);
		thermostat.setOverride(true);
		thermostat.setOverTemp(80);
		thermostat.setTimeSinceLastRun(4);
		thermostat.setMinLag(2);

		assertTrue(thermostat.turnHeaterOn(pSet));

	}

	/**
	 * Heater should not turn on.
	 */
	@Test
	public void testTurnHeaterOn3()
	{
		System.out.println("turnHeaterOn Heater should not turn on.");
		thermostat.setPeriod(Period.DAY);
		thermostat.setDay(DayType.WEEKDAY);
		thermostat.setCurrentTemp(77);
		thermostat.setThresholdDiff(2);
		thermostat.setOverride(false);
		thermostat.setOverTemp(80);
		thermostat.setTimeSinceLastRun(4);
		thermostat.setMinLag(2);

		assertFalse(thermostat.turnHeaterOn(pSet));

	}

	/**
	 * Heater should not turn on.
	 */
	@Test
	public void testTurnHeaterOn4()
	{
		System.out.println("turnHeaterOn Should not turn on.");
		thermostat.setPeriod(Period.DAY);
		thermostat.setDay(DayType.WEEKDAY);
		thermostat.setCurrentTemp(60);
		thermostat.setThresholdDiff(2);
		thermostat.setOverride(true);
		thermostat.setOverTemp(80);
		thermostat.setTimeSinceLastRun(2);
		thermostat.setMinLag(4);

		assertFalse(thermostat.turnHeaterOn(pSet));
	}
}
