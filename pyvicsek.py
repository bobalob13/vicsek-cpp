import numpy as np
import matplotlib.pyplot as plt
import glob
import natsort
import subprocess
from matplotlib.animation import FuncAnimation

class Wrapper:
    def __init__(self, noise=0.1):
         self.noise = noise

    def run(self):
             path = "/home/dylan/vicsek-cpp/myvicsek"
             command = [path, str(self.noise)]
             result = subprocess.run(command, capture_output=True, text=True)
             return result
        
def read_config(filename, skip=2):
    #"""Reading an vicsek configuration from a file handle"""
    with open(filename, 'r') as file_handle:
        # skip the first two lines
        for i in range(skip): 
            next(file_handle)

        data = np.loadtxt(file_handle)
        conf = {}

        conf["id"] = data[:,0]
        conf["x"] = data[:,1]
        conf["y"] = data[:,2]
        conf["theta"] = data[:,3]
        conf["vx"] = np.cos(conf["theta"])
        conf["vy"] = np.sin(conf["theta"])  
        return conf

def plot(conf,ax):
    qv = ax.quiver(conf["x"], conf["y"], conf["vx"], conf["vy"], conf["theta"], scale=1, scale_units='xy', cmap='hsv')
    return qv

#def animate(i):
    #print(i)
    conf = read_config(files[i])
    pos = np.array(list(zip(conf["x"], conf["y"])))
    #print(pos)
    qv.set_offsets(pos)
    qv.set_UVC(conf["vx"], conf["vy"], conf["theta"])
    return qv

#files = natsort.natsorted(glob.glob("frames/*"))
#fig, ax = plt.subplots()
#qv = plot(read_config(files[0]), ax)
#plt.axis('equal')
#plt.axis('off')
#anim = FuncAnimation(fig, animate, frames=len(files), interval=50)
#plt.show()
        