void __thiscall sub_103F9DB0(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax

  if ( this[374] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[374]);
    this[374] = 0;
  }
}
