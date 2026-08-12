void __thiscall sub_102DB8E0(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax

  if ( this[1230] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, int))(*v2)[13])(v2, this[1230], 0.5, 1);
    this[1230] = 0;
  }
  if ( this[1231] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, int))(*v3)[13])(v3, this[1231], 0.5, 1);
    this[1231] = 0;
  }
}
