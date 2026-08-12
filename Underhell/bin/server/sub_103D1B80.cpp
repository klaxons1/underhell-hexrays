void __thiscall sub_103D1B80(_DWORD *this)
{
  void (__noreturn ***v2)(); // esi

  if ( this[289] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[5])(v2, this[289]);
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[289]);
    this[289] = 0;
  }
}
