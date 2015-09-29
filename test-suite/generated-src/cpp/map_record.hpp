// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>

namespace testsuite {

struct MapRecord final {
    std::unordered_map<std::string, int64_t> map;
    std::unordered_map<int32_t, int32_t> imap;

    MapRecord(std::unordered_map<std::string, int64_t> map_,
              std::unordered_map<int32_t, int32_t> imap_)
    : map(std::move(map_))
    , imap(std::move(imap_))
    {}
};

}  // namespace testsuite
