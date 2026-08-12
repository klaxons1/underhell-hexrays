char __thiscall sub_10101210(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 v2; // di
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v7; // [esp+10h] [ebp-4h]

  v1 = this;
  if ( dword_10436254 )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10436254 + 216))(dword_10436254);
  v7 = v1 + 8;
  v2 = sub_100FDA10((int)(v1 + 8));
  if ( v2 != 0xFFFF )
  {
    while ( 1 )
    {
      v3 = *(_DWORD **)(v1[9] + 16 * v2 + 12);
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
        sub_10034930((int)v3);
      }
      v2 = sub_100FDAE0(v7, v2);
      if ( v2 == 0xFFFF )
        break;
      v1 = this;
    }
  }
  return sub_100FB620((int)v7);
}
