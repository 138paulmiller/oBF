//138paulmiller@github.com
#define D(x,T,F)(d-=x)?F:T
#define E(a,b)(X?a:b-(i++[I]|=c&63))
#define Q(a,b,c,d)D(a,E(b,c),d)
int T[9<<16]={0},I[9<<16]={0},*p=T,c,d,A=1,l,i=0,X=0;
main(int C,char**V){while(X?++i<l:~(c=getchar())||(l=i,i=-1,p=T,X=1))
d=~c?c-=42:63&I[i],Q(1,(*p)++,0,Q(1,A<C?*p=atoi(A++[V]):exit(1),,
Q(1,(*p)--,,Q(1,putchar(*p),,Q(14,p--,,Q(2,p++,,Q(29,*p?0:(i=I[i]>>6),
(*(++p)=i),Q(2,*p?(i=I[i]>>6):0, ((*p)[I]|=i<<6,I[i]|=*p<<6,*p--=0),))))))));}
