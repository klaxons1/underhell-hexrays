char __stdcall sub_100BF930(_DWORD *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v3; // edx
  _WORD *v4; // esi
  unsigned __int16 *v6; // edi
  unsigned __int16 *v7; // esi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // ecx
  int v12; // [esp+4h] [ebp-4h]

  v3 = a1;
  v4 = (_WORD *)*a1;
  v12 = *a1;
  if ( *(_WORD *)*a1 != 60 )
    return 0;
  v6 = a2;
  *a3 = 0;
  v7 = v4 + 1;
  *a2 = 0;
  v8 = *v7;
  if ( *v7 )
  {
    while ( v8 != 58 && v8 != 62 )
    {
      if ( isspace(v8) || (v9 = *v7, ++v7, *v6 = v9, v8 = *v7, ++v6, !*v7) )
      {
        v3 = a1;
        break;
      }
      v3 = a1;
    }
  }
  *v6 = 0;
  if ( *v7 == 58 )
  {
    v10 = v7[1];
    ++v7;
    v11 = a3;
    if ( v10 )
    {
      do
      {
        if ( v10 == 62 )
          break;
        ++v7;
        *v11 = v10;
        v10 = *v7;
        ++v11;
      }
      while ( *v7 );
    }
    *v11 = 0;
  }
  *v3 += 2 * (((int)v7 - v12) >> 1);
  return 1;
}
