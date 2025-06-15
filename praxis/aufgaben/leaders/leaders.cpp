#include "leaders.h"

std::vector<int> leaders( const std::vector<int> & list)
{
std::vector<int> result = {};
for (int i = list.size()-1; i>=0 ; i--)
{
   if (result.size()!=0)
   {
      if (list[i]>= result.back())
   {
      result.push_back(list[i]);
   }
   }
   
    if (result.size()==0)
   {
   
   
      result.push_back(list[i]);
   }
   
   
}
std::reverse(result.begin(), result.end());
return result;
}
