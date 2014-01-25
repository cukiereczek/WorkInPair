void min(int t[], n){
	int min = t[0];
	for(int i=1; i < n; ++i)
		if(t[i] < min)
			min = t[i];
			
	return min;
}
