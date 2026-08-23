class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int ls = 0 ;
        int lq = 0 ;
        int rs = 0 ;
        int rq = 0 ;

        for(int i = 0 ; i< n ; i++){
            if(i<n/2){
                if(num[i]!='?'){
                    ls += (num[i]-'0');
                }else{
                    lq++;
                }
            }else{
                if(num[i]!='?'){
                    rs += (num[i]-'0');
                }else{
                    rq++;
                }
            }
        }

        int vq= abs(lq-rq);
        int rn = abs(ls - rs);

        if(vq == 0 ){
            return !(rn == 0);
        }

        if(ls>rs && lq>rq || ls<rs && lq<rq){
            return true;
        }

        if(vq & 1==1){
            return true ;
        }else{
            int n = vq/2;

            return !(rn == 9*n);
        }

        return true;
    }
};