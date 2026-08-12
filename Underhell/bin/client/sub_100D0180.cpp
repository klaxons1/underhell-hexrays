int __thiscall sub_100D0180(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int *v3; // eax
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // ecx
  int (__thiscall *v7)(_DWORD *); // eax
  int *v8; // eax
  int *v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  int (__thiscall *v13)(_DWORD *); // eax
  int *v14; // eax
  int i; // esi
  char *v16; // ebx
  int v17; // eax
  _DWORD *v18; // ebx
  const char *v19; // [esp-8h] [ebp-264h]
  _BYTE v20[512]; // [esp+8h] [ebp-254h] BYREF
  int v21[5]; // [esp+208h] [ebp-54h] BYREF
  int v22; // [esp+21Ch] [ebp-40h] BYREF
  int v23; // [esp+220h] [ebp-3Ch]
  int v24; // [esp+224h] [ebp-38h]
  int v25; // [esp+228h] [ebp-34h]
  int v26; // [esp+22Ch] [ebp-30h]
  int v27; // [esp+230h] [ebp-2Ch] BYREF
  int v28; // [esp+234h] [ebp-28h]
  int v29; // [esp+238h] [ebp-24h]
  int v30; // [esp+23Ch] [ebp-20h]
  int v31; // [esp+240h] [ebp-1Ch]
  int v32; // [esp+244h] [ebp-18h] BYREF
  int v33; // [esp+248h] [ebp-14h]
  int v34; // [esp+24Ch] [ebp-10h]
  int v35; // [esp+250h] [ebp-Ch]
  int v36; // [esp+254h] [ebp-8h]
  _DWORD *v37; // [esp+258h] [ebp-4h]

  v37 = this;
  result = sub_100422D0();
  v2 = result;
  if ( result )
  {
    Msg("(localplayer)\n\n");
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v21[0] = v2;
    memset(&v21[1], 0, 16);
    v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 60))(v2);
    sub_100CF240((const char **)v21, v3);
    Msg("(localteam)\n\n");
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 292))(v2);
    if ( v4 )
    {
      v5 = *v4;
      v27 = (int)v4;
      v6 = v4;
      v7 = *(int (__thiscall **)(_DWORD *))(v5 + 60);
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v30 = 0;
      v8 = (int *)v7(v6);
      sub_100CF240((const char **)&v27, v8);
      sub_100CF530(&v32);
    }
    Msg("(playerresource)\n\n");
    if ( dword_1040D3A8 )
    {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v27 = dword_1040D3A8;
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v30 = 0;
      v9 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1040D3A8 + 60))(dword_1040D3A8);
      sub_100CF240((const char **)&v27, v9);
      sub_100CF530(&v32);
    }
    Msg("(localplayerweapon)\n\n");
    v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 788))(v2);
    if ( v10 )
    {
      v11 = *v10;
      v27 = (int)v10;
      v12 = v10;
      v13 = *(int (__thiscall **)(_DWORD *))(v11 + 60);
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v30 = 0;
      v14 = (int *)v13(v12);
      sub_100CF240((const char **)&v27, v14);
      sub_100CF530(&v32);
    }
    Msg("Other replacements:\n\n");
    for ( i = sub_100CD120(v37 + 44); i != -1; i = sub_100CD1C0(v18 + 44, i) )
    {
      v16 = (char *)sub_1022CF00(36 * i + v37[45] + 20);
      v20[0] = 0;
      if ( *v16 == 35 )
      {
        v17 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v16);
        if ( v17 )
        {
          v16 = v20;
          (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
            dword_1047CA78,
            v17,
            v20,
            512);
        }
      }
      v19 = v16;
      v18 = v37;
      Msg("'%s' = '%s'\n", *(const char **)(36 * i + v37[45] + 16), v19);
    }
    sub_100CEE70(&v22);
    result = v22;
    if ( v24 >= 0 )
    {
      if ( v22 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22);
        result = 0;
        v22 = 0;
      }
      v23 = 0;
    }
    v26 = result;
    if ( v24 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
