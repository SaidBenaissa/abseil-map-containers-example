#include <iostream>
#include "absl/container/flat_hash_map.h"
#include "absl/container/node_hash_map.h"
#include "absl/container/btree_map.h"

int main() {
    // Using flat_hash_map
    absl::flat_hash_map<int, std::string> map{{1, "one"}, {2, "two"}};
    map.emplace(3, "three");
    map[4] = "four";
    for (const auto& [key, value] : map) {
        std::cout << key << ": " << value << std::endl;
    }

    // Using node_hash_map
    absl::node_hash_map<int, std::string> node_map{{1, "one"}, {2, "two"}};
    node_map.emplace(3, "three");
    node_map[4] = "four";
    for (const auto& [key, value] : node_map) {
        std::cout << key << ": " << value << std::endl;
    }

    // Using btree_map
    absl::btree_map<int, std::string> btree{{1, "one"}, {2, "two"}};
    btree.emplace(3, "three");
    btree[4] = "four";
    for (const auto& [key, value] : btree) {
        std::cout << key << ": " << value << std::endl;
    }

    return 0;
}
