# Before running the application, please make sure that you go ahead and set the environment variable that we are to use inside of the program.

export HOSTNAME = "Whatever"

# In order to run this file, the compile command is:

```
gcc -o simple-guile simple-guile.c `pkg-config --cflags --libs guile-3.0`
```

