int __thiscall sub_1004BC40(_BYTE *this)
{
  int (*v2)(void); // edx
  int result; // eax

  v2 = *(int (**)(void))(*(_DWORD *)this + 2168);
  this[3547] = 0;
  result = v2();
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2176))(this);
  return result;
}
