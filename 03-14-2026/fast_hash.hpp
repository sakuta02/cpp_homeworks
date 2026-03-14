#pragma once

#include <cstdint>
#include <string_view>

inline std::uint32_t fast_hash32(std::string_view s) {
    std::uint32_t hash = 2166136261u;
    for (unsigned char c : s) {
        hash ^= c;
        hash *= 16777619u;
    }
    return hash;
}
