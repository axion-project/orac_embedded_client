# Compile the Assembly file into an object file
as orac_api.s -o orac_api.o

# Compile the C wrapper (or your main application file) and link with the Assembly object file
gcc main.c orac_api.o -o orac_client
