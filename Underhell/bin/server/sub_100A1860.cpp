int __stdcall sub_100A1860(int a1, unsigned __int8 (__thiscall ***a2)(_DWORD, int, _DWORD))
{
  int v3; // eax
  int v4; // ebx
  int v6; // eax
  int v7; // esi
  int *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // ecx
  _BYTE *v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // ecx
  _BYTE *v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // edx
  int v24; // ecx
  char *v25; // eax
  int v26; // esi
  unsigned int v27; // ebx
  double v28; // st7
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // esi
  unsigned int v33; // [esp+Ch] [ebp-40h]
  int v34; // [esp+1Ch] [ebp-30h] BYREF
  int v35; // [esp+20h] [ebp-2Ch]
  int v36; // [esp+24h] [ebp-28h]
  int i; // [esp+28h] [ebp-24h]
  int v38; // [esp+2Ch] [ebp-20h]
  float v39; // [esp+30h] [ebp-1Ch]
  int v40; // [esp+34h] [ebp-18h]
  int v41; // [esp+38h] [ebp-14h]
  float v42; // [esp+3Ch] [ebp-10h]
  int v43; // [esp+40h] [ebp-Ch]
  int v44; // [esp+44h] [ebp-8h]
  int v45; // [esp+48h] [ebp-4h] BYREF
  char v46; // [esp+57h] [ebp+Bh]

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  v43 = v3;
  if ( !v3 )
    return -1;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  i = 0;
  v38 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
    {
      v45 = 0;
      if ( v3 > 0 )
      {
        do
        {
          v6 = 8 * v45 + *(_DWORD *)a1;
          if ( *(_BYTE *)(v6 + 6) != *(_BYTE *)(a1 + 43) && !(**a2)(a2, *(_BYTE *)(v6 + 7) & 0x3F, *(_DWORD *)v6) )
          {
            v7 = v4;
            if ( v4 + 1 > v35 )
            {
              sub_102ABFC0(v4 - v35 + 1);
              v4 = i;
            }
            i = ++v4;
            v38 = v34;
            if ( v4 - v7 - 1 > 0 )
              memcpy((void *)(v34 + 4 * v7 + 4), (const void *)(v34 + 4 * v7), 4 * (v4 - v7 - 1));
            v8 = (int *)(v34 + 4 * v7);
            v9 = v45;
            if ( v8 )
              *v8 = v45;
            if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v9 >= 0 && v9 < *(_DWORD *)(a1 + 12) )
              *(_BYTE *)(8 * v9 + *(_DWORD *)a1 + 6) = *(_BYTE *)(a1 + 43);
          }
          ++v45;
        }
        while ( v45 < v43 );
      }
    }
  }
  v46 = *(_BYTE *)(a1 + 44) & 1;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 12);
    v11 = 0;
    if ( v10 <= 0 )
    {
LABEL_24:
      ++*(_BYTE *)(a1 + 43);
      if ( a2 )
      {
        v13 = 0;
        for ( i = 0; v13 < v43; ++v13 )
        {
          if ( !(**a2)(a2, *(_BYTE *)(8 * v13 + *(_DWORD *)a1 + 7) & 0x3F, *(_DWORD *)(8 * v13 + *(_DWORD *)a1)) )
          {
            v14 = i;
            v15 = i;
            if ( i + 1 > v35 )
            {
              sub_102ABFC0(i - v35 + 1);
              v14 = i;
            }
            i = v14 + 1;
            v16 = v14 - v15;
            v38 = v34;
            if ( v16 > 0 )
              memcpy((void *)(v34 + 4 * v15 + 4), (const void *)(v34 + 4 * v15), 4 * v16);
            v17 = (int *)(v34 + 4 * v15);
            if ( v17 )
              *v17 = v13;
            if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v13 >= 0 && v13 < *(_DWORD *)(a1 + 12) )
              *(_BYTE *)(*(_DWORD *)a1 + 8 * v13 + 6) = *(_BYTE *)(a1 + 43);
          }
        }
      }
      v46 = *(_BYTE *)(a1 + 44) & 1;
      if ( v46 )
      {
        v18 = *(_DWORD *)(a1 + 12);
        v19 = 0;
        if ( v18 <= 0 )
        {
LABEL_43:
          sub_102375F0(&v34);
          return -1;
        }
        v20 = (_BYTE *)(*(_DWORD *)a1 + 6);
        while ( *v20 == *(_BYTE *)(a1 + 43) )
        {
          ++v19;
          v20 += 8;
          if ( v19 >= v18 )
            goto LABEL_43;
        }
      }
      if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
      {
        *(_BYTE *)(a1 + 41) = 0;
        sub_102375F0(&v34);
        return -1;
      }
    }
    else
    {
      v12 = (_BYTE *)(*(_DWORD *)a1 + 6);
      while ( *v12 == *(_BYTE *)(a1 + 43) )
      {
        ++v11;
        v12 += 8;
        if ( v11 >= v10 )
          goto LABEL_24;
      }
    }
  }
  v21 = *(unsigned __int8 *)(a1 + 43);
  v22 = -1;
  v42 = 0.0;
  v41 = v21;
  v44 = -1;
  if ( !v46 )
    goto LABEL_60;
  v45 = -1;
  if ( !sub_1009ABF0((void *)a1, &v45) || v45 == -1 )
  {
    if ( sub_1009AC50((void *)a1, &v45) && v45 != -1 )
    {
      v23 = v43;
      v24 = 0;
      if ( v43 <= 0 )
        goto LABEL_59;
      v25 = (char *)(*(_DWORD *)a1 + 7);
      while ( (unsigned __int8)*(v25 - 1) == v41 || *v25 < 0 )
      {
        ++v24;
        v25 += 8;
        if ( v24 >= v43 )
        {
          v22 = v45;
          v44 = v45;
          goto LABEL_77;
        }
      }
      if ( v24 >= v43 )
      {
LABEL_59:
        v22 = v45;
        v44 = v45;
        goto LABEL_77;
      }
LABEL_61:
      v45 = 0;
      if ( v23 <= 0 )
        goto LABEL_81;
      do
      {
        v26 = *(_DWORD *)a1 + 8 * v45;
        if ( !v46 || *(unsigned __int8 *)(v26 + 6) != v41 && *(char *)(v26 + 7) >= 0 )
        {
          v40 = v44;
          if ( 0.0 == v42 )
            v44 = v45;
          v27 = *(unsigned __int16 *)(v26 + 4);
          v28 = sub_10065370(v27) + v42;
          v42 = v28;
          if ( 0.0 == v28
            || (v39 = sub_10065370(v27),
                ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(0.0, LODWORD(v42)) < v39) )
          {
            v44 = v45;
          }
          if ( !v46 && v44 != v40 && a2 && !(**a2)(a2, *(_BYTE *)(v26 + 7) & 0x3F, *(_DWORD *)v26) )
          {
            v33 = *(unsigned __int16 *)(v26 + 4);
            v44 = v40;
            v42 = v42 - sub_10065370(v33);
          }
        }
        ++v45;
      }
      while ( v45 < v43 );
      v22 = v44;
      if ( v44 == -1 )
        goto LABEL_81;
      goto LABEL_77;
    }
LABEL_60:
    v23 = v43;
    goto LABEL_61;
  }
  v22 = v45;
  v44 = v45;
LABEL_77:
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v22 >= 0 && v22 < *(_DWORD *)(a1 + 12) )
    *(_BYTE *)(*(_DWORD *)a1 + 8 * v22 + 6) = *(_BYTE *)(a1 + 43);
LABEL_81:
  if ( a2 && (*(_BYTE *)(a1 + 44) & 1) != 0 && (v29 = i, v30 = 0, i > 0) )
  {
    v31 = v34;
    do
    {
      v32 = *(_DWORD *)(v31 + 4 * v30++);
      *(_BYTE *)(*(_DWORD *)a1 + 8 * v32 + 6) = 0;
    }
    while ( v30 < v29 );
    v22 = v44;
  }
  else
  {
    v31 = v34;
  }
  if ( v36 >= 0 )
  {
    if ( v31 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31);
  }
  return v22;
}
