string answer(int *maria[],int *andrea[],string call){
    int i=0;
    int n= maria.size();
    if(call=="even"){
        i=0;
    }
    else{
        i=1;
    }
    int m_score=0;
    int a_score=0;
    while(i<n){
        m_score = m_score + (maria[i]-andrea[i]);
        a_score = a_score + (andrea[i]-maria[i]);
        i+=2;
    }
    if(m_score > a_score){
        return "maria";
    }
    else{
        return "andrea"
    }
};