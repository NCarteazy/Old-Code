function [men,stand] = stanmean(a)

men = meanw(a);
stand = stanw(a);
function [q] = meanw(a)
q = (1/length(a-1)) * (sum(a));

function [t] = stanw(b)
for j = 1:length(b)
    list(j) = (b(j)- meanw(b))^2;
end
t = sqrt(sum(list)/(length(b)-1));