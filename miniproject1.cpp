#include<iostream>
using namespace std;
int main(){
    //STUDENT RESULT ANALYZER
    float m1,m2,m3,m4,m5;
cout<<"Enter marks of 5 subjects out of 100- ";
cin>>m1>>m2>>m3>>m4>>m5;
float sum=m1+m2+m3+m4+m5;
float percent=sum/5;
cout<<"The percentage is - "<<percent<<"%"<<endl;
if(m1<35 || m2<35 || m3<35 || m4<35 || m5<35){
    cout<<"FAIL\n";
}else{
    cout<<"PASS\n";
    if(percent>=90){
        cout<<"Grade - A+\n";
    }else if(percent>=75){
        cout<<"Grade - A\n";
    }else if(percent>=60){
        cout<<"Grade - B\n";
    }else if(percent>=50){
        cout<<"Grade - C\n";
    }else{
        cout<<"Grade - D\n";
       
    }
}
 cout<<((percent>=75)?"Destinction-YES":"Destinction-NO");
        


    return 0;
}