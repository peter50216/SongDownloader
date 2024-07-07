#pragma once
#include "../TypeMacros.hpp"
#include "UserDiffStats.hpp"

namespace BeatSaver {
    DECLARE_JSON_CLASS(UserStats,
        ERROR_CHECK
        GETTER_VALUE_OPTIONAL(int, TotalUpvotes, "totalUpvotes");
        GETTER_VALUE_OPTIONAL(int, TotalDownvotes, "totalDownvotes");
        GETTER_VALUE_OPTIONAL(int, TotalMaps, "totalMaps");
        GETTER_VALUE_OPTIONAL(int, RankedMaps, "rankedMaps");
        GETTER_VALUE_OPTIONAL(float, AvgBpm, "avgBpm");
        GETTER_VALUE_OPTIONAL(float, AvgScore, "avgScore");
        GETTER_VALUE_OPTIONAL(float, AvgDuration, "avgDuration");
        GETTER_VALUE_OPTIONAL(std::string, FirstUpload, "firstUpload");
        GETTER_VALUE_OPTIONAL(std::string, LastUpload, "lastUpload");
        GETTER_VALUE(BeatSaver::UserDiffStats, DiffStats, "diffStats");
    )
}
