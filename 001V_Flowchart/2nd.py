num = int(input())

if num<0 or num>100:
    print("Numbers must be non negetive and below or equal to hundred.")
elif num>=90:
    print("A")
elif num>=80:
    print("B")
elif num>=70:
    print("C")
elif num>=60:
    print("D")
else:
    print("F")