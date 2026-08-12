int __thiscall sub_10261320(_BYTE *this, char a2)
{
  int (*v3)(void); // edx
  int result; // eax
  int (__thiscall *v5)(_BYTE *, int); // edx

  v3 = *(int (**)(void))(*(_DWORD *)this + 128);
  this[216] = a2;
  result = v3();
  if ( (_BYTE)result )
  {
    v5 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 232);
    if ( a2 )
      return v5(this, 10);
    else
      return v5(this, 2);
  }
  return result;
}
