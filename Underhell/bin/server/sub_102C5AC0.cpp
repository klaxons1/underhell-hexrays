_DWORD *__thiscall sub_102C5AC0(int this, int a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // edi
  _DWORD *v6; // esi
  int *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // edx
  const char *v14; // edi
  int v15; // esi
  char *v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // eax
  unsigned __int8 (__cdecl *v20)(int, int); // edx
  int v21; // esi
  _DWORD *v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // edx
  int v29; // eax
  const char *v30; // edi
  _DWORD *v31; // esi
  char *v32; // eax
  char *v33; // edx
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *v37; // esi
  int v38; // eax
  unsigned __int8 (__cdecl *v39)(int, int); // edx
  int v40; // ebx
  _DWORD *v41; // ecx
  int v42; // ecx
  int v43; // edx
  int v44; // edx
  int v45; // ebx
  int v46; // ebx
  _DWORD *v47; // esi
  int *v48; // ecx
  int v49; // edx
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  int v53; // ecx
  bool v54; // zf
  char *v56; // [esp+Ch] [ebp-30h] BYREF
  int v57; // [esp+14h] [ebp-28h]
  char *v58; // [esp+18h] [ebp-24h] BYREF
  double v59; // [esp+1Ch] [ebp-20h]
  int v60; // [esp+24h] [ebp-18h]
  unsigned __int8 (__cdecl *v61)(int, int); // [esp+28h] [ebp-14h] BYREF
  int v62; // [esp+2Ch] [ebp-10h]
  _DWORD *v63; // [esp+30h] [ebp-Ch]
  int v64; // [esp+34h] [ebp-8h]
  char v65; // [esp+3Bh] [ebp-1h] BYREF
  int v66; // [esp+44h] [ebp+8h]

  v3 = this + 104;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 120) = -1;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = -1;
  *(_DWORD *)(this + 132) = -1;
  v4 = *(_DWORD *)(this + 108);
  v63 = (_DWORD *)this;
  *(_DWORD *)(this + 136) = v4;
  if ( !*(_DWORD *)(this + 104) )
    *(_DWORD *)v3 = sub_10002010;
  *(_DWORD *)(this + 140) = 0;
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)(this + 148) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = -1;
  *(_DWORD *)(this + 160) = 0;
  *(_DWORD *)(this + 164) = -1;
  *(_DWORD *)(this + 168) = -1;
  *(_DWORD *)(this + 172) = *(_DWORD *)(this + 144);
  if ( !*(_DWORD *)(this + 140) )
    *(_DWORD *)(this + 140) = sub_10002010;
  *(_DWORD *)(this + 176) = 0;
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(_DWORD *)(this + 192) = -1;
  *(_DWORD *)(this + 200) = -1;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 204) = -1;
  *(_DWORD *)(this + 208) = *(_DWORD *)(this + 180);
  if ( !*(_DWORD *)(this + 176) )
    *(_DWORD *)(this + 176) = sub_10002010;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 0;
  v60 = this + 240;
  sub_10431290(this + 240);
  *(_BYTE *)(this + 368) = *(_BYTE *)(a2 + 368);
  *(float *)(this + 372) = *(float *)(a2 + 372);
  qmemcpy((void *)this, (const void *)a2, 0x48u);
  v5 = *(_DWORD *)(a2 + 96);
  v6 = v63;
  v7 = v63 + 21;
  v63[24] = 0;
  sub_102C2C00(v7, 0, v5, 0);
  if ( v5 > 0 )
  {
    v8 = 0;
    v64 = v5;
    do
    {
      v9 = *(_DWORD *)(a2 + 84);
      v10 = v6[21];
      *(_DWORD *)(v10 + v8) = *(_DWORD *)(v9 + v8);
      *(_WORD *)(v10 + v8 + 4) = *(_WORD *)(v9 + v8 + 4);
      v8 += 6;
      --v64;
    }
    while ( v64 );
  }
  v11 = (_DWORD *)a2;
  memcpy_0(v6 + 66, (const void *)(a2 + 264), 0x68u);
  v6[64] = *(_DWORD *)(a2 + 256);
  v12 = sub_102C2000((_DWORD *)(a2 + 104));
  v64 = v12;
  if ( v12 != -1 )
  {
    while ( 1 )
    {
      v13 = v11[27];
      v14 = *(const char **)(v13 + 28 * v12 + 16);
      v15 = v13 + 28 * v12;
      v62 = v15;
      if ( v14
        && (v16 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(v14) + 1)) != 0 )
      {
        strcpy(v16, v14);
        v15 = v62;
      }
      else
      {
        v16 = 0;
      }
      v17 = *(_DWORD *)(v15 + 20);
      v18 = *(_DWORD *)(v15 + 24);
      v58 = v16;
      v59 = COERCE_DOUBLE(__PAIR64__(v18, v17));
      sub_102C03B0((unsigned __int8 (__cdecl **)(int, int))v3, (int)&v58, &v61, &v65);
      v19 = sub_102C0BB0((_DWORD *)v3);
      v20 = v61;
      v21 = 28 * v19;
      v22 = (_DWORD *)(28 * v19 + *(_DWORD *)(v3 + 4));
      v22[2] = v61;
      v22[1] = -1;
      *v22 = -1;
      v22[3] = 0;
      if ( v20 == (unsigned __int8 (__cdecl *)(int, int))-1 )
      {
        *(_DWORD *)(v3 + 16) = v19;
      }
      else
      {
        v23 = 7 * (_DWORD)v20;
        v24 = *(_DWORD *)(v3 + 4);
        if ( v65 )
          *(_DWORD *)(v24 + 4 * v23) = v19;
        else
          *(_DWORD *)(v24 + 4 * v23 + 4) = v19;
      }
      sub_102C2EC0((_DWORD *)v3, v19);
      v25 = *(_DWORD *)(v3 + 4);
      ++*(_DWORD *)(v3 + 20);
      v26 = v21 + v25 + 16;
      if ( v26 )
      {
        *(_DWORD *)v26 = v58;
        *(double *)(v26 + 4) = v59;
      }
      v11 = (_DWORD *)a2;
      v64 = sub_102C20B0((_DWORD *)(a2 + 104), v64);
      if ( v64 == -1 )
        break;
      v12 = v64;
    }
  }
  v27 = sub_102C2320(v11 + 35);
  v64 = v27;
  if ( v27 != -1 )
  {
    while ( 1 )
    {
      v28 = 5 * v27;
      v29 = v11[36];
      v30 = *(const char **)(v29 + 8 * v28 + 16);
      v31 = (_DWORD *)(v29 + 8 * v28);
      if ( v30
        && (v32 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(
                            g_pMemAlloc,
                            *(_DWORD *)(v29 + 8 * v28 + 16)
                          + strlen(*(const char **)(v29 + 8 * v28 + 16))
                          + 1
                          - (_DWORD)v30)) != 0 )
      {
        strcpy(v32, v30);
      }
      else
      {
        v32 = 0;
      }
      v33 = (char *)v31[7];
      v34 = v31[6];
      v56 = v32;
      v35 = v31[8];
      v57 = v34;
      v36 = v31[9];
      v58 = v33;
      v59 = COERCE_DOUBLE(__PAIR64__(v36, v35));
      v37 = v63 + 35;
      sub_102C0620((unsigned __int8 (__cdecl **)(int, int))v63 + 35, (int)&v56, &v61, &v65);
      v38 = sub_102C0C90(v37);
      v39 = v61;
      v40 = 40 * v38;
      v41 = (_DWORD *)(40 * v38 + v37[1]);
      v41[2] = v61;
      v41[1] = -1;
      *v41 = -1;
      v41[3] = 0;
      if ( v39 == (unsigned __int8 (__cdecl *)(int, int))-1 )
      {
        v37[4] = v38;
      }
      else
      {
        v42 = v37[1];
        v43 = 5 * (_DWORD)v39;
        if ( v65 )
          *(_DWORD *)(v42 + 8 * v43) = v38;
        else
          *(_DWORD *)(v42 + 8 * v43 + 4) = v38;
      }
      sub_102C3390(v37, v38);
      v44 = v37[1];
      ++v37[5];
      v45 = v44 + v40 + 16;
      if ( v45 )
      {
        *(_DWORD *)v45 = v56;
        *(_DWORD *)(v45 + 8) = v57;
        *(_DWORD *)(v45 + 12) = v58;
        *(double *)(v45 + 16) = v59;
      }
      v11 = (_DWORD *)a2;
      v64 = sub_102C23C0((_DWORD *)(a2 + 140), v64);
      if ( v64 == -1 )
        break;
      v27 = v64;
    }
  }
  v46 = v11[56];
  v47 = v63;
  v48 = v63 + 53;
  v63[56] = 0;
  sub_102C0E60(v48, 0, v46, 0);
  if ( v46 > 0 )
  {
    v49 = 0;
    v66 = v46;
    do
    {
      v50 = v11[53];
      v51 = *(_DWORD *)(v50 + v49);
      v52 = v49 + v50;
      v53 = v49 + v47[53];
      *(_DWORD *)v53 = v51;
      *(_DWORD *)(v53 + 4) = *(_DWORD *)(v52 + 4);
      *(_DWORD *)(v53 + 8) = *(_DWORD *)(v52 + 8);
      *(_DWORD *)(v53 + 12) = *(_DWORD *)(v52 + 12);
      v49 += 17;
      v54 = v66-- == 1;
      *(_BYTE *)(v53 + 16) = *(_BYTE *)(v52 + 16);
    }
    while ( !v54 );
  }
  v47[58] = v11[58];
  v47[59] = v11[59];
  sub_104310E0(v11 + 60);
  return v47;
}
