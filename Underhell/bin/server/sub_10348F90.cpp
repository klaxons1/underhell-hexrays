int __thiscall sub_10348F90(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi

  v2 = sub_1023DBA0();
  if ( this[1038] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1038]);
    this[1038] = 0;
  }
  if ( this[1039] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1039]);
    this[1039] = 0;
  }
  if ( this[1040] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1040]);
    this[1040] = 0;
  }
  if ( this[1041] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1041]);
    this[1041] = 0;
  }
  return sub_102B3100(this);
}
