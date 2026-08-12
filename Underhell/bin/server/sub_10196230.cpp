char __usercall sub_10196230@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>)
{
  char *v4; // eax
  char *v5; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // edi
  int i; // eax
  int v18; // edi
  int v19; // eax
  char ArgList[256]; // [esp+0h] [ebp-114h] BYREF
  int v22; // [esp+100h] [ebp-14h] BYREF
  int v23; // [esp+104h] [ebp-10h] BYREF
  int v24; // [esp+108h] [ebp-Ch]
  int v25; // [esp+10Ch] [ebp-8h] BYREF
  int v26; // [esp+110h] [ebp-4h] BYREF

  v24 = a1;
  sub_10196020();
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31D0 + 204))(dword_106B31D0, ArgList, 256);
  sub_10429A00(&byte_106B7D78, 0x100u, "%s\\maps\\%s.nav", (char)ArgList);
  v4 = &byte_106B7D78;
  if ( byte_106B7D78 )
  {
    do
    {
      if ( *v4 == 47 )
        *v4 = 92;
      ++v4;
    }
    while ( *v4 );
  }
  v5 = sub_10195950();
  if ( !v5 )
    return 0;
  v7 = (*(int (__thiscall **)(int, char *, const char *, _DWORD, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
         dword_106B31D8 + 4,
         &byte_106B7D78,
         "wb",
         0,
         a4,
         a3);
  v8 = v7;
  if ( !v7 )
    return 0;
  v23 = -17958194;
  (*(void (__thiscall **)(int, int *, int, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    &v23,
    4,
    v7,
    a2);
  v26 = 9;
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v26, 4, v8);
  v22 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(dword_106B31D8 + 4, v5, 0);
  DevMsg("Size of bsp file '%s' is %u bytes.\n", v5, v22);
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v22, 4, v8);
  v9 = dword_10632630;
  dword_106B7E84 = 0;
  if ( dword_10632630 != -1 )
  {
    v10 = dword_10632624;
    do
    {
      v11 = 12 * v9;
      v12 = *(_DWORD *)(12 * v9 + v10);
      if ( *(_DWORD *)(v12 + 44) )
      {
        sub_10196080(dword_106B7E78, *(_DWORD *)(v12 + 44));
        v10 = dword_10632624;
      }
      v9 = *(_DWORD *)(v11 + v10 + 8);
    }
    while ( v9 != -1 );
  }
  sub_10195A10(dword_106B7E78, v8);
  v25 = dword_1063263C;
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v25, 4, v8);
  v13 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v14 = dword_10632624;
    do
    {
      v15 = 12 * v13;
      sub_10195AC0(*(_DWORD **)(12 * v13 + v14), v8, v26);
      v14 = dword_10632624;
      v13 = *(_DWORD *)(v15 + dword_10632624 + 8);
    }
    while ( v13 != -1 );
  }
  v16 = v24;
  v25 = *(_DWORD *)(v24 + 1224);
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v25, 4, v8);
  for ( i = *(_DWORD *)(v16 + 1212); i != -1; i = *(_DWORD *)(v18 + *(_DWORD *)(v24 + 1200) + 8) )
  {
    v18 = 12 * i;
    sub_1019C220(v8, v26);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 32))(dword_106B31D8 + 4, v8);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v8);
  v19 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
          dword_106B31D8 + 4,
          &byte_106B7D78,
          0);
  DevMsg("Size of nav file '%s' is %u bytes.\n", &byte_106B7D78, v19);
  return 1;
}
