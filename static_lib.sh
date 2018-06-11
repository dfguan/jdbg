ar -r libjellyfish.a lib/*.o
g++ jellyfish.o libjellyfish.a -lpthread -o jdbg

echo "Generate jdbg successfully"
