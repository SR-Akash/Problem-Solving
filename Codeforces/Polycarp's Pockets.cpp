#include <iostream>

using namespace std;

int main(){
	int N, M[500], count = 0;
	bool active;
	while (cin >> N){
		for (int i = 0; i < N; i++){
			cin >> M[i];
		}
		for (int i = 0; i < N - 1; i++){
			active = false;
			for (int j = i + 1; j < N; j++){
				if (M[i] == M[j] && active == false){
					count++;
					active = true;
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
