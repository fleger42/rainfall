void main(int param_1,int param_2)

{
  N *this;
  undefined4 *this_00;
  
  if (param_1 < 2) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  this = (N *)operator_new(0x6c);
  N::N(this,5);
  this_00 = (undefined4 *)operator_new(0x6c);
  N::N((N *)this_00,6);
  N::setAnnotation(this,*(char **)(param_2 + 4));
  (**(code **)*this_00)(this_00,this);
  return;
}

// N::N(int)
class N {


}

void __thiscall N::N(N *this,int param_1)

{
  *(undefined ***)this = &PTR_operator__08048848;
  *(int *)(this + 0x68) = param_1;
  return;
}
// N::setAnnotation(char*)

void __thiscall N::setAnnotation(N *this,char *param_1)

{
  size_t __n;
  
  __n = strlen(param_1);
  memcpy(this + 4,param_1,__n);
  return;
}

int N::operator+(N param_1)

{
  return *(int *)(param_1 + 0x68) + *(int *)(this + 0x68);
}

int N::operator-(N param_1)

{
  return *(int *)(this + 0x68) - *(int *)(param_1 + 0x68);
}