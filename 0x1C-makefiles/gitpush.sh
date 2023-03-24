
#!/usr/bin/env bash

git add .
echo "Enter commit message"
read commitmes
git commit -m "$commitmes"
git push
