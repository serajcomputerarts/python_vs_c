# This is python file
import time
# starting timer
s=time.time()
k=0
# main loop 
for x in range(1000000):
  k=k+x
# stopping timer
e=time.time()
# calculating runtime
print(e-s)