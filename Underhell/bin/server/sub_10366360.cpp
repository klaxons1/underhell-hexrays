int __thiscall sub_10366360(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax

  if ( this[943] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[943]);
    this[943] = 0;
  }
  if ( this[1004] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[1004]);
    this[1004] = 0;
  }
  return sub_1032D020(this);
}
