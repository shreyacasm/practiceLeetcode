

bool threeConsecutiveOdds(int* arr, int arrSize){
    int i=0,count=0;
    for(i=0;i<arrSize;i++){
        if(arr[i]%2==1){
            if(++count==3){
                return true;
            }
        }
        else{
            count=0;
        }
        
    }
    return false;
}