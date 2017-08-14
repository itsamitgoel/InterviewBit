vector<vector<int> > Solution::squareSum(int A) {

	vector<vector<int> > ans;
	
	
for (int a = 1; a * a < A; a++) {
	
	for (int b = 1; b * b < A; b++) {

			if (a * a + b * b == A) {

				vector<int> newEntry;
 
				newEntry.push_back(a);

				newEntry.push_back(b);

			    vector<int> newEntry1; 
	
			newEntry1.push_back(b);

				newEntry1.push_back(a);
if ( find(ans.begin(), ans.end(), newEntry1) == ans.end() )
//for checking that item is not present already
	
			ans.push_back(newEntry);

			}
		}
	}

	return ans;

}