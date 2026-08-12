int __thiscall sub_1026BA60(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // edi
  int v7; // eax

  v3 = a3;
  v5 = 0;
  if ( *(int *)(24 * a3 + this[6] + 16) <= 0 )
    return -1;
  while ( 1 )
  {
    v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 140))(this, v3, v5);
    if ( !v7 || v7 == a2 )
      break;
    if ( ++v5 >= *(_DWORD *)(24 * a3 + this[6] + 16) )
      return -1;
    v3 = a3;
  }
  return v5;
}
