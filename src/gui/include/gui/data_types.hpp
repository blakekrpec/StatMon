#ifndef STATMON_DATA_TYPES_HPP
#define STATMON_DATA_TYPES_HPP

// Qt
#include <QString>

enum class DataType
{
	TEMP, // temperature
	UTIL, // utlization/load
	PWR,  // power
	BAND, // bandwidth
};

inline QString dataTypeToQString(DataType type)
{
	// clang-format off
	switch (type)
	{
        case DataType::TEMP:  return "Temperature";
        case DataType::UTIL:  return "Utilization";
        case DataType::PWR:   return "Power";
        case DataType::BAND:  return "Bandwidth";
	    default:              return "Unknown";
	}
	// clang-format on
}

#endif // STATMON_DATA_TYPES_HPP
