int __fastcall sub_1019F5E0(_DWORD *a1)
{
  int v1; // edx
  int result; // eax
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // esi
  _DWORD *v6; // esi
  unsigned int v7; // ebx
  const char *v8; // edi
  int v9; // esi
  const char *v10; // eax
  int v11; // esi
  int v12; // [esp+4h] [ebp-20h] BYREF
  int v13; // [esp+8h] [ebp-1Ch]
  int v14; // [esp+Ch] [ebp-18h]
  unsigned int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+14h] [ebp-10h]
  _DWORD *v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  _DWORD *v19; // [esp+20h] [ebp-4h]

  v1 = a1[266];
  v19 = a1;
  if ( !v1 )
    return Msg("There are no entries in the Place database.\n");
  v3 = 0;
  v4 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  while ( 1 )
  {
    v17 = (_DWORD *)(a1[265] + 4 * v18);
    v5 = v4;
    if ( (int)(v4 + 1) > v3 )
    {
      sub_102ABFC0(v4 - v3 + 1);
      v4 = v15;
    }
    v15 = ++v4;
    v16 = v12;
    if ( (int)(v4 - v5 - 1) > 0 )
      memcpy((void *)(v12 + 4 * v5 + 4), (const void *)(v12 + 4 * v5), 4 * (v4 - v5 - 1));
    v6 = (_DWORD *)(v12 + 4 * v5);
    if ( v6 )
      *v6 = *v17;
    a1 = v19;
    if ( (unsigned int)++v18 >= v19[266] )
      break;
    v3 = v13;
  }
  v7 = 0;
  sub_1019E300((int)&v12, (_CoreCrtNonSecureSearchSortCompareFunction)sub_1019D530);
  if ( v4 )
  {
    do
    {
      v8 = *(const char **)(v12 + 4 * v7);
      v9 = 0;
      if ( v19[266] )
      {
        while ( 1 )
        {
          v10 = *(const char **)(v19[265] + 4 * v9);
          if ( v10 == v8 || !_stricmp(v10, v8) )
            break;
          if ( (unsigned int)++v9 >= v19[266] )
            goto LABEL_17;
        }
        v11 = v9 + 1;
      }
      else
      {
LABEL_17:
        v11 = 0;
      }
      if ( v11 == v19[267] )
        Msg("--> %-26s", *(_DWORD *)(v12 + 4 * v7));
      else
        Msg("%-30s", *(_DWORD *)(v12 + 4 * v7));
      if ( !(++v7 % 3) )
        Msg("\n");
    }
    while ( v7 < v15 );
  }
  result = Msg("\n");
  if ( v14 >= 0 )
  {
    result = v12;
    if ( v12 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v12);
  }
  return result;
}
