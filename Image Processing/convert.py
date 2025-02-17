import pandas as pd                   # read data 
import numpy as np                    # create array 
import cv2                            # image processing
import matplotlib.pylab as pltlib     # plot and visualization
from PIL import Image 

# set the style for plots to 'ggplot'
pltlib.style.use('ggplot')            

# read the image using matplotlib and
img_matplotlib = pltlib.imread('c:/Briefcase/Image Processing/image.jpg')       
img_cv = cv2.imread('c:/Briefcase/Image Processing/image.jpg')
img_pil = Image.open('c:/Briefcase/Image Processing/image.jpg')

# print shape of image array 
print(img_matplotlib.shape)    # (height, width, channels)                                                 
print(img_cv.shape)            # (1464, 976, 3) (depend on image)
print(img_pil.size)            

# display the image using matplotlib
print(img_matplotlib)          # the output is array, matplotplib.pylab is RGB
print(img_cv)                  # the output is array, cv2 is BGR
print(img_pil)
                               # [[[219  21  20]  represents RGB Red, Green, Blue values
                               #   [219  21  20]  the bigger the values, the brighter the color
                               #   [219  21  20]
                               
# create figure and set subplots with specific size 
fig, ax = pltlib.subplots(figsize=(10, 5))
ax.imshow(img_matplotlib)
ax.axis('off')                  # turn off axis
ax.set_title('Original Pict')
pltlib.show()                   # display the image

# divide the image into RGB color
fig, axs = pltlib.subplots(1,3, figsize = (10,5))
axs[0].imshow(img_matplotlib[:,:,0],cmap = 'Reds')           # display image in red
axs[1].imshow(img_matplotlib[:,:,1],cmap = 'Greens')         # display image in green
axs[2].imshow(img_matplotlib[:,:,2],cmap = 'Blues')          # display image in blue
# the darker the color on the image, the more color of it on original image

axs[0].axis('off')
axs[1].axis('off')
axs[2].axis('off')

axs[0].set_title('Red Channel')
axs[1].set_title('Green Channel')
axs[2].set_title('Blue Channel')
pltlib.show()

fig, axs = pltlib.subplots(1,2, figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].set_title('Matplotlib Pict')
axs[0].axis('off')
axs[1].imshow(img_cv)
axs[1].set_title('OpenCV Pict')
axs[1].axis('off')
pltlib.show()

# convert img_cv into RGB color
img_cv_rgb = cv2.cvtColor(img_cv,cv2.COLOR_BGR2RGB)
fig,axs = pltlib.subplots(1,2, figsize = (10,5))
axs[0].imshow(img_cv)
axs[0].axis('off')
axs[0].set_title("Image CV from BGR")
axs[1].imshow(img_cv_rgb)
axs[1].axis('off')
axs[1].set_title("Image CV to RGB")
pltlib.show()

# convert img_cv into gray Color
img_cv_gray = cv2.cvtColor(img_matplotlib,cv2.COLOR_BGR2GRAY)
fig,ax = pltlib.subplots(figsize = (10,5))
ax.imshow(img_cv_gray,cmap = 'Grays')
ax.axis('off')
ax.set_title("Image CV to Gray")
pltlib.show()

# reducing pixel of image
img_reduce = cv2.resize(img_matplotlib, None, fx=0.12, fy=0.12)
fig,axs = pltlib.subplots(1,2,figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].axis('off')
axs[0].set_title("Original Image")
axs[1].imshow(img_reduce)
axs[1].axis('off')
axs[1].set_title("Reduced Image")
pltlib.show()

# resizing image 
img_resize = cv2.resize(img_matplotlib, (300, 800))
fig,axs = pltlib.subplots(1,2,figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].axis('off')
axs[0].set_title("Original Image")
axs[1].imshow(img_resize)
axs[1].axis('off')
axs[1].set_title("Resized Image")
pltlib.show()

# interpolating image
img_interpolate = cv2.resize(img_matplotlib, (2000,2800), interpolation = cv2.INTER_CUBIC)
fig,axs = pltlib.subplots(1,2,figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].axis('off')
axs[0].set_title("Original Image")
axs[1].imshow(img_interpolate)
axs[1].axis('off')
axs[1].set_title("Interpolated Image")
pltlib.show()

# sharpening image
kernel_sharpening = np.array([[0,-1,0], [-1,9,-1], [-1,-1,-1]])
img_sharpen = cv2.filter2D(img_matplotlib, -1, kernel_sharpening)
fig,axs = pltlib.subplots(1,2,figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].axis('off')
axs[0].set_title("Original Image")
axs[1].imshow(img_sharpen)
axs[1].axis('off')
axs[1].set_title("Sharpened Image")
pltlib.show()

# Blurring image 
img_blur = cv2.blur(img_matplotlib, (20,20))
fig,axs = pltlib.subplots(1,2,figsize = (10,5))
axs[0].imshow(img_matplotlib)
axs[0].axis('off')
axs[0].set_title("Original Image")
axs[1].imshow(img_blur)
axs[1].axis('off')
axs[1].set_title("Blurred Image")
pltlib.show()
