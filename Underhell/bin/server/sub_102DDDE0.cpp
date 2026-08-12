int __thiscall sub_102DDDE0(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // esi

  v3 = 0;
  v4 = this + 1232;
  do
  {
    if ( v4[v3] )
    {
      v5 = v4 - 1232;
      if ( *((_BYTE *)v4 - 4844) )
      {
        *((_BYTE *)v5 + 88) |= 1u;
      }
      else
      {
        v6 = (int *)v5[6];
        if ( v6 )
          sub_100194B0(v6, 4 * v3 + 4928);
      }
      v4[v3] = 0;
    }
    ++v3;
  }
  while ( v3 < 28 );
  v7 = this[541];
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (this[541] & 0xFFF) + 1];
    if ( off_1061BE18[4 * (this[541] & 0xFFF) + 2] == v7 >> 12 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        sub_1016AF10(*v8);
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v9 + 140))(v9, 0, -1);
        sub_1025FAC0(v9);
      }
    }
  }
  this[541] = -1;
  return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
           dword_106B31D0,
           this[6],
           "UpdateInventory");
}
