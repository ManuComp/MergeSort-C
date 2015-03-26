
template <typename T>{
	T merge(T *A, int a, T * B, int b, T * R){
		int i = 0, j = 0 k = 0;
		while(i<a && j<b){
			if(A[i]<B[j])
				R[k++] = A[i++];
			else
				R[k++] = B[j++];
		}
		while(i<a)
			R[k++] = A[i++];
		while(j<b)
			R[k++] = B[j++];
	}
}

template <typename T> {
	void msort(T * L, int n){
		if(n < 2)
			return;
		int a = n/2;//piso
		int b = n - n/2;//techo
		T * A;
		T * B;
		A = malloc(sizeof(T)*a);
		B = malloc(sizeof(T)*b);
		for(int i=0 ; i < a ; i++)
			A[i] = L[i];
		for(int j=0 ; j < b ; j++)
			B[j] = L[j+a];
		msort(A,a);
		msort(B,b);
		merge(A,a,B,b,L);
	}
}