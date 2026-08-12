void __stdcall sub_10150110(unsigned __int16 a1)
{
  void ***v1; // eax
  void ***v2; // edi
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  char *v11; // eax
  int v12; // eax
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  int v22; // eax
  char Buffer[128]; // [esp+8h] [ebp-ACh] BYREF
  bool (__cdecl *v24)(const char **, const char **); // [esp+88h] [ebp-2Ch] BYREF
  int v25; // [esp+8Ch] [ebp-28h]
  int v26; // [esp+90h] [ebp-24h]
  int v27; // [esp+94h] [ebp-20h]
  int v28; // [esp+98h] [ebp-1Ch]
  int v29; // [esp+9Ch] [ebp-18h]
  int v30; // [esp+A0h] [ebp-14h]
  int v31; // [esp+A4h] [ebp-10h]
  int v32; // [esp+A8h] [ebp-Ch]
  _DWORD v33[2]; // [esp+ACh] [ebp-8h] BYREF

  v1 = sub_1014F160(a1);
  v2 = v1;
  if ( v1 && !*((_BYTE *)v1 + 5) )
  {
    *((_BYTE *)v1 + 5) = 1;
    v1[460] = 0;
    v1[461] = 0;
    v1[462] = 0;
    v1[463] = 0;
    v1[464] = 0;
    v1[465] = 0;
    v1[468] = 0;
    sub_10228370(Buffer, 0x80u, "scripts/%s", (_BYTE)v1 + 104);
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = -1;
    v29 = 0;
    v30 = -1;
    v31 = -1;
    v32 = 0;
    v24 = sub_10002020;
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 136))(dword_10412D50);
    sub_100B6DA0((int)&v24, (char)Buffer, v3);
    if ( v29 )
    {
      v33[0] = "crosshair";
      v4 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))&v24, (int)v33);
      if ( v4 != -1 )
      {
        v5 = *(char **)(v25 + 24 * v4 + 20);
        if ( v5 )
          v2[464] = (void **)sub_100B6F30((int)&dword_1042FB78, v5);
      }
      v33[0] = "autoaim";
      v6 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))&v24, (int)v33);
      if ( v6 != -1 )
      {
        v7 = *(char **)(v25 + 24 * v6 + 20);
        if ( v7 )
          v2[465] = (void **)sub_100B6F30((int)&dword_1042FB78, v7);
      }
      v33[0] = "zoom";
      v8 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))&v24, (int)v33);
      if ( v8 == -1 || (v9 = *(char **)(v25 + 24 * v8 + 20)) == 0 )
        v2[466] = v2[464];
      else
        v2[466] = (void **)sub_100B6F30((int)&dword_1042FB78, v9);
      v33[0] = "zoom_autoaim";
      v10 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))&v24, (int)v33);
      if ( v10 == -1 || (v11 = *(char **)(v25 + 24 * v10 + 20)) == 0 )
        v12 = (int)v2[466];
      else
        v12 = sub_100B6F30((int)&dword_1042FB78, v11);
      v2[467] = (void **)v12;
      if ( sub_100B4090(&dword_1042FB78, "CHudHistoryResource") )
      {
        v13 = (char *)sub_101500D0((int)"weapon", (int)&v24);
        if ( v13 )
        {
          v14 = sub_100B6F30((int)&dword_1042FB78, v13);
          v2[461] = (void **)v14;
          if ( v14 )
          {
            nullsub_4();
            nullsub_5((_BYTE *)v2[461][42] - (_BYTE *)v2[461][41]);
          }
        }
        v15 = (char *)sub_101500D0((int)"weapon_s", (int)&v24);
        if ( v15 )
        {
          v16 = sub_100B6F30((int)&dword_1042FB78, v15);
          v2[460] = (void **)v16;
          if ( v16 )
            nullsub_4();
        }
        v17 = (char *)sub_101500D0((int)"weapon_small", (int)&v24);
        if ( v17 )
        {
          v18 = sub_100B6F30((int)&dword_1042FB78, v17);
          v2[468] = (void **)v18;
          if ( v18 )
            nullsub_4();
        }
        v19 = (char *)sub_101500D0((int)"ammo", (int)&v24);
        if ( v19 )
        {
          v20 = sub_100B6F30((int)&dword_1042FB78, v19);
          v2[462] = (void **)v20;
          if ( v20 )
          {
            nullsub_4();
            nullsub_5((_BYTE *)v2[462][42] - (_BYTE *)v2[462][41]);
          }
        }
        v21 = (char *)sub_101500D0((int)"ammo2", (int)&v24);
        if ( v21 )
        {
          v22 = sub_100B6F30((int)&dword_1042FB78, v21);
          v2[463] = (void **)v22;
          if ( v22 )
          {
            nullsub_4();
            nullsub_5((_BYTE *)v2[463][42] - (_BYTE *)v2[463][41]);
          }
        }
      }
      sub_100B6620(&v24);
    }
    else
    {
      v2[460] = (void **)sub_100B66A0((int)&dword_1042FB78, (int)"selection");
      v2[461] = (void **)sub_100B66A0((int)&dword_1042FB78, (int)"selection");
      v2[462] = (void **)sub_100B66A0((int)&dword_1042FB78, (int)"bucket1");
    }
    sub_100B6310(&v24);
    sub_100B5620(&v24);
  }
}
