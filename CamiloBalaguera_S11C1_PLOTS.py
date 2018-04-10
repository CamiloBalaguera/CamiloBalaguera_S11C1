import numpy as np
import matplotlib.pyplot as plt

t = np.genfromtxt("Datos1.txt", usecols = (0))
y1 = np.genfromtxt("Datos1.txt", usecols = (1))
y2 = np.genfromtxt("Datos2.txt", usecols = (1))

plt.figure()
plt.plot(t, y1, label = "Caso 1")
plt.plot(t, y2, label = "Caso 2")
plt.legend(loc=0)
