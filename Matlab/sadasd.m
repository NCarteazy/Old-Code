

  x0 = .3
  y0 = .4

  x = 0
  y = 0

  iteration = 0
  max_iteration = 1000

  while ( x*x + y*y < 2*2  &&  iteration < max_iteration )
  
    xtemp = x*x - y*y + x0
    y = 2*x*y + y0

    x = xtemp

    iteration = iteration + 1
  end

  color = iteration

  plot(x0,color)
