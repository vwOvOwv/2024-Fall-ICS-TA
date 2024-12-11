extern int undef_var1;
extern int undef_var2;

int *global_pointer = &undef_var1;

int main(){
    static int *static_pointer = &undef_var2;
    return 0;
}

