#include<iostream>
#include<vector>

using namespace std;
int main() {
    
    int a[] = {4, 5, 6, 2, 1};
    int n = 5;
    int size = 3;
    int j = size - 1;

    vector<int> max_array;

    for(int i = 0; i < n; i++) {
        if(j < n) {
            int max = a[i];
            for(int k = i; k <= j; k++) {
                if(max < a[k]) {
                    max = a[k];
                }
            }
            j++;
            max_array.push_back(max);
        }
    }

    for(auto a:max_array) {
        cout << a << endl;
    }
    return 0;
}