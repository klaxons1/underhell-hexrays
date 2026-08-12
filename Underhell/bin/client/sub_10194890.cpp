void __thiscall sub_10194890(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax

  if ( this[846] )
  {
    v2 = sub_101218C0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[846]);
    this[846] = 0;
  }
  if ( this[847] )
  {
    v3 = sub_101218C0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[847]);
    this[847] = 0;
  }
  if ( this[848] )
  {
    v4 = sub_101218C0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v4)[10])(v4, this[848]);
    this[848] = 0;
  }
}
