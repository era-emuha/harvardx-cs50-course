from PIL import Image, ImageFilter

before = Image.open("photo.jpg")
# Apply a series of filters to the image
# Make it blurry
after = before.filter(ImageFilter.BoxBlur(10))
# Make it edgy
#after = before.filter(ImageFilter.FIND_EDGES)
after.save("photo_blurred.jpg")

