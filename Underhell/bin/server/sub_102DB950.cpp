void __thiscall sub_102DB950(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax

  if ( this[1230] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1230]);
    this[1230] = 0;
  }
  if ( this[1231] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[1231]);
    this[1231] = 0;
  }
}
