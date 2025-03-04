import scipy.stats
import numpy as np
from scipy.stats import t

data = np.array([16, 16, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
    19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 21,
    21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 23, 23, 26, 27, 27, 27, 27, 28,200, 1989])
sum = np.sum(data)
total = len(data)
mean = np.mean(data)

print("total penjumlahan data : ", sum)
print("banyak data: ", total)
print("rata-rata data : ",mean)

std = np.std(data) 
print("standar deviasi sample : ",std)

ks_stat, p_value = scipy.stats.kstest(data, 'norm', args=(mean, std))

print("nilai K-S Test: ",ks_stat)
print("nilai P-Value: ",p_value)

log_transformed = np.log(data)
print(log_transformed)

sqrt_transformed = np.sqrt(data)
print(sqrt_transformed)

print((1989-mean)/std)

max_deviation = np.max(np.abs(data-mean))
G = max_deviation / std
print("G : ",G)

n = len(data)
alpha = 0.05 
t_crit = t.ppf(1 - alpha / (2 * n), n - 2)
G_crit = ((n - 1) / np.sqrt(n)) * np.sqrt((t_crit**2) / (n - 2 + t_crit**2))
print("Nilai kritis G :",G_crit)

