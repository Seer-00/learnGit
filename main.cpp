/*
	For ѭ����� MIN ~ MAX ��ֵ
	�޸� MIN �� MAX �ĺ궨�壬���ɸı����
*/

/*
	�������������Ź���
	2020-07-23
*/

#include <iostream>
#define min 80 
#define max 120 

using namespace std;

int main()
{
	int i;
	for (i = min; i < max; i++) {
		// �������ǰ���д�1��ʼ���������
		cout << (i - min + 1) << ":" << i << endl;
	}

	system("pause");
	return 0;
}
