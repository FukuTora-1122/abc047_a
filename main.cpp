#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int max = 0;
    int res = 0;
    cin >> a >> b >> c;
    int array[] = {a,b,c};
    
    max = array[0];
    for(int x = 0;x <= 1;x++){
        if(max < array[x+1]){
            max = array[x+1];
        }else{
            
        }
    }
    
    for(int x = 0;x <= 2;x++){
        if(array[x] < max){
            res += array[x];
        }
    }
    
    if(res == max){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
