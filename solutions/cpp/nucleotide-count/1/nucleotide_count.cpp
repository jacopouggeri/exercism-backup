#include "nucleotide_count.h"
#include <map>
#include <stdexcept>
#include <string_view>

namespace nucleotide_count {

std::map<char, int> count(std::string_view view) {
    std::map<char, int> counts { {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0} };
    for (char c : view) {
        if (counts.find(c) == counts.end()) throw std::invalid_argument("Invalid nucleotide sequence\n");
        counts[c] += 1;
    }
    return counts;
}

}  // namespace nucleotide_count
