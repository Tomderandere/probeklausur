#include "missingnumber.h"

int missingnumber( const std::vector<int> & list){
   int n = list.size()+1;
   int sumges= (n*n+n)/2;
   int sumlist= 0;
   for (size_t i = 0; i < list.size(); i++)
   {
   sumlist+= list[i];
   }
   
   return sumges-sumlist;
}
