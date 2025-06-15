#include "leaders.h"

std::vector<int> leaders( const std::vector<int> & list)
{
std::vector<int> result = {};
for (size_t i = list.size(); i=0 ; i--)
{
   if (list[i]>= result.back())
   {
      result.push_back(list[i]);
   }
   
}
std::reverse(result.begin(), result.end());
return result;
}
