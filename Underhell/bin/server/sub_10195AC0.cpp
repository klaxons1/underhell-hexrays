int __thiscall sub_10195AC0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  void (__thiscall *v5)(int, _DWORD *, int, int); // edx
  int *v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // ebx
  int v11; // ebx
  int i; // edi
  int v13; // ebx
  _BYTE *v14; // ebx
  int v15; // edi
  bool v16; // zf
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  _DWORD *v26; // edi
  int j; // eax
  int v28; // edi
  int *v29; // ebx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int *v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // edi
  _DWORD *v47; // edi
  int v48; // ebx
  int result; // eax
  int v50; // [esp-4h] [ebp-3Ch]
  int v51; // [esp-4h] [ebp-3Ch]
  int v52; // [esp+0h] [ebp-38h]
  int v53; // [esp+4h] [ebp-34h]
  int v54; // [esp+Ch] [ebp-2Ch] BYREF
  int v55; // [esp+10h] [ebp-28h] BYREF
  int v56; // [esp+14h] [ebp-24h] BYREF
  int v57; // [esp+18h] [ebp-20h]
  int v58; // [esp+1Ch] [ebp-1Ch] BYREF
  int v59; // [esp+20h] [ebp-18h] BYREF
  int v60; // [esp+24h] [ebp-14h] BYREF
  int v61; // [esp+28h] [ebp-10h] BYREF
  _DWORD *v62; // [esp+2Ch] [ebp-Ch]
  int v63; // [esp+30h] [ebp-8h] BYREF
  unsigned __int8 v64; // [esp+36h] [ebp-2h] BYREF
  char v65; // [esp+37h] [ebp-1h] BYREF

  v3 = a2;
  v5 = *(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4);
  v62 = this;
  v5(dword_106B31D8 + 4, this, 4, a2);
  (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    this + 10,
    2,
    v3);
  (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    this + 1,
    24,
    v3);
  (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    this + 13,
    4,
    v3);
  (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    this + 14,
    4,
    v3);
  v6 = this + 131;
  v63 = 4;
  do
  {
    v60 = v6[6];
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
      dword_106B31D8 + 4,
      &v60,
      4,
      v3);
    v7 = v6[3];
    if ( v7 != -1 )
    {
      v8 = *v6;
      do
      {
        v9 = 12 * v7;
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          *(_DWORD *)(v8 + v9),
          4,
          v3);
        v8 = *v6;
        v7 = *(_DWORD *)(v9 + *v6 + 8);
      }
      while ( v7 != -1 );
    }
    v6 += 9;
    --v63;
  }
  while ( v63 );
  v10 = v62;
  if ( (int)v62[27] <= 255 )
  {
    HIBYTE(a2) = v62[27];
  }
  else
  {
    v50 = *v62;
    HIBYTE(a2) = -1;
    Warning("Warning: NavArea #%d: Truncated hiding spot list to 255\n", v50);
  }
  (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    (char *)&a2 + 3,
    1,
    v3);
  v11 = v10[24];
  for ( i = 0; v11 != -1; v11 = *(_DWORD *)(v13 + v62[21] + 8) )
  {
    v13 = 12 * v11;
    sub_1019DB40(v3, a3);
    if ( ++i == HIBYTE(a2) )
      break;
  }
  v14 = v62 + 119;
  (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
    dword_106B31D8 + 4,
    v62 + 119,
    1,
    v3);
  v15 = 0;
  v16 = *v14 == 0;
  v61 = 0;
  if ( !v16 )
  {
    v17 = v62 + 40;
    do
    {
      v18 = *(v17 - 1);
      v19 = *(_DWORD *)(dword_106B31D8 + 4);
      v20 = dword_106B31D8 + 4;
      if ( v18 )
        (*(void (__thiscall **)(int, int, int, int))(v19 + 4))(v20, v18, 4, v3);
      else
        (*(void (__thiscall **)(int, int *, int, int))(v19 + 4))(v20, &v61, 4, v3);
      v21 = *(_DWORD *)(dword_106B31D8 + 4);
      v22 = dword_106B31D8 + 4;
      if ( *v17 )
        (*(void (__thiscall **)(int, _DWORD, int, int))(v21 + 4))(v22, *v17, 4, v3);
      else
        (*(void (__thiscall **)(int, int *, int, int))(v21 + 4))(v22, &v61, 4, v3);
      v65 = *((_BYTE *)v17 + 4);
      (*(void (__thiscall **)(int, char *, int, int, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
        dword_106B31D8 + 4,
        &v65,
        1,
        v3,
        v52,
        v53);
      v23 = v17[2];
      v24 = *(_DWORD *)(dword_106B31D8 + 4);
      v25 = dword_106B31D8 + 4;
      v53 = v3;
      v52 = 4;
      if ( v23 )
        (*(void (__thiscall **)(int, int))(v24 + 4))(v25, v23);
      else
        (*(void (__thiscall **)(int, int *))(v24 + 4))(v25, &v61);
      v65 = *((_BYTE *)v17 + 12);
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
        dword_106B31D8 + 4,
        &v65,
        1,
        v3);
      ++v15;
      v17 += 5;
    }
    while ( v15 < *((unsigned __int8 *)v62 + 476) );
  }
  v26 = v62;
  v59 = v62[36];
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v59, 4, v3);
  for ( j = v26[33]; j != -1; j = *(_DWORD *)(v28 + v62[30] + 8) )
  {
    v28 = 12 * j;
    v29 = *(int **)(12 * j + v62[30]);
    v30 = *v29;
    v31 = *(_DWORD *)(dword_106B31D8 + 4);
    v32 = dword_106B31D8 + 4;
    v55 = v28;
    if ( v30 )
      (*(void (__thiscall **)(int, int, int, int))(v31 + 4))(v32, v30, 4, v3);
    else
      (*(void (__thiscall **)(int, int *, int, int))(v31 + 4))(v32, &v61, 4, v3);
    HIBYTE(a3) = *((_BYTE *)v29 + 4);
    (*(void (__thiscall **)(int, char *, int, int, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
      dword_106B31D8 + 4,
      (char *)&a3 + 3,
      1,
      v3,
      v52,
      v53);
    v33 = v29[2];
    v34 = *(_DWORD *)(dword_106B31D8 + 4);
    v35 = dword_106B31D8 + 4;
    v53 = v3;
    v52 = 4;
    if ( v33 )
      (*(void (__thiscall **)(int, int))(v34 + 4))(v35, v33);
    else
      (*(void (__thiscall **)(int, int *))(v34 + 4))(v35, &v61);
    HIBYTE(a3) = *((_BYTE *)v29 + 12);
    (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
      dword_106B31D8 + 4,
      (char *)&a3 + 3,
      1,
      v3);
    if ( v29[16] <= 255 )
    {
      v64 = v29[16];
    }
    else
    {
      v51 = *v62;
      v64 = -1;
      Warning("Warning: NavArea #%d: Truncated encounter spot list to 255\n", v51);
    }
    (*(void (__thiscall **)(int, unsigned __int8 *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
      dword_106B31D8 + 4,
      &v64,
      1,
      v3);
    v36 = v29[13];
    v60 = 0;
    if ( v36 != -1 )
    {
      do
      {
        v37 = 16 * v36;
        v38 = v37 + v29[10];
        v56 = v37;
        v39 = *(_DWORD *)(v38 + 4);
        if ( v39 )
          v40 = *(_DWORD *)(v39 + 16);
        else
          v40 = 0;
        v58 = v40;
        (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          &v58,
          4,
          v3);
        v57 = (int)(*(float *)v38 * 255.0);
        HIBYTE(v63) = v57;
        (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          (char *)&v63 + 3,
          1,
          v3);
        if ( ++v60 == v64 )
          break;
        v36 = *(_DWORD *)(v56 + v29[10] + 12);
      }
      while ( v36 != -1 );
      v28 = v55;
    }
  }
  v41 = v62[11];
  v42 = 0;
  if ( v41 )
  {
    if ( dword_106B7E84 <= 0 )
      goto LABEL_48;
    while ( *(_DWORD *)(dword_106B7E78 + 4 * v42) != v41 )
    {
      if ( ++v42 >= dword_106B7E84 )
      {
        LOWORD(v42) = 0;
        goto LABEL_50;
      }
    }
    if ( v42 >= 0 )
      LOWORD(v42) = v42 + 1;
    else
LABEL_48:
      LOWORD(v42) = 0;
  }
LABEL_50:
  v54 = (unsigned __int16)v42;
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &v54, 2, v3);
  v43 = v62 + 167;
  a3 = 2;
  do
  {
    v55 = v43[6];
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
      dword_106B31D8 + 4,
      &v55,
      4,
      v3);
    v44 = v43[3];
    if ( v44 != -1 )
    {
      v45 = *v43;
      do
      {
        v46 = 12 * v44;
        v56 = *(_DWORD *)(*(_DWORD *)(v45 + v46) + 68);
        (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          &v56,
          4,
          v3);
        v45 = *v43;
        v44 = *(_DWORD *)(v46 + *v43 + 8);
      }
      while ( v44 != -1 );
    }
    v43 += 9;
    --a3;
  }
  while ( a3 );
  v47 = v62 + 120;
  v48 = 2;
  do
  {
    result = (*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
               dword_106B31D8 + 4,
               v47++,
               4,
               v3);
    --v48;
  }
  while ( v48 );
  return result;
}
