mean = inline('(1/length(a-1)) * (sum(a))','a');
stand = inline('sqrt(sum(l)/(length(d)-1))','d','l');