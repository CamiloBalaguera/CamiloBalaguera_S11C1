import numpy as np
import matplotlib.pyplot as plt

t = np.genfromtxt("datos.txt", usecols = (0))
y1 = np.genfromtxt("datos.txt", usecols = (1))
y2 = np.genfromtxt("datos.txt", usecols = (2))


plt.figure()
plt.plot(np.transpose(t)[:998], np.transpose(y1)[:998], label = "Caso 1, Poblacion sana")
plt.plot(np.transpose(t)[:998], np.transpose(y2)[:998], label = "Caso 1, Poblacion infectada", c = "r")
plt.plot(np.transpose(t)[1000:-3], np.transpose(y1)[1000:-3], label = "Caso 2, Poblacion sana", c = "k")
plt.plot(np.transpose(t)[1000:-3], np.transpose(y2)[1000:-3], label = "Caso 2, Poblacion infectada", c = "g")
plt.legend(loc=0)
plt.savefig("SIR.pdf")

