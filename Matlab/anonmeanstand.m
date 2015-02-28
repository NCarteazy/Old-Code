dat = [1:3:52];
mean = @(d)((1/length(d-1)) * (sum(d)))
for j = 1:length(dat)
    list(j) = (dat(j)- mean(dat))^2;
end
stan = @(d,l)(sqrt(sum(l)/(length(d)-1)))
dev = stan(dat,list)
avg = mean(dat)