#include<iostream>
using namespace std;
int main(){

    int t;
    t = 1;
    int N;
    while(t--){
        cin>>N;
        int arr_x[N], arr_y[N];
        for(int i=0;i<N;i++){
            cin>>arr_x[i];
            cin>>arr_y[i];
        }

        int flag1 = 0;
        int flag2 =0;
        int count =0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                flag1 = 0;
                flag2 =0;
                int x1 = arr_x[i];
                int y1 = arr_y[i] , x2 = arr_x[j] , y2 = arr_y[j];
                int p1_x = x1 - y1 + x2 + y2; 
                int p2_x = x1 + y1 + x2 - y2; 
                int p1_y = x1 + y1 - x2 + y2; 
                int p2_y = -x1 + y1 + x2 + y2;
                for(int k=0;k<N;k++){
                    if(2*arr_x[k] == p1_x && 2*arr_y[k] == p1_y ){
                        flag1 = 1;
                    }
                    if(2*arr_x[k] == p2_x && 2*arr_y[k] == p2_y ){
                        flag2 = 1;
                    }


                }
                if(flag1&&flag2){
                    count++;
                } 
                

            }
        }
        cout<<count/2<<endl;

    }

    return 0;
}