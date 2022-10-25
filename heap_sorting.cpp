 #include<iostream>
 using namespace std;
 
 class heap{
 	public:
 		int arr[100];
 		int size = 0;
 		void swap(int *a,int *b){
 			int temp =*a;
 			*a = *b;
 			*b = temp;
		 }
 		void insert( int val) {
 			size = size +1;
 			int index = size;  //// 50 55 --> 55 50 52
 			arr[index] = val;
 			
 			while(index>1){
 				
 				int parent = index/2;
 				if(arr[parent] < arr[index] ){
 					swap(&arr[parent],&arr[index]);
 					index = parent;
				 }
				 else{
				 	return;
				 }
			 }
		 }
		 void print(){
		 	for(int i = 1;i<=size ;i++){
		 		cout<<arr[i]<<" ";
			 }cout<<endl;
		 }
 };
void heapify(int arr[], int n , int i){
	int largest = i;
	int left = 2*i;
	int right = 2*i +1;
	
	if(arr[largest] < arr[left] && left <= n){
		largest = left;
	}
	if(arr[largest] < arr[right] && right <= n ){
		largest = right;
	}
	if(largest !=  i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
		
	}
	
}

void heapSort(int arr[], int n){
	
	int size = n;
	while(size >1){
		swap(arr[size], arr[1] );
		size--;
		heapify(arr,size,1);
	}
	
}
void print(int arr[],int size){
			for(int i = 1;i <= size ;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
}
 
 int main(){
 	
 	heap h;
 	h.insert(55);
 
 	h.insert(50);
 
 	h.insert(41);
 
 	h.insert(66);
 
 	h.insert(52);
	
	int arr[6] ={-1,45,70,33,55,63};
	int n = 5;
	for(int i = n/2 ; i >0 ;i--){
		heapify(arr,n,i);
	}
	print(arr,5);
	heapSort(arr, 5);
	print(arr,5);
	
	
 	return 0;
 }
