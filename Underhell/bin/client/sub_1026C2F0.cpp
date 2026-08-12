int __thiscall sub_1026C2F0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi

  v2 = this[61];
  v3 = -1;
  if ( v2 != -1 )
  {
    v4 = this[58];
    while ( *(_DWORD *)(v4 + 12 * v2) != a2 )
    {
      v2 = *(_DWORD *)(v4 + 12 * v2 + 8);
      if ( v2 == -1 )
        return sub_1026BAB0(this, -1);
    }
    v3 = v2;
  }
  return sub_1026BAB0(this, v3);
}
