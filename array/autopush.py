import os
import time

repo_path = r"C:\Users\Manish Pandey\Desktop\SU\c"

while True:
    os.chdir(repo_path)

    # Stage all changes
    os.system("git add .")
    
    # Commit changes with message, ignore error if nothing to commit
    os.system('git commit -m "Auto update" || echo "No changes to commit"')
    
    # Pull latest changes safely with rebase
    os.system("git pull origin main --rebase || echo 'Pull failed, check manually'")
    
    # Push to GitHub
    os.system("git push origin main || echo 'Push failed, check manually'")
    
    print("✅ Auto push attempt completed!")
    
    # Wait 5 minutes
    time.sleep(300)
