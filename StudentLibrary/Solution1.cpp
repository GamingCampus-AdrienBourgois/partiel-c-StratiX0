#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	switch (_from)
	{
	case TemperatureUnits::KELVIN:
		switch (_to)
		{
		case TemperatureUnits::FAHRENHEIT:
			_value = 9/5 * (_value - 273) + 32;
		case TemperatureUnits::CELSIUS:
			_value = _value - 273;
		}
	case TemperatureUnits::CELSIUS:
		switch (_to)
		{
		case TemperatureUnits::FAHRENHEIT:
			_value = 9 / 5 * (_value) + 32;
		case TemperatureUnits::KELVIN:
			_value = _value + 273;
		}
	case TemperatureUnits::FAHRENHEIT:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			_value = 5 / 9 * (_value - 32);
		case TemperatureUnits::KELVIN:
			_value = 5 / 9 * (_value - 32) + 273;
		}
	}
	

	return _value;
}

#endif
