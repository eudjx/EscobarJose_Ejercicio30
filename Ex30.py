#Código tomado de mi repositorio, ejercicio 29

import os
import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("Ex29.dat")
plt.figure(figsize=(20,5))
plt.subplot(1,2,1)
plt.imshow(data/np.max(data[:,0]))
plt.colorbar()
plt.subplot(1,2,2)
plt.plot(data[:,0], data[:,1]/np.max(data[:,1]))
plt.title("Diffusive equation")
plt.xlabel("t")
plt.ylabel("Diffusion")
plt.savefig("diff.png")
plt.show()
