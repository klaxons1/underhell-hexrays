int __cdecl sub_101E7DF0(_DWORD **a1, float *a2, char a3)
{
  int v3; // edi
  double v4; // st7
  int (__thiscall *v5)(_DWORD **); // edx
  const char *v6; // eax
  int v7; // eax
  _BYTE *v8; // ebx
  char *v9; // ebx
  const char *v10; // eax
  const char *v11; // eax
  int result; // eax
  char *v13; // eax
  char v14; // bl
  int (__thiscall **v15)(_DWORD **); // edx
  int (__thiscall *v16)(_DWORD **); // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  int v24; // ecx
  char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  int v30; // edi
  int v31; // ebp
  int v32; // eax
  int *v33; // edi
  int v34; // ebx
  int v35; // eax
  bool v36; // zf
  int v37; // ebx
  double v38; // st7
  int v39; // edi
  char *v40; // eax
  char *v41; // ebp
  int v42; // ebx
  int v43; // edi
  int v44; // eax
  char v45; // dl
  float *v46; // edi
  char *v47; // edi
  int i; // ebp
  bool v49; // sf
  int v50; // eax
  char v51; // [esp+5Fh] [ebp-E5h]
  int v52; // [esp+60h] [ebp-E4h]
  int *v53; // [esp+60h] [ebp-E4h]
  float v54; // [esp+64h] [ebp-E0h]
  float v55; // [esp+64h] [ebp-E0h]
  int v56; // [esp+64h] [ebp-E0h]
  int v57; // [esp+68h] [ebp-DCh]
  int v58; // [esp+68h] [ebp-DCh]
  float v59; // [esp+6Ch] [ebp-D8h]
  char v60; // [esp+70h] [ebp-D4h]
  char v61; // [esp+74h] [ebp-D0h]
  int v62; // [esp+78h] [ebp-CCh]
  float v63; // [esp+7Ch] [ebp-C8h]
  float v64; // [esp+80h] [ebp-C4h]
  char v65; // [esp+84h] [ebp-C0h] BYREF
  __int16 v66; // [esp+85h] [ebp-BFh]
  float v67; // [esp+87h] [ebp-BDh] BYREF
  char v68; // [esp+8Bh] [ebp-B9h] BYREF
  __int16 v69; // [esp+8Ch] [ebp-B8h]
  float v70; // [esp+8Eh] [ebp-B6h]
  float v71; // [esp+94h] [ebp-B0h]
  _BYTE v72[8]; // [esp+98h] [ebp-ACh] BYREF
  char v73; // [esp+A0h] [ebp-A4h] BYREF
  _DWORD v74[7]; // [esp+A4h] [ebp-A0h]
  char v75; // [esp+C0h] [ebp-84h] BYREF
  char Destination[128]; // [esp+C4h] [ebp-80h] BYREF

  v3 = 0;
  if ( a3 )
  {
    sub_101E3800((int)a2);
    sub_102619F0(0);
  }
  v51 = 0;
  ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
  v54 = sub_10103A80(a2);
  v4 = sub_10103A90(a2);
  v5 = (int (__thiscall *)(_DWORD **))**a1;
  v71 = v54 - v4;
  LOWORD(v62) = 0;
  v6 = (const char *)v5(a1);
  if ( !_stricmp(v6, "samples_use_time") )
  {
    v51 = 1;
    ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
  }
  v7 = ((int (__thiscall *)(_DWORD **))**a1)(a1);
  if ( !sub_10227C80(v7, "defaultcurvetype", 16) )
  {
    v8 = (_BYTE *)(((int (__thiscall *)(_DWORD **))**a1)(a1) + 16);
    if ( !*v8 )
    {
      ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
      v8 = (_BYTE *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    }
    if ( *v8 != 61 )
      ((void (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting =\n");
    v9 = v8 + 1;
    if ( !*v9 )
    {
      ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
      v9 = (char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    }
    v62 = sub_100D9F40(v9);
    ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    sub_101E1CE0(a2, v62);
  }
  v10 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
  if ( _stricmp(v10, "{") )
    ((void (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting {\n");
  ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
  if ( !strlen((const char *)((int (__thiscall *)(_DWORD **))**a1)(a1)) )
    return ((int (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting flex animation data\n");
  while ( 1 )
  {
    v11 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    result = _stricmp(v11, "}");
    if ( !result )
      return result;
    v13 = (char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    sub_102282F0(Destination, v13, 0x80u);
    v63 = 0.0;
    v55 = 1.0;
    v14 = 0;
    v61 = 1;
    v60 = 0;
    ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    v15 = (int (__thiscall **)(_DWORD **))*a1;
    v67 = 0.0;
    v16 = *v15;
    v70 = 0.0;
    v65 = 0;
    v66 = 0;
    v68 = 0;
    v69 = 0;
    v17 = (const char *)v16(a1);
    if ( !_stricmp(v17, "disabled") )
    {
      v61 = 0;
      ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    }
    v18 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    if ( !_stricmp(v18, "combo") )
    {
      v14 = 1;
      v60 = 1;
      ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    }
    v19 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    if ( !_stricmp(v19, "range") )
    {
      ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[1])(a1, 0);
      v20 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
      v63 = atof(v20);
      ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[1])(a1, 0);
      v21 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
      v55 = atof(v21);
      ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    }
    v22 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    if ( !_stricmp(v22, "leftedge") )
      sub_101E60B0((int)a1, (int)&v65);
    v23 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
    if ( !_stricmp(v23, "rightedge") )
      sub_101E60B0((int)a1, (int)&v68);
    v24 = 1;
    v25 = &v73;
    do
    {
      *((_DWORD *)v25 - 2) = 0;
      *((_DWORD *)v25 - 1) = 0;
      *(_DWORD *)v25 = 0;
      *((_DWORD *)v25 + 1) = 0;
      *((_DWORD *)v25 + 2) = 0;
      v25 += 20;
      --v24;
    }
    while ( v24 >= 0 );
    v52 = 0;
    v57 = (v14 != 0) + 1;
    if ( v57 > 0 )
    {
      do
      {
        v26 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
        if ( _stricmp(v26, "{") )
          ((void (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting {\n");
        ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
        if ( strlen((const char *)((int (__thiscall *)(_DWORD **))**a1)(a1)) )
        {
          while ( 1 )
          {
            v27 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
            if ( !_stricmp(v27, "}") )
              break;
            v28 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
            v64 = atof(v28);
            ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[1])(a1, 0);
            v29 = (const char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
            v59 = atof(v29);
            v30 = 5 * v3;
            v31 = v74[v30];
            v32 = *(_DWORD *)&v72[4 * v30 + 4];
            v33 = (int *)&v72[4 * v30];
            if ( v31 + 1 > v32 )
              sub_101E22C0(v33, v31 - v32 + 1);
            ++v33[3];
            v34 = *v33;
            v35 = v33[3] - v31 - 1;
            v36 = v33[3] - v31 == 1;
            v33[4] = *v33;
            if ( v35 >= 0 && !v36 )
              memcpy((void *)(v34 + 10 * v31 + 10), (const void *)(v34 + 10 * v31), 10 * v35);
            v37 = 10 * v31 + v34;
            if ( v37 )
            {
              *(_WORD *)(v37 + 8) = 0;
              *(float *)v37 = 0.0;
              *(float *)(v37 + 4) = 0.0;
            }
            v38 = v64;
            v39 = 10 * v31 + *v33;
            if ( !v51 )
              v38 = v38 * v71;
            *(float *)(v39 + 4) = v38;
            *(float *)v39 = v59;
            if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[2])(a1) )
            {
              ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[1])(a1, 0);
              v40 = (char *)((int (__thiscall *)(_DWORD **))**a1)(a1);
              *(_WORD *)(v39 + 8) = (2 * sub_100D9F40(v40)) | *(_BYTE *)(v39 + 8) & 1;
            }
            else
            {
              *(_WORD *)(v39 + 8) = (2 * v62) | *(_BYTE *)(v39 + 8) & 1;
            }
            ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
            v3 = v52;
            if ( !strlen((const char *)((int (__thiscall *)(_DWORD **))**a1)(a1)) )
              goto LABEL_48;
          }
        }
        else
        {
LABEL_48:
          ((void (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting flex animation data\n");
        }
        if ( v60 && !v3 )
          ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
        v52 = ++v3;
      }
      while ( v3 < v57 );
    }
    if ( v61 || v74[0] >= 1 )
    {
      v41 = sub_101E3E30(a2, Destination);
      sub_101E19F0(v41, v61);
      sub_101E1AD0(v41, v60);
      sub_101E1B00((float *)v41, v63);
      sub_101E1B10((float *)v41, v55);
      v42 = 0;
      if ( v57 > 0 )
      {
        v53 = (int *)v72;
        do
        {
          if ( v53[3] > 0 )
          {
            v43 = *v53;
            v56 = v53[3];
            do
            {
              v44 = sub_101E3D90(v41, *(float *)(v43 + 4), *(float *)v43, v42);
              v45 = *(_BYTE *)(v44 + 8) ^ *(_BYTE *)(v43 + 8);
              v43 += 10;
              v36 = v56-- == 1;
              *(_WORD *)(v44 + 8) = *(_WORD *)(v43 - 2) ^ v45 & 1;
            }
            while ( !v36 );
          }
          v53 += 5;
          ++v42;
        }
        while ( v42 < v57 );
      }
      v58 = 0;
      v46 = &v67;
      do
      {
        if ( *((_BYTE *)v46 - 3) )
        {
          sub_101E1A30(v41, v58 == 0, 1);
          sub_101E1A00(v41, v58 == 0, *((_WORD *)v46 - 1), *v46);
        }
        v46 = (float *)((char *)v46 + 7);
        ++v58;
      }
      while ( v58 < 2 );
      sub_101E3A00(v41, 0);
      sub_101E3A00(v41, 1);
    }
    v47 = &v75;
    for ( i = 1; i >= 0; --i )
    {
      v47 -= 20;
      v49 = *((int *)v47 + 2) < 0;
      *((_DWORD *)v47 + 3) = 0;
      if ( !v49 )
      {
        if ( *(_DWORD *)v47 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)v47);
          *(_DWORD *)v47 = 0;
        }
        *((_DWORD *)v47 + 1) = 0;
      }
      v49 = *((int *)v47 + 2) < 0;
      v50 = *(_DWORD *)v47;
      *((_DWORD *)v47 + 4) = *(_DWORD *)v47;
      if ( !v49 )
      {
        if ( v50 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v50);
          *(_DWORD *)v47 = 0;
        }
        *((_DWORD *)v47 + 1) = 0;
      }
    }
    ((void (__thiscall *)(_DWORD **, int))(*a1)[1])(a1, 1);
    if ( !strlen((const char *)((int (__thiscall *)(_DWORD **))**a1)(a1)) )
      return ((int (__cdecl *)(_DWORD **, const char *))(*a1)[3])(a1, "expecting flex animation data\n");
    v3 = 0;
  }
}
