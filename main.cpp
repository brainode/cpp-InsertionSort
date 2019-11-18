#include <vector>

/*
 * sortAsc - get adress of vector to sort, and sorts it in ascending
 */
void sortAsc(std::vector<int> &ArrayToSort){
    for(int i=1,k=1;i<ArrayToSort.size();i++,k=i){
        int j = i-1;
        while(ArrayToSort[j]>ArrayToSort[k] and j>=0){
            ArrayToSort[j]+=ArrayToSort[k];
            ArrayToSort[k] = ArrayToSort[j]-ArrayToSort[k];
            ArrayToSort[j]-=ArrayToSort[k];
            j--,k--;
        }
    }
}

/*
 * sortDesc - get adress of vector to sort, and sorts it in descending
 */
void sortDesc(std::vector<int> &ArrayToSort){
    for(int i=ArrayToSort.size()-2,k=i;i>=0;i--,k=i){
        int j = i+1;
        while(ArrayToSort[j]>ArrayToSort[k] and j<=ArrayToSort.size()-1){
            ArrayToSort[j]+=ArrayToSort[k];
            ArrayToSort[k] = ArrayToSort[j]-ArrayToSort[k];
            ArrayToSort[j]-=ArrayToSort[k];
            j++,k++;
        }
    }
}

int main() {
    std::vector<int> InputArray = {31,41,59,26,41,58};
    sortAsc(InputArray);
    sortDesc(InputArray);
    return 0;
}