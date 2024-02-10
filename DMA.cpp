char* ch= new char;
int* i= new int;
int* arr=new int[5];


int main(){

    int n;
    cin>>n;
    int* arr=new int[n];

    for (int i=0; i<n; i++){
        cin>>arr[i]
    }

    int ans=getsum(arr,n);
    cout<<"answer is"<<ans<<endl;

return 0;
}



static:

int arr[50]

Dynamic:

int* arr=new int[50]
