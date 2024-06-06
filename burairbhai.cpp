#include<iostream>
#include<ctime>
#include<chrono>
#include<thread>
#include<cstdlib>
using namespace std;
void table(int);
int main(){
    int  n;
    //cin>>n;
    n=rand()%1000;
    table(n);
}


void table(int n){
    using namespace std::this_thread;
    using namespace std::chrono;
    time_t t1,t2;
    int i,j;
    cout<<"\n1st table: "<<endl;
    for(i=0; i<=10;i++){
        cout<<n<< " *"<<i<<" = "<<n*i<<endl;
    }
    time(&t1);
    cout<<"1st table is printed in time: "<<t1<<endl;
    
    
    /*sleep_for(seconds(60));
    sleep_until(system_clock::now()+seconds(1));
    int m=n+n;
    cout<<"\n2nd table: "<<endl;
    for(i=0; i<=10;i++){
        cout<<m<< " *"<<i<<" = "<<m*i<<endl;
    }
    time(&t2);
    cout<<"2nd table is printed in time: "<<t2<<endl;

    int delay= t2-t1;
    int sec=0,min=0;
    if(delay>=60){
    min=delay/60;
    sec=delay%60;
    cout<<"min: "<<min<<"second: "<<sec<<endl;
    }
    else{
    cout<<"min: "<<delay<<endl;
    }*/
}




/*int main(){
    using namespace std::this_thread;
    using namespace std::chrono;
    int n;
    cin>>n;
    time_t t1,t2;
    int i,j;
    cout<<"\n1st table: "<<endl;
    for(i=0; i<=10;i++){
        cout<<n<< " *"<<i<<" = "<<n*i<<endl;
    }
    time(&t1);
    cout<<"1st table is printed in time: "<<t1<<endl;
    sleep_for(seconds(60));
    sleep_until(system_clock::now()+seconds(1));
    int m=n+n;
    cout<<"\n2nd table: "<<endl;
    for(i=0; i<=10;i++){
        cout<<m<< " *"<<i<<" = "<<m*i<<endl;
    }
    time(&t2);
    cout<<"2nd table is printed in time: "<<t2<<endl;

    int delay= t2-t1;
    int sec=0,min=0;
    if(delay>=60){
    min=delay/60;
    sec=delay%60;
    cout<<"min: "<<min<<"second: "<<sec<<endl;
    }
    else{
    cout<<"min: "<<delay<<endl;
    }
    return 0;
}*/



/*//second equation of motion
//s=vit+(1/2)a(t^2)
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    time_t t1;
    int v,t,a;
    float s;
    cout<<"enter the velocity & time & acceleration :"<<endl;
    cin>>v>>t>>a;

    s=(float)((v*t)+(0.5)*a*t*t);
    cout<<"the distance found to be: "<<s<<endl;
    time(&t1);
    cout<<t1<<endl;

    return 0;
}

*/    

/*
//matrix arthimetics
#include<iostream>
using namespace std;
int main(){
    int ans,num,k,sum,i,j,mat_1[2][2],mat_2[2][2],result[2][2];

    cout<<"1-ADD\n2-SUBTRACT\n3-MULTIPLE\n4-DIVIDE:"<<endl;
    cin>>ans;

    switch(ans)
    {
    case 1:
        cout<<"enter the matrix A element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_1[i][j];
            }
        }

         cout<<"enter the matrix B element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_2[i][j];
            } 
        }


        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 result[i][j]=mat_1[i][j]+mat_2[i][j];
            } 
        }

        cout<<"resultant matrix is: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
               cout<<result[i][j]<<" ";
            } 
            cout<<endl;
        }

        break;
    case 2:
                cout<<"enter the matrix A element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_1[i][j];
            }
        }

         cout<<"enter the matrix B element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_2[i][j];
            } 
        }


        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 result[i][j]=mat_1[i][j]-mat_2[i][j];
            } 
        }

        cout<<"resultant matrix is: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
               cout<<result[i][j]<<" ";
            } 
            cout<<endl;
        }
        break;
    case 3:
        cout<<"enter the matrix A element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_1[i][j];
            }
        }

         cout<<"enter the matrix B element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_2[i][j];
            } 
        }


        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
            sum=0;
			for(k=0; k<2; k++)
			{
				sum = sum + mat_1[i][k] * mat_2[k][j];
			}
			result[i][j] = sum;
            } 
        }

        cout<<"resultant matrix is: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                cout<<result[i][j]<<" ";
            } 
            cout<<endl;
        }
        break;   
    case 4:
        cout<<"enter the matrix element: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 cin>>mat_1[i][j];
            }
        }
        cout<<"enter the number by which you want to divide the table: "<<endl;
        cin>>num;
        


        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
                 result[i][j]=mat_1[i][j]/num;
            } 
        }


        cout<<"resultant matrix is: "<<endl;
        for(i=0;i<2;i++){
            for ( j = 0; j < 2; j++)
            {
               cout<<result[i][j]<<" ";
            } 
            cout<<endl;
        }
        break;    
    default:
        cout<<"enter the right option"<<endl;
    }
    return 0;
}
*/