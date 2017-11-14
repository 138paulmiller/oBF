//138paulmiller@github.com
#define MEMSIZE 9<<20
#define F(f,z)inline f(a)z 
#define Z(a,b)a##tchar(b)
#define G(x,y,z,w)*I,*T,i,j,k,c,**V,v=1,d;F(H,x)F(E,y)F(L,z)F(P,w)(*A[])()={H,E,L,P};
G({a?--k:v<d?(k[T]= atoi(V[v++])):exit(0);},{a?(k[T]?go(-1):0):--k[T];},{a?++k:Z(pu,k[T]);},{a?(k[T]?0:go(1)):++k[T];})
inline Q(c,z,e){z=c/10;e=c%10;return ~c?((z^4||e^3&&e^4&&e^5&&e^6)?(z^6||e^0&&e^2)?(z^9||e^1&&e^3)?0:c:c:c)&&(I[++i]=c):i++,c;}
inline go(d){c=d;while((I[(i+=d)]-91)?(I[i]-93)?1:(c-=1):(c+=1));}
main(a,_){V=_,j=i,i=-1,k=0;a?(I=sbrk(SZ)):(T=sbrk(SZ));while(a?~Q(Z(ge,))||
main((d=a)*0,_):++i<=j&&1|(A[(I[i]&0xF)%4]((I[i]>>4)-2)));}

/* Another Version without action mapping but each int has opcode and jump location
#define E(a) if(X){a;break;}
int T[9<<16], I[9<<16], *p = T, c, A=1, l, i=0;
X = 0;
main(int C, char**V)
{
	memset(p, 0, sizeof I *2);
	while(X?++i<l:~(c=getchar())||(l=i,i=-1,p=T,X=1))
	{	
		switch(~c?c-=42:63&I[i])
		{
			case 49: E(if(!*p)i = I[i]>>6)	
			case 51:E(if(*p) i = I[i]>>6) c-49? (I[(*p)] |= i<<6, I[i] |= *p<<6, *p--=0):(*(++p) = i);
			case 20:E(p++)
			case 18:E(p--)
			case 1:E((*p)++)
			case 3:E((*p)--)
			case 4:E(putchar(*p))
			case 2: E( A<C?*p=atoi(A++[V]):exit(1) )
				i++[I]|=c&63;
		}
	}
}

  
*/
