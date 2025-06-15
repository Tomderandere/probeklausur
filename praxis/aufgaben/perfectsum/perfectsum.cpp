#include "perfectsum.h"

std::vector<int> perfectsum( const std::vector<int> & list, const int &goal){
auto begin=0;
auto end=0;
auto sum=0;
if (list.size()==0)
{
  return {};
}
for (size_t i = 0; i < list.size(); i++)
{
sum+=list[i];
   end++;
   while (sum>goal)
   {
    sum -= list[begin];
    begin+=1;
   }
   if (begin>=end)
   {
    end=begin;
   }

   if (sum==goal)
   {
return {list.begin()+begin, list.begin()+end};
   
   }
   
}

 return {};
}

