// #include<iostream>
// int main(){
//     return 0;           //boiler plate of c++
// }


// #include<iostream>

// int main(){
//     std::cout << "Hey Baby!" <<"\n";    // or we can use std::endl;   for printing in next line
//     std::cout << "Hey Baby!";
//     return 0;
// }


// #include<iostream>
// using namespace std;   // by this we don't have to put std while giving calls like above

// int main(){

//     cout << "Hey Baby!" << endl << "Hey Shaurya!";
//     return 0;

// }



//                                        # TO TAKE INPUT

// #include<iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cin >> x >> y;
//     cout << "the value of x is : " << x << endl << "and y is : " << y;
//     return 0;
// }



// #include<bits/stdc++.h>        // this includes every library present in c++


//                                                #DATATYPES

// int for numbers,float for point numbers,long to store big number , long long to store  bigger number 
// double to store floating number to double precision 



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<s1<<" "<<s2;
//     return 0;                   //before spacebar every word is stored in a single string 
// }


// now to store a sentence in a single string 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     getline(cin,str);                //with getline we can add as many words as we want for a sentence
//     cout<<str;
//     return 0;
// }



//                                            #IF-ELSE STATEMENT

 // write a program that takes an input of your age and prints if you are adult or not


//  #include<bits/stdc++.h>
//  using namespace std;

//  int main(){
//     int age;
//     cout<<"enter an age:";
//     cin>>age;
    

//     if(age>=18){
//     cout<<"adult";
//     }

//     else{
//         cout<<"not an adult";
//     }
//     return 0;
//  }



//Q RELATED TO IF ELSE GRADING SYSTEM
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int marks ;
// cout<<"enter marks : ";
// cin>>marks;

// if(marks < 25){
//     cout<<"F";
// }
// else if(  marks <=44){
//     cout<<"E";
// }
// else if(  marks <=49){
//     cout<<"D";
// }
// else if( marks <= 59){
//     cout<<"C";
// }
// else if( marks <= 79){
//     cout<<"B";
// }
// else if( marks <=100){
//     cout<<"A";
// }

// return 0;
// }



//                                           #SWITCH STATEMENT


//Q: WAP TO PRINT A NO. TAKEN AS INPUT DEFINING DAYS LIKE 1 FOR MONDAY AND SO ON TO 7 FOR SUNDAY 


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int day;
//     cout<<"enter a day: ";
//     cin>>day;

//     switch(day){
//         case 1:
//         cout<<"monday";
//         break;

//         case 2:
//         cout<<"tuesday";
//         break;

//         case 3:
//         cout<<"wednesday";
//         break;

//         case 4:
//         cout<<"thursday";
//         break;

//         case 5:
//         cout<<"friday";
//         break;

//         case 6:
//         cout<<"saturday";
//         break;

//         case 7:
//         cout<<"sunday";
//         break;

//         default:
//         cout<<"invalid";
//     }
   
//      return 0;
// }



//                                         ARRAYS & STRINGS


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5];
//     cout<<"enter the ints : ";
//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//     cout<<arr[1];

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5];
//     cout<<"enter the ints : ";         

//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

//     arr[1] += 20;                        // we can modify  by applying operations on a specific array
//     cout<<arr[1];

//     return 0;
// }



//      2-D ARRAYS

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[3][5];

//     arr[1][2]=45;
//     cout<<arr[1][2];                 // this will give the value that we have stored here

//     // cout<<arr[2][4];                 // since we have not defined this arr anywhere this will give a garbage val stored in computer
//     return 0;

// }




//                  STRINGS USE

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s="SHAURYA";
//     int len=s.size();       // this is how we find the size of the word
//     s[len -1]='a';         //  this will modify the last letter as small a
//     // cout<<len;        //by this lenght came 
//     // cout<<s[len -1];      //prints the last letter of the word as length -1 

//     cout<<s;
//     return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int year;
//     cout<<"enter year :";
//     cin>>year;

//     if(year%4==0 && year%100!=0  ||  year%400==0){
//         cout<<year<<" " <<"it is a leap year";
//     }
//     else{
//         cout<<year<<" "<<"is not a leap year";
//     }
//     return 0;
// }


