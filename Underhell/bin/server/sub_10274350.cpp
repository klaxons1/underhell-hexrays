int sub_10274350()
{
  _DWORD *i; // edi
  void **v1; // esi
  int v2; // ebx
  int j; // esi
  unsigned int v4; // eax
  unsigned int v5; // eax
  int *v6; // ebx
  int v7; // edi
  bool v8; // al
  const char *v9; // eax
  _BYTE v11[18]; // [esp+Ch] [ebp-40h] BYREF
  unsigned __int16 v12; // [esp+1Eh] [ebp-2Eh]
  int v13; // [esp+44h] [ebp-8h]
  int var2; // [esp+4Ah] [ebp-2h] BYREF

  v13 = 0;
  Msg("\n====================================================\nPerforming Safe Entity Update\n");
  sub_1042F8A0(16, 32, 1);
  for ( i = sub_1012BC90(&dword_1069E3E0, 0, "hammer_updateignorelist");
        i;
        i = sub_1012BC90(&dword_1069E3E0, (int)i, "hammer_updateignorelist") )
  {
    v1 = (void **)(i + 200);
    v2 = 16;
    do
    {
      if ( *v1 )
        sub_1042F910((int)&var2, *v1);
      ++v1;
      --v2;
    }
    while ( v2 );
  }
  if ( v12 )
    Msg("Ignoring %d specified targetnames.\n", v12);
  for ( j = sub_1012BC10(&dword_1069E3E0, 0); j; j = sub_1012BC10(&dword_1069E3E0, j) )
  {
    if ( ((*(int (__thiscall **)(int))(*(_DWORD *)j + 144))(j) & 0x40000000) != 0 )
    {
      v4 = *(_DWORD *)(j + 308);
      if ( v4 == -1
        || off_1061BE18[4 * (*(_DWORD *)(j + 308) & 0xFFF) + 2] != v4 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(j + 308) & 0xFFF) + 1] )
      {
        v5 = *(_DWORD *)(j + 312);
        if ( v5 == -1
          || off_1061BE18[4 * (*(_DWORD *)(j + 312) & 0xFFF) + 2] != v5 >> 12
          || !off_1061BE18[4 * (*(_DWORD *)(j + 312) & 0xFFF) + 1] )
        {
          v6 = *(int **)(j + 424);
          if ( v6 )
          {
            v7 = *v6;
            v8 = sub_101CB470(j);
            if ( !(*(unsigned __int8 (__thiscall **)(int *, bool))(v7 + 44))(v6, v8)
              && (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 40))(v6)
              && !__RTDynamicCast(
                    j,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CPhysBox `RTTI Type Descriptor',
                    0) )
            {
              v9 = *(const char **)(j + 260);
              if ( !v9 )
                v9 = String;
              if ( *(_WORD *)sub_1042F670(&var2, v9) == 0xFFFF )
              {
                sub_10273EB0((const char *)j);
                ++v13;
              }
            }
          }
        }
      }
    }
  }
  Msg("Updated %d entities.\n", v13);
  return sub_1042F820(v11);
}
