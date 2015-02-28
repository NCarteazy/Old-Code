[t,zz]=ode45(@damp,[0,300],[0,0, .02*pi,0],[])
plot(t,zz(:,1))