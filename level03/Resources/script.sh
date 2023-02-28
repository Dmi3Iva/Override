values=(1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21)
constant=322424845

for t in ${values[@]}; do password=$(expr $constant - $t); result=$(echo $password | ./level03 | tail -n 1); [[ "$result" != "Invalid Password" ]] && echo your pass is $password; done