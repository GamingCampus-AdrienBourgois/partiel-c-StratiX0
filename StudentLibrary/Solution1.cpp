#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{

	if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_value = (_value - 273.15) * 9 / 5 + 32;
		}
		if (_to == TemperatureUnits::CELSIUS)
		{
			_value = _value - 273.15;
		}
	}

	if (_from == TemperatureUnits::CELSIUS)
	{
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_value = 9 / 5 * (_value)+32;
		}
		if (_to == TemperatureUnits::KELVIN)
		{
			_value = _value + 273.15;
		}
	}

	if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			_value = (_value - 32) * 5 / 9;
		}
		if (_to == TemperatureUnits::KELVIN)
		{
			_value = 5 / 9 * (_value - 32) + 273;
		}
	}
	return _value;

}

#endif
