int __thiscall sub_100FA5F0(_DWORD *this, _DWORD *a2)
{
  int v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int *v7; // ecx
  int v10; // [esp+14h] [ebp+8h]

  if ( a2 )
    v10 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    v10 = -1;
  v4 = this[204];
  v5 = this + 208;
  if ( v5[v4 - 1] != v10 )
  {
    v6 = v5 - 208;
    if ( *((_BYTE *)v5 - 748) )
    {
      *((_BYTE *)v6 + 88) |= 1u;
    }
    else
    {
      v7 = (int *)v6[6];
      if ( v7 )
        sub_100194B0(v7, 4 * v4 - 4 + 832);
    }
    v5[v4 - 1] = v10;
  }
  if ( a2 )
    this[240] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    this[240] = -1;
  sub_100F9B80((int)this);
  a2[63] |= 0x80u;
  return sub_100D8500(a2);
}
