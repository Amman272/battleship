#include <iostream>
using namespace std;

void WaterPrint(int water[10][10]){
     // Output the array
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
         {
            //water=0
            //bombed=1
            if (water[i][j] >= 64 && water[i][j] <= 90) {
                cout << static_cast<char>(water[i][j]) << " ";  // Print as a character
            }
            else if (water[i][j] == 0) {
                cout << "* " ;  // Print emoji for 0
            }
            else
            cout << water[i][j] << " ";  // Print each element followed by a space
        }
        cout << endl;  // After each row, go to the next line
    }

}
class Ship{
    public:
    int startx,startend,endx,endy;
    
};

class Small_ship: public Ship{
    public:
    int size=2;
};



int main (){
    // Declare a 10x10 array
    int water[10][10]={};
    
    // Initialize all elements of the array to 0
    int alpha=64, left_index=1;
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++)
         {
            if (i==0)
            {
                water[i][j]=(char)alpha;
                alpha++;
            }
            //  else if(j==0||i!=0)
            //  {
            //     water[i][j]=left_index;
            //     left_index++;
            //  }
               
             else  
            
            water[i][j] = 0;  // Set all elements to 0
        }
        for (int i = 1; i < 10; i++) {
        water[i][0] = i ;
    }

// decleartion done
// ----------------------------------------------------------------------------------------------------------------
}
WaterPrint(water);
}
//------------+-+++++++++++-+-+
//------------+-+++++++++++-+-+
//------------+-+++++++++++-+-+efh7efeg7rg9ehfefe