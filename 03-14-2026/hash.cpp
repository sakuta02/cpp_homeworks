#include "hash.hpp"

#if !defined(__has_include)
#error "__has_include is not supported by this compiler"
#elif __has_include("fast_hash.hpp")
#include "fast_hash.hpp"

std::uint32_t hash32(std::string_view s) {
    return fast_hash32(s);
}

#else

std::uint32_t hash32(std::string_view s) {
    std::uint32_t hash = 2166136261u;
    for (unsigned char c : s) {
        hash ^= c;
        hash *= 16777619u;
    }
    return hash;
}

#endif
