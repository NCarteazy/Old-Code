%Nick Carter
%lab 20
%11/8/2012

%ode
[t,yy] = ode45(@linearz,[0,500],[-1,1],[],.16,.4,.97)
plot(yy(:,1),yy(:,2))
