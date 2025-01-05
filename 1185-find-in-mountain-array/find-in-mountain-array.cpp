/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &A) {
        int lo,hi,peak=0;
        lo=0;
        hi=A.length()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A.get(mid)<A.get(mid+1))lo=peak=mid+1;
            else hi=mid;
        }
        lo=0;
        hi=peak;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(A.get(mid)<target)lo=mid+1;
            else if (A.get(mid)>target)hi=mid-1;
            else return mid;
        }
        lo=peak;
        hi=A.length()-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(A.get(mid)>target)lo=mid+1;
            else if (A.get(mid)<target)hi=mid-1;
            else return mid;
        }
        return -1;



    }
};