int __thiscall sub_1026A300(_DWORD *this, float a2)
{
  char **v3; // edi
  void (__noreturn ***v4)(); // edi
  int v5; // eax
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 288))(this);
  v3 = (char **)&unk_10654A00;
  do
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 276))(this, *v3++);
  while ( (int)v3 < (int)&off_10654A10 );
  v4 = sub_1023DBA0();
  v5 = this[100];
  if ( v5 )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, int))(*v4)[13])(v4, v5, LODWORD(a2), 1);
    this[100] = 0;
  }
  result = this[99];
  if ( result )
  {
    result = ((int (__thiscall *)(void (__noreturn ***)(), int, _DWORD, int))(*v4)[13])(v4, result, LODWORD(a2), 1);
    this[99] = 0;
  }
  return result;
}
