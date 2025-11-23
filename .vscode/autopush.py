import os, time

while True:
    os.chdir(r"C:\Users\Manish Pandey\Desktop\SU\c")
    os.system("git add .")
    os.system('git commit -m "Auto update"')
    os.system("git push origin main")
    print("✅ Code auto pushed to GitHub!")
    time.sleep(300) # 5 minutes wait
