void __thiscall sub_103D7B40(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax

  if ( this[282] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[282]);
    this[282] = 0;
  }
}
