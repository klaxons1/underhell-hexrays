bool __thiscall sub_10116A30(void *this, _DWORD *a2, int *a3)
{
  __int16 v5; // cx
  int v6; // edx
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // ecx
  char *v11; // eax
  __int16 v12; // ax
  int v13; // ecx
  int v14; // ecx
  unsigned int *v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // edi
  _DWORD v18[4]; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp+Ch]

  v5 = *((_WORD *)a3 + 9);
  v18[3] = this;
  if ( (v5 & 2) == 0 )
    return 0;
  v6 = *a3;
  if ( !*a3 )
    return 0;
  if ( v6 != 10 )
  {
    if ( v6 == 11 )
    {
      v10 = a3[6];
      v18[0] = a2;
      v11 = (char *)a2 - a3[2];
      v18[2] = a3;
      v18[1] = v11;
      return (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 8))(v10, v18) == 0;
    }
    if ( v6 != 13 )
    {
      if ( a3[9] != dword_103E45C8[v6] * *((unsigned __int16 *)a3 + 8) )
        Warning(
          "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
          (const char *)a3[1]);
      return !sub_10116910(a2, dword_103E45C8[*a3] * *((unsigned __int16 *)a3 + 8));
    }
    if ( a3[9] != dword_103E45FC * *((unsigned __int16 *)a3 + 8) )
      Warning(
        "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
        (const char *)a3[1]);
    v8 = a2;
    v9 = 0;
    if ( *((_WORD *)a3 + 8) )
    {
      while ( *v8 == -1 )
      {
        ++v9;
        ++v8;
        if ( v9 >= *((unsigned __int16 *)a3 + 8) )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v12 = v5 & 0x40;
  if ( (v5 & 0x40) != 0 && *((_WORD *)a3 + 8) != 1 )
    return 0;
  v13 = a3[8];
  if ( !v13 || v12 && !*a2 )
    return 0;
  if ( *(_DWORD *)(v13 + 12) )
    return 1;
  v14 = *((unsigned __int16 *)a3 + 8);
  if ( v12 )
    a2 = (_DWORD *)*a2;
  v19 = v14 - 1;
  if ( v14 - 1 < 0 )
    return 0;
  while ( 1 )
  {
    v15 = (unsigned int *)a3[8];
    v16 = *v15;
    v17 = *v15 + 52 * v15[1];
    if ( *v15 < v17 )
      break;
LABEL_30:
    a2 = (_DWORD *)((char *)a2 + a3[9]);
    if ( --v19 < 0 )
      return 0;
  }
  while ( !(unsigned __int8)sub_10116A30((char *)a2 + *(_DWORD *)(v16 + 8), v16) )
  {
    v16 += 52;
    if ( v16 >= v17 )
      goto LABEL_30;
  }
  return 1;
}
