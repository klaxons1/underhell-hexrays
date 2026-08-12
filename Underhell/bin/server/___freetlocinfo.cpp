int __cdecl __freetlocinfo(int *a1)
{
  _UNKNOWN **v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int *v8; // edi
  _DWORD *v9; // eax
  int v11; // [esp+14h] [ebp+8h]

  v2 = (_UNKNOWN **)a1[47];
  if ( v2 )
  {
    if ( v2 != &off_1068F9E8 )
    {
      v3 = (_DWORD *)a1[44];
      if ( v3 )
      {
        if ( !*v3 )
        {
          v4 = (_DWORD *)a1[46];
          if ( v4 && !*v4 )
          {
            sub_10184660(a1[46]);
            __free_lconv_mon(a1[47]);
          }
          v5 = (_DWORD *)a1[45];
          if ( v5 && !*v5 )
          {
            sub_10184660(a1[45]);
            __free_lconv_num(a1[47]);
          }
          sub_10184660(a1[44]);
          sub_10184660(a1[47]);
        }
      }
    }
  }
  v6 = (_DWORD *)a1[48];
  if ( v6 && !*v6 )
  {
    sub_10184660(a1[49] - 254);
    sub_10184660(a1[51] - 128);
    sub_10184660(a1[52] - 128);
    sub_10184660(a1[48]);
  }
  v7 = a1[53];
  if ( (char **)v7 != off_1068EF90 && !*(_DWORD *)(v7 + 180) )
  {
    __free_lc_time(a1[53]);
    sub_10184660(a1[53]);
  }
  v8 = a1 + 20;
  v11 = 6;
  do
  {
    if ( (_UNKNOWN *)*(v8 - 2) != &unk_1068EF8C && *v8 && !*(_DWORD *)*v8 )
      sub_10184660(*v8);
    if ( *(v8 - 1) )
    {
      v9 = (_DWORD *)v8[1];
      if ( v9 )
      {
        if ( !*v9 )
          sub_10184660(v8[1]);
      }
    }
    v8 += 4;
    --v11;
  }
  while ( v11 );
  return sub_10184660((int)a1);
}
