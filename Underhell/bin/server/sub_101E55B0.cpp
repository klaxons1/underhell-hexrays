int __thiscall sub_101E55B0(_DWORD *this)
{
  int v2; // edx
  float *v3; // esi
  char *v4; // esi
  int i; // edi
  float *v7; // edi
  float *v8; // eax
  int *j; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD v19[514]; // [esp+30h] [ebp-85Ch] BYREF
  int v20; // [esp+888h] [ebp-4h]

  v2 = *(_DWORD *)dword_106B3CDC;
  v20 = this[6];
  if ( (*(unsigned __int8 (__thiscall **)(int))(v2 + 204))(dword_106B3CDC) )
  {
    v3 = (float *)sub_1012BC90(&dword_1069E3E0, dword_106BB4DC, "info_player_coop");
    if ( v3 )
      goto LABEL_7;
    v3 = (float *)sub_1012BC90(&dword_1069E3E0, dword_106BB4DC, "info_player_start");
    if ( v3 )
      goto LABEL_7;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC) )
  {
    v3 = (float *)dword_106BB4DC;
    for ( i = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 5);
          i > 0;
          v3 = (float *)sub_1012BC90(&dword_1069E3E0, (int)v3, "info_player_deathmatch") )
    {
      --i;
    }
    if ( !v3 )
      v3 = (float *)sub_1012BC90(&dword_1069E3E0, 0, "info_player_deathmatch");
    v7 = v3;
    while ( !v3
         || !(*(unsigned __int8 (__thiscall **)(int, float *, _DWORD *))(*(_DWORD *)dword_106B3CDC + 280))(
               dword_106B3CDC,
               v3,
               this)
         || v3[179] == flt_106F1CA8 && v3[180] == flt_106F1CAC && v3[181] == flt_106F1CB0 )
    {
      v8 = (float *)sub_1012BC90(&dword_1069E3E0, (int)v3, "info_player_deathmatch");
      v3 = v8;
      if ( v8 == v7 )
      {
        if ( !v8 )
          goto LABEL_4;
        if ( ((_DWORD)v8[63] & 0x800) != 0 )
          sub_100DAE60((int)v8);
        sub_10261520((int)(v3 + 145), 128.0, 0);
        for ( j = (int *)sub_1025EEE0(v19); j; j = (int *)sub_1025EEE0(v19) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*j + 320))(j) && j[6] != v20 )
          {
            v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
            if ( v10 && (v11 = *(_DWORD *)(v10 + 12)) != 0 )
              v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 20))(v11);
            else
              v12 = 0;
            v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
            if ( v13 && (v14 = *(_DWORD *)(v13 + 12)) != 0 )
              v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
            else
              v15 = 0;
            v16 = (_DWORD *)sub_10248110(v15, v12, 300.0, 0, 0);
            sub_100D9E70(j, (int)v3, v16);
          }
          ++v19[0];
        }
        break;
      }
    }
LABEL_38:
    if ( v3 )
      goto LABEL_7;
    goto LABEL_39;
  }
LABEL_4:
  v4 = *(char **)(dword_106B31C8 + 68);
  if ( !v4 || !strlen(*(const char **)(dword_106B31C8 + 68)) )
  {
    v3 = (float *)sub_101E5570("info_player_start");
    goto LABEL_38;
  }
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  if ( v3 )
  {
LABEL_7:
    dword_106BB4DC = (int)v3;
    return (int)v3;
  }
LABEL_39:
  Warning("PutClientInServer: no info_player_start on level\n");
  v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  if ( (v17 || (v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v18 = *(_DWORD *)(v17 + 12)) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 20))(v18);
  }
  else
  {
    return 0;
  }
}
