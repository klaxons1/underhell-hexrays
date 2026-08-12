char __usercall sub_102649F0@<al>(int a1@<ebx>, int a2@<edi>, int *a3, char *a4, int a5, char a6)
{
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  const char *v9; // edi
  int v10; // eax
  int v11; // ecx
  int *v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int **v17; // edi
  int v18; // edi
  int v22; // [esp+4h] [ebp-4h]

  if ( sub_1042A310(32) )
    v6 = sub_1042A330(a5);
  else
    v6 = 0;
  if ( dword_106B31D8 )
    v7 = dword_106B31D8 + 4;
  else
    v7 = 0;
  if ( !(unsigned __int8)sub_1042A380(v7, a4, "MOD") )
    return 0;
  v8 = sub_1042A2F0(v6);
  v22 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = (const char *)sub_1042A070(v8);
      v10 = _stricmp(v9, "entity");
      v11 = v8;
      if ( !v10 )
      {
        if ( sub_1042ACB0("classname", 0) )
          v9 = (const char *)sub_1042B460(0, (int)String);
        v12 = (int *)sub_101811E0(v9, -1);
        if ( v12 )
        {
          sub_1025F8D0(v12, v22);
          sub_10260750((char *)v12);
          v13 = a3[3];
          v14 = a3[1];
          if ( v13 + 1 > v14 )
            sub_102ABFC0(v13 - v14 + 1);
          ++a3[3];
          v15 = *a3;
          v16 = a3[3] - v13 - 1;
          a3[4] = *a3;
          if ( v16 > 0 )
            memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
          v17 = (int **)(*a3 + 4 * v13);
          if ( v17 )
            *v17 = v12;
        }
        else
        {
          Warning("UTIL_LoadAndSpawnEntitiesFromScript: Failed to spawn entity, type: '%s'\n", v9);
        }
        v11 = v22;
      }
      v22 = sub_1042A300(v11);
      if ( !v22 )
        break;
      v8 = v22;
    }
  }
  if ( a6 == 1 )
  {
    v18 = 0;
    for ( LOBYTE(v22) = (*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_10700AC8 + 128))(
                          dword_10700AC8,
                          3,
                          0,
                          a2,
                          a1); v18 < a3[3]; ++v18 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*a3 + 4 * v18) + 136))(*(_DWORD *)(*a3 + 4 * v18));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, v22);
  }
  return 1;
}
