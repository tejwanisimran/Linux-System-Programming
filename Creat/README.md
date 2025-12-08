#Name:-
    creat — create a new file or truncate an existing one.
#Header File:-
    # include <fcntl.h>
__Prototype:-__
    int creat(const char *pathname, mode_t mode);
__Parameters:-__
    pathname - Path of file to create(and open for writing).
    mode - Permission bits(eg :- 0644).
__Descrption:-__
   The creat() function shall behave as if it is implemented as
   follows:
       int creat(const char *pathname, mode_t mode)
       {
           return open(path, O_WRONLY|O_CREAT|O_TRUNC, mode);
       }
__Return Value:-__
    >= 0 -- New File descriptor
    -1 -- Error , errno set.
__Errors:-__
    __EACCES (Permission denied):__ The process does not have the necessary permissions to create the file in                                     the specified directory.
    __EEXIST (File exists):__ This happens if the file already exists and the system call is used in a                                      context that prohibits this (though creat() itself is meant to truncate an                                    existing file,other flags in the modern open() call with O_CREAT|O_EXCL can                                   return this).
    __EISDIR (Is a directory):__ The specified file name is an existing directory.
    __ENOSPC (No space left on device):__ The device is full and the file cannot be created or written to.
    

