/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int lo=1;
        long long int hi=n;
        while(lo<=hi){
            long long int mid=lo+(hi-lo)/2;
            int k=guess(mid);
            if(k==1){
                 lo=mid+1;
            }
            else if(k==-1){
                 hi=mid-1;
            }
            else{
                return mid;
            }
    }
    return -1;
    }
};