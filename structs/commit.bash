echo "Please enter a commit message"
 read cm 
$(git add .) $(git commit -m < "$cm") 
echo "fin"
