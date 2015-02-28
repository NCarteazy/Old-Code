solinit=bvpinit(linspace(0,1,5),[1,1,1,-10,.91]);
x=linspace(0,1,50);

expsol=bvp4c(@odea,@odebca,solinit)
y=deval(expsol,x);
plot(x,y(1,:))