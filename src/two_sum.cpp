#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {
    int i = 0;
    int j = data.size() - 1;
    while (i < j) {
      if(data[i]+data[j]>sum){
        j--;
      }
      if(data[i]+data[j]<sum){
        i++;
      }
      if(data[i]+data[j]==sum){
        return std::make_pair(i,j);
      }
    }
    return std::nullopt;
  }

}  // namespace assignment