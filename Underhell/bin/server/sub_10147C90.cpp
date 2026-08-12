int __thiscall sub_10147C90(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = (int)this;
  if ( a4 == 1 )
  {
    this[203] = 1;
  }
  else
  {
    if ( a4 )
      return result;
    this[203] = 0;
  }
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D0 + 240))(
           dword_106B31D0,
           this[200],
           this[203]);
}
