#include <iostream>
using namespace std;
void printstar(int rows_size);
main(){
 int rows_size;  
cout<<"Enter The Desired Rows :";
cin>>rows_size; 
printstar(rows_size);
}

void printstar(int rows_size){
  for(int rows=1; rows_size>=rows ; rows++){
      for(int col = rows ;col<=rows_size; col++){
          cout<<" *";
  }
         cout<<endl;  
} 

}