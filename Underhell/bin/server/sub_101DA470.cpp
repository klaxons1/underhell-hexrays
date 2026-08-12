int __thiscall sub_101DA470(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 i; // di
  _DWORD *v3; // esi
  int v4; // eax

  v1 = this;
  if ( dword_106BAFF4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106BAFF4 + 216))(dword_106BAFF4);
  for ( i = sub_101D5F20((int)(v1 + 9)); i != 0xFFFF; i = sub_101D5FF0(this + 9, i) )
  {
    v3 = *(_DWORD **)(v1[10] + 16 * i + 12);
    if ( v3 )
    {
      v3[3] = 0;
      if ( (int)v3[2] >= 0 )
      {
        if ( *v3 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
          *v3 = 0;
        }
        v3[1] = 0;
      }
      v4 = *v3;
      v3[4] = *v3;
      if ( (int)v3[2] >= 0 )
      {
        if ( v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
          *v3 = 0;
        }
        v3[1] = 0;
      }
      sub_10184660((int)v3);
    }
    v1 = this;
  }
  sub_101D4150((int)(v1 + 9));
  if ( v1 )
    return sub_1012CED0((_BYTE)v1 + 8);
  else
    return sub_1012CED0(0);
}
