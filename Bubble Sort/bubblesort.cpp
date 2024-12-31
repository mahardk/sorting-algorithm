#include <iostream>
using namespace std;

int main(){

    int data[] = {3,5,2,6,1,7};
    int n = sizeof(data)/sizeof(data[0]);

    cout << "Data sebelum diurutkan:" << endl;
    for (int i=0; i<n; i++){
        cout << data[i] << " ";
    }

    cout << endl;

    bool pertukaran;
    for (int i = 0; i < n-1; i++){
        pertukaran = false;
        for (int j = 0; j < n-1; j++){
            if (data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                pertukaran = true;
            }
        }
        if (!pertukaran)
        break;
    }

    cout << "Data setelah diurutkan" << endl;
    for (int i=0; i<n; i++){
        cout << data[i] << " ";
    }


    return 0;
}
