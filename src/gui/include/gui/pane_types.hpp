#ifndef STATMON_PANE_TYPES_HPP
#define STATMON_PANE_TYPES_HPP

// Qt
#include <QString>

enum class PaneType
{
	CPU,
	GPU,
	RAM, // memory
	NET, // netowrk
};

inline QString paneTypeToQString(PaneType type)
{
	// clang-format off
	switch (type)
	{
	case PaneType::CPU: return "CPU";
	case PaneType::GPU: return "GPU";
	case PaneType::RAM: return "Memory";
	case PaneType::NET: return "Network";
	default:            return "Unknown";
	}
	// clang-format on
}
#endif // STATMON_PANE_TYPES_HPP
