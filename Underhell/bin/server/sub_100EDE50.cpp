char __thiscall sub_100EDE50(_DWORD *this, float a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  _DWORD *i; // eax

  v4 = this[388];
  v5 = 0;
  if ( v4 <= 0 )
    return 1;
  for ( i = (_DWORD *)this[385]; i[1] != a3 || *i != a4; i += 17 )
  {
    if ( ++v5 >= v4 )
      return 1;
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int))(*this + 856))(this, i, LODWORD(a2), a3, a4);
}
