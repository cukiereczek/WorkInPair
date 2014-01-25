void min(int t[], n){
	int max = t[0];
	for(int i=1; i < n; ++i)
		if(t[i] > min)
			max = t[i];
			
	return max;
}
