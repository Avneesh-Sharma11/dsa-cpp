class Solution {
	public:
	
	int merge(vector<int> &arr, int s, int mid, int e) {
		
		vector<int> temp;
		int i = s, j = mid + 1;
		int invCnt = 0;
		while (i <= mid && j <= e) {
			if (arr[i] <= arr[j]) {
				temp.push_back(arr[i]);
				i++;
			} else {
				temp.push_back(arr[j]);
				j++;
				invCnt += mid - i + 1;
			}
		}
		while (i <= mid) {
			temp.push_back(arr[i]);
			i++;
		}
		while (j <= e) {
			temp.push_back(arr[j]);
			j++;
		}
		for (int i = 0; i < temp.size(); i++) {
			arr[i + s] = temp[i];
		}
		return invCnt;
	}
	
	int mergeSort(vector<int> &arr, int s, int e) {
		if (s < e) {
			int mid = s + (e - s)/2;
			
			int leftInvCnt = mergeSort(arr, s, mid);
			int rightInvCnt = mergeSort(arr, mid + 1, e);
			int InvCnt = merge(arr, s, mid, e);
			
			return (leftInvCnt + rightInvCnt + InvCnt);
		}
		return 0;
	}
	
	int inversionCount(vector<int> &arr) {
		// Code Here
		int st = 0, end = arr.size() - 1;
		
		return mergeSort(arr, st, end);
	}
};
