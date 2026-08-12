int __thiscall sub_1026A200(_DWORD *this, float a2)
{
  void (__noreturn ***v3)(); // edi
  int result; // eax

  v3 = sub_1023DBA0();
  if ( this[100] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[100]);
    this[100] = 0;
  }
  result = this[99];
  if ( result )
  {
    this[100] = result;
    this[99] = 0;
    return ((int (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[13])(v3, result, LODWORD(a2), 0);
  }
  return result;
}
