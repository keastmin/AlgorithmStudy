#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define VAL 10000000

/*
int main() {
	vector<long long> v;
	long long cnt = 0;
	v.push_back(1);
	long long start = 0;
	long long end = VAL;
	cout << "{";
	while (cnt<=13559699) {
		cout << cnt << ", ";
		for (long long i = start;i < end; i++) {
			string s = to_string(i);
			if (s.find("666")!=string::npos){
				cnt++;
			}
		}
		start += VAL;
		end += VAL;
	}
	cout << "}";
}*/

int N;
int cnt[] = { 0, 45991, 91982, 137973, 183964, 229955, 
275946, 411766, 457757, 503748, 549739, 
595730, 641721, 687712, 733703, 779694, 
825685, 961505, 1007496, 1053487, 1099478, 
1145469, 1191460, 1237451, 1283442, 1329433, 
1375424, 1511244, 1557235, 1603226, 1649217, 
1695208, 1741199, 1787190, 1833181, 1879172, 
1925163, 2060983, 2106974, 2152965, 2198956, 
2244947, 2290938, 2336929, 2382920, 2428911, 
2474902, 2610722, 2656713, 2702704, 2748695, 
2794686, 2840677, 2886668, 2932659, 2978650, 
3024641, 3160461, 3206452, 3252443, 3298434, 
3344425, 3390416, 3436407, 3482398, 3528389, 
3574380, 4607680, 4653671, 4699662, 4745653, 
4791644, 4837635, 4883626, 4929617, 4975608, 
5021599, 5157419, 5203410, 5249401, 5295392, 
5341383, 5387374, 5433365, 5479356, 5525347, 
5571338, 5707158, 5753149, 5799140, 5845131, 
5891122, 5937113, 5983104, 6029095, 6075086, 
6121077, 6256897, 6302888, 6348879, 6394870, 
6440861, 6486852, 6532843, 6578834, 6624825, 
6670816, 6806636, 6852627, 6898618, 6944609, 
6990600, 7036591, 7082582, 7128573, 7174564, 
7220555, 7356375, 7402366, 7448357, 7494348, 
7540339, 7586330, 7632321, 7678312, 7724303, 
7770294, 7906114, 7952105, 7998096, 8044087, 
8090078, 8136069, 8182060, 8228051, 8274042, 
8320033, 8455853, 8501844, 8547835, 8593826, 
8639817, 8685808, 8731799, 8777790, 8823781, 
8869772, 9005592, 9051583, 9097574, 9143565, 
9189556, 9235547, 9281538, 9327529, 9373520,
9419511, 9555331, 9601322, 9647313, 9693304,
9739295, 9785286, 9831277, 9877268, 9923259, 
9969250, 11002550, 11048541, 11094532, 11140523, 
11186514, 11232505, 11278496, 11324487, 11370478, 
11416469, 11552289, 11598280, 11644271, 11690262, 
11736253, 11782244, 11828235, 11874226, 11920217, 
11966208, 12102028, 12148019, 12194010, 12240001, 
12285992, 12331983, 12377974, 12423965, 12469956, 
12515947, 12651767, 12697758, 12743749, 12789740,
12835731, 12881722, 12927713,12973704, 13019695, 
13065686, 13201506, 13247497, 13293488, 13339479, 
13385470, 13431461, 13477452, 13523443, 13559699 };

int main() {
	cin >> N;
	int num = 0;
	for (auto i: cnt) {
		if (i >= N)
			break;
		num++;
	}

	long long start = VAL * (num - 1);
	long long end = start + VAL;

	int ans = cnt[num-1];
	for (long long i = start;i < end; i++) {
		string s = to_string(i);
		if (s.find("666") != string::npos) {
			ans++;
		}
		if (ans == N) {
			cout << i;
			return 0;
		}
	}

}