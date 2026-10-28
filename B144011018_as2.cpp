#include<iostream>
using namespace std;

int main()
{
   char shape, symbol;
   int height;

   cout << "Enter a shape (T for triangle or D for diamond),\n"
        << "the height (as an odd integer),\n"
        << "and the symbol (such as o, x, or *): ";
   cin >> shape >> height >> symbol;

   switch(shape)
   {
      case 't':
      case 'T':
	      for (int a=1; a<=height; a++) {
            if (a==height) {
               for (int b=0; b<2*height-1; b++) {
                  cout << symbol;
               }
            } 
            else {
               for (int b=0; b<height-a; b++) cout <<" ";
               cout << symbol;
               if (a>1) {
                  for (int b=0; b<2*a-3; b++) cout <<" ";
                  cout << symbol;
               }
            }
            cout << endl;
         }
      break;

      case 'd':
      case 'D':
	      for (int a=1; a<=height; a++) {
            if (a==height) {
               for (int b=0; b<2*height-1; b++) {
                  cout << symbol;
               }
            } 
            else {
               for (int b=0; b<height-a; b++) cout <<" ";
               cout << symbol;
               if (a>1) {
                  for (int b=0; b<2*a-3; b++) cout <<" ";
                  cout << symbol;
               }
            }
            cout << endl;
         }
      break;

      default:
         cout << "Error! Unknown shape: " << shape << endl;
   }

   return 0;
}
