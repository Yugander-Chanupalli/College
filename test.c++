#include <iostream>
#include <vector>

using namespace std;

void exvec(const vector<int>& vec) {
    int leng = vec.size();
    
    for(int i = 0; i < leng; i++) {
        cout << vec[i] << "\n";
    }
}

int main() {
    vector<int> My_vector = {5, 4, 3, 2, 1};
    exvec(My_vector);

    return 0;
}
