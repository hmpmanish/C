import os
import time

# Path to your local repo
repo_path = r"C:\Users\Manish Pandey\Desktop\SU\c"

while True:
    os.chdir(repo_path)
    
    # Pull latest changes first to avoid non-fast-forward error
    os.system("git pull origin main --rebase")
    
    # Stage changes
    os.system("git add .")
    
    # Commit changes with a generic message
    os.system('git commit -m "Auto update"')
    
    # Push to GitHub
    os.system("git push origin main")
    
    print("✅ Code auto pushed to GitHub!")
    
    # Wait for 5 minutes (300 seconds) before next push
    time.sleep(300)
