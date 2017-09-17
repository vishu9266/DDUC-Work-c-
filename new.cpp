#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * This is old C-like style.  It is mostly gong from 
 * modern C++ programming.  You can still use this
 * since you need to know very little about C++.
 * @param storeSize you have to know the size of store
 *    How many elements are in the array.
 * @return the index of the element in the array,
 *   if not found return -1
 */
int in_array(const int store[], const int storeSize, const int query) {
   for (size_t i=0; i<storeSize; ++i) {
      if (store[i] == query) {
         return i;
      }
   }
   return -1;
}

void testfind() {
   int iarr[] = { 3, 6, 8, 33, 77, 63, 7, 11 };

   // for beginners, it is good to practice a looping method
   int query = 7;
   if (in_array(iarr, 8, query) != -1) {
      cout << query << " is in the array\n";
   }

   // using vector or list, ... any container in C++
   vector<int> vecint{ 3, 6, 8, 33, 77, 63, 7, 11 };
   auto it=find(vecint.begin(), vecint.end(), query);
   cout << "using find()\n";
   if (it != vecint.end()) {
      cout << "found " << query << " in the container\n";
   }
   else {
      cout << "your query: " << query << " is not inside the container\n";
   }

   using namespace std::placeholders;
   // here the query variable is bound to the `equal_to` function 
   // object (defined in std)
   cout << "using any_of\n";
   if (any_of(vecint.begin(), vecint.end(), bind(equal_to<int>(), _1, query))) {
      cout << "found " << query << " in the container\n";
   }
   else {
      cout << "your query: " << query << " is not inside the container\n";
   }

   // using lambda, here I am capturing the query variable
   // into the lambda function
   cout << "using any_of with lambda:\n";
   if (any_of(vecint.begin(), vecint.end(),
            [query](int val)->bool{ return val==query; })) {
      cout << "found " << query << " in the container\n";
   }
   else {
      cout << "your query: " << query << " is not inside the container\n";
   }
}

int main(int argc, char* argv[]) {
   testfind();

   return 0;
}