//program 1
//input a{5,10,400,20000,0}
//output 20000
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main() { 
 int a[ ] = {5, 10, 400, 20000, 0}; 
 int n = sizeof(a) / sizeof(a[0]);
 cout << "Max element: " << *max_element(a, a + n) << endl;
 return 0; 
 }
//program 2 
//input{5,10,400,20000,0}
//output 0
#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
 int a[] = {5, 10, 400, 20000, 0}; 
 int n = sizeof(a) / sizeof(a[0]); 
 cout << "Min element: " << *min_element(a, a+ n) << endl; 
 return 0;
 }
//program 3
//finding mode in array {5,10,400,20000,0}
#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
 int a[ ] = {5, 10, 400, 20000, 0};
 int n = sizeof(a) / sizeof(a[0]);
 sort(a, a + n); 
 int mode = a[0], maxCount = 1;
 int curCount = 1;
 for (int i = 1; i < n; i++) {
   if (a[i] == a[i - 1]) {curCount++;};
   else{curCount = 1;}
   if (curCount > maxCount) { 
     maxCount = curCount;
     mode = a[i];}
 cout << "Mode: " << mode << endl; 
 return 0;
}
//program 4
//input a{5,10,400,20000,0}
//output avg of numbers
#include <iostream>
using namespace std;
double avg(int a[ ], int size) {
 double sum = 0;
 for (int i = 0; i < size; i++) {
    sum += a[i];}
 return sum / size;  
}

int main() {
    int a[] = {5, 10, 400, 20000, 0}; 
    int size = sizeof(a) / sizeof(a[0]); 
    double result = avg(a, size);
    cout << "Avg: " << result << endl;
    return 0;
}
//program 5
//get personinfo of 10 person and avg age
#include <iostream>
using namespace std;
struct PersonInfo{int id;int age;string name;string lastname;};
int main(){
  PersonInfo PI[10];
  int totalage=0;
  for(int n=0;n<10;n++){
   cout<<"enter details for person"<<n+1<<":"<<endl;
   cout<<"ID: ";
   cin>>PI[n].id;
   cout<<"name: ";
   cin>>PI[n].name;
   cout<<"lastname: ";
   cin>>PI[n].lastname;
   cout<<"age:";
   cin>>PI[n].age;
   totalage+=PI[n].age;}
double avgage=totalage/10.0;
cout<<"the ages avg is : "<<avgage<<endl;
return 0;
}

