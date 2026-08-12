int __thiscall sub_103F9D40(_BYTE *this)
{
  int result; // eax
  int (__thiscall *v3)(_BYTE *, int); // edx

  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 956))(this);
  if ( (_BYTE)result )
  {
    v3 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 944);
    if ( this[1393] )
      return v3(this, 183);
    else
      return v3(this, 174);
  }
  return result;
}
