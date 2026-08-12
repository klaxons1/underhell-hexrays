double __stdcall sub_10156AD0(int a1, int a2, int a3, unsigned int a4, int a5, float a6, int a7)
{
  double v7; // st7
  int v8; // ecx
  float *v9; // eax
  int v10; // eax
  const char *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // edi
  void ***v16; // eax
  void ***v17; // esi
  int v18; // edi
  int v19; // edi
  _DWORD *v20; // esi
  int v21; // eax
  int v23; // edi
  _DWORD *v24; // esi
  int v25; // eax
  const char *v26; // eax
  int v27; // edi
  _DWORD *v28; // esi
  int v29; // eax
  _DWORD v30[18]; // [esp+Ch] [ebp-1558h] BYREF
  char v31; // [esp+54h] [ebp-1510h] BYREF
  void **v32; // [esp+150Ch] [ebp-58h] BYREF
  int v33; // [esp+1510h] [ebp-54h]
  int v34; // [esp+1514h] [ebp-50h]
  float v35; // [esp+1518h] [ebp-4Ch]
  float v36; // [esp+151Ch] [ebp-48h]
  float v37; // [esp+1520h] [ebp-44h]
  float v38; // [esp+1524h] [ebp-40h]
  float v39; // [esp+1528h] [ebp-3Ch]
  float v40; // [esp+152Ch] [ebp-38h]
  int v41; // [esp+1530h] [ebp-34h]
  char v42; // [esp+1534h] [ebp-30h]
  int v43; // [esp+1538h] [ebp-2Ch]
  int v44; // [esp+153Ch] [ebp-28h]
  int v45; // [esp+1540h] [ebp-24h]
  int v46; // [esp+1544h] [ebp-20h]
  char v47; // [esp+1548h] [ebp-1Ch]
  _DWORD v48[3]; // [esp+154Ch] [ebp-18h] BYREF
  int v49; // [esp+1558h] [ebp-Ch]
  int v50; // [esp+155Ch] [ebp-8h]
  const char *v51; // [esp+1560h] [ebp-4h]
  float v52; // [esp+1580h] [ebp+1Ch]

  v7 = 0.0;
  v8 = 63;
  v9 = (float *)&v31;
  do
  {
    *((_DWORD *)v9 - 18) = &CUserCmd::`vftable';
    *(v9 - 2) = 0.0;
    *(v9 - 1) = 0.0;
    *v9 = 0.0;
    v9[2] = 0.0;
    *(v9 - 17) = 0.0;
    *(v9 - 16) = 0.0;
    *(v9 - 15) = 0.0;
    *(v9 - 14) = 0.0;
    *(v9 - 13) = 0.0;
    *(v9 - 9) = 0.0;
    *(v9 - 12) = 0.0;
    *((_BYTE *)v9 - 32) = 0;
    *(v9 - 11) = 0.0;
    *(v9 - 7) = 0.0;
    *(v9 - 10) = 0.0;
    *(v9 - 6) = 0.0;
    *(v9 - 5) = 0.0;
    *((_WORD *)v9 - 8) = 0;
    *((_WORD *)v9 - 7) = 0;
    *((_BYTE *)v9 - 12) = 0;
    v9[1] = 0.0;
    v9 += 21;
    --v8;
  }
  while ( v8 >= 0 );
  v35 = 0.0;
  v36 = 0.0;
  v46 = 0;
  v10 = a1;
  v37 = 0.0;
  v11 = 0;
  v38 = 0.0;
  v39 = 0.0;
  v32 = &CUserCmd::`vftable';
  v40 = 0.0;
  memset(v48, 0, sizeof(v48));
  v50 = 0;
  v33 = 0;
  v34 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  if ( !a1 )
  {
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( !v10 )
      goto LABEL_10;
    v7 = 0.0;
  }
  v12 = *(_DWORD *)(v10 + 12);
  if ( !v12 )
    goto LABEL_11;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
  v14 = v13;
  if ( v13 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 320))(v13) )
  {
    v51 = (const char *)v14;
    v11 = (const char *)v14;
  }
LABEL_10:
  v7 = 0.0;
LABEL_11:
  if ( a4 > 0x3E )
  {
    v26 = "unknown";
    if ( v11 )
      v26 = v11 + 4296;
    Msg("CBasePlayer::ProcessUsercmds: too many cmds %i sent for player %s\n", a4, v26);
    *(_BYTE *)(a2 + 4) = 1;
    v32 = &CUserCmd::`vftable';
    sub_102375F0(v48);
    v27 = 63;
    v28 = v48;
    do
    {
      v28 -= 21;
      *(v28 - 16) = &CUserCmd::`vftable';
      v28[3] = 0;
      if ( (int)v28[2] >= 0 )
      {
        if ( *v28 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v28);
          *v28 = 0;
        }
        v28[1] = 0;
      }
      v29 = *v28;
      v28[4] = *v28;
      if ( (int)v28[2] >= 0 )
      {
        if ( v29 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29);
          *v28 = 0;
        }
        v28[1] = 0;
      }
      --v27;
    }
    while ( v27 >= 0 );
    return 0.0;
  }
  else
  {
    v35 = v7;
    v36 = v7;
    v15 = a4 - 1;
    v37 = v7;
    v33 = 0;
    v38 = v7;
    v34 = 0;
    v39 = v7;
    v41 = 0;
    v40 = v7;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v49 = 0;
    v16 = &v32;
    if ( (int)(a4 - 1) >= 0 )
    {
      v17 = (void ***)&v30[21 * v15];
      do
      {
        sub_1025DA20(a2, v17, v16);
        v16 = v17;
        --v15;
        v17 -= 21;
      }
      while ( v15 >= 0 );
      v11 = v51;
    }
    if ( LOBYTE(a6) || !v11 )
    {
      v32 = &CUserCmd::`vftable';
      sub_102375F0(v48);
      v23 = 63;
      v24 = v48;
      do
      {
        v24 -= 21;
        *(v24 - 16) = &CUserCmd::`vftable';
        v24[3] = 0;
        if ( (int)v24[2] >= 0 )
        {
          if ( *v24 )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v24);
            *v24 = 0;
          }
          v24[1] = 0;
        }
        v25 = *v24;
        v24[4] = *v24;
        if ( (int)v24[2] >= 0 )
        {
          if ( v25 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
            *v24 = 0;
          }
          v24[1] = 0;
        }
        --v23;
      }
      while ( v23 >= 0 );
      return 0.0;
    }
    else
    {
      v18 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      (*(void (__thiscall **)(const char *, _DWORD *, int, unsigned int, int, int))(*(_DWORD *)v11 + 1520))(
        v11,
        v30,
        a3,
        a4,
        a5,
        a7);
      v52 = *(float *)(dword_106B31C8 + 28);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
      v32 = &CUserCmd::`vftable';
      sub_102375F0(v48);
      v19 = 63;
      v20 = v48;
      do
      {
        v20 -= 21;
        *(v20 - 16) = &CUserCmd::`vftable';
        v20[3] = 0;
        if ( (int)v20[2] >= 0 )
        {
          if ( *v20 )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v20);
            *v20 = 0;
          }
          v20[1] = 0;
        }
        v21 = *v20;
        v20[4] = *v20;
        if ( (int)v20[2] >= 0 )
        {
          if ( v21 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21);
            *v20 = 0;
          }
          v20[1] = 0;
        }
        --v19;
      }
      while ( v19 >= 0 );
      return v52;
    }
  }
}
