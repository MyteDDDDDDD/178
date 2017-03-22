#include<iostream>
using namespace std;
int k, p;
int cate[20];
int pNum[1000];

int main() {
	cin >> k>>p;
	int **pCate = new int*[1000];
	while (!cin.eof()&&!(k==0&&p==0)) {
		memset(cate, 0, sizeof(cate));
		memset(pNum, 0, sizeof(pNum));
		for (int i = 0; i < k; i++) {
			cin >> cate[i];
		}
		for (int i = 0; i < p; i++) {
			cin >> pNum[i];
			pCate[i] = new int[pNum[i]];
			for (int j = 0; j < pNum[i]; j++) {
				cin >> pCate[i][j];
			}
		}
	}
	return 0;
}
