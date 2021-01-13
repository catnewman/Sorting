#include <iostream>

using namespace std;

void swap(int *a, int *b);

int main(void) {
   
   int nums[] = {58, 26, 85, 100, 37, 223, 174, 8, 79, 193, 505, 66, 396};
   
   cout << "The original list: ";
   
   for(int k=0; k < 13; k++) {
      cout << nums[k] << " ";
   
   }
   
   for(int i=0; i < 13; i++) {
      for(int j=0; j < 13; j++) {
         if(nums[j] > nums[i]) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
         }
      }
   
   }
   
   cout << "\nThe ordered list: ";
   
   for(int j=0; j < 13; j++) {
      cout << nums[j] << " ";
   }
   
   
}


