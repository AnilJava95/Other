import numpy as np
np.random.seed(1234)
nwalks = 5000
nsteps = 1000
draws = np.random.normal(loc=0, scale=0.25, size=(nwalks, nsteps))
steps = np.where(draws > 0, 1, -1)
walk = steps.cumsum(1)
print(walk)

hits30 = (walk <= -30).any(1)
print(hits30)
print(hits30.sum())

crossing_times = (walk[hits30] <= -30).argmax(1)
print(crossing_times)

print(crossing_times.mean())