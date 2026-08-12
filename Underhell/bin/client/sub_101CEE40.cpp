double __cdecl sub_101CEE40(_DWORD *a1, signed int a2, double *a3, int a4, int a5, void *a6)
{
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  char v10; // si
  int v11; // edx
  int v12; // ebx
  int *v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  double *v17; // eax
  double *v18; // eax
  __int64 v19; // rax
  int v20; // ebx
  int v21; // esi
  double *v22; // edx
  int v23; // ecx
  double *v24; // edi
  __int16 v25; // fps
  double v26; // st7
  bool v27; // c0
  char v28; // c2
  bool v29; // c3
  int v30; // eax
  bool v31; // zf
  char *v32; // eax
  double *v33; // eax
  double v34; // st7
  double v35; // st6
  unsigned __int8 v37; // c0
  unsigned __int8 v38; // c2
  double v39; // st7
  __int16 v40; // fps
  int v41; // eax
  bool v42; // cc
  double v43; // st7
  int v44; // edi
  int v45; // ecx
  int v46; // esi
  int v47; // eax
  int v48; // edx
  char *v49; // eax
  unsigned int v50; // ebx
  char v52; // [esp+17h] [ebp-59h]
  int v53; // [esp+18h] [ebp-58h]
  int v54; // [esp+18h] [ebp-58h]
  int v55; // [esp+1Ch] [ebp-54h]
  int v56; // [esp+1Ch] [ebp-54h]
  int v57; // [esp+1Ch] [ebp-54h]
  int v58; // [esp+20h] [ebp-50h]
  int v59; // [esp+20h] [ebp-50h]
  signed int v60; // [esp+20h] [ebp-50h]
  double *v61; // [esp+24h] [ebp-4Ch]
  double *v62; // [esp+28h] [ebp-48h]
  int v63; // [esp+2Ch] [ebp-44h]
  _DWORD *v64; // [esp+2Ch] [ebp-44h]
  int v65; // [esp+30h] [ebp-40h]
  int v66; // [esp+30h] [ebp-40h]
  char v67; // [esp+34h] [ebp-3Ch]
  int v68; // [esp+34h] [ebp-3Ch]
  char v69; // [esp+38h] [ebp-38h]
  _DWORD *v70; // [esp+38h] [ebp-38h]
  _DWORD *v71; // [esp+38h] [ebp-38h]
  int *v72; // [esp+3Ch] [ebp-34h]
  int v73; // [esp+40h] [ebp-30h]
  int v74; // [esp+40h] [ebp-30h]
  int v75; // [esp+44h] [ebp-2Ch] BYREF
  int v76; // [esp+48h] [ebp-28h]
  _DWORD v77[9]; // [esp+4Ch] [ebp-24h] BYREF

  if ( !dword_10458C90 )
  {
    v6 = 0;
    dword_10458C90 = 1;
    v63 = 0;
    do
    {
      v7 = dword_103EDB10[v6];
      v67 = v7;
      v8 = (1 << v7) - 1;
      v9 = v8;
      v73 = v8;
      v55 = v8;
      if ( v8 >= 0 )
      {
        do
        {
          v53 = v8;
          if ( v8 >= 0 )
          {
            v10 = 8 - v7;
            v69 = 8 - v7;
            v11 = (v9 >> (2 * v7 - 8)) | (v9 << (8 - v7));
            v65 = v11;
            while ( 1 )
            {
              v12 = v8 >> (2 * v7 - 8);
              v58 = 0;
              v13 = (int *)&unk_103EDB1C;
              v14 = (v8 << v10) | v12;
              while ( 1 )
              {
                v15 = (v13[2] + v11 * *v13 + v14 * v13[1]) / v13[3];
                v16 = v58 + 2 * (v63 + 2 * v15 + v15) + v63 + 2 * v15 + v15;
                if ( !byte_10456980[3 * v16]
                  || (int)abs32((unsigned __int8)byte_10456982[3 * v16] - (unsigned __int8)byte_10456981[3 * v16]) > (int)abs32(v14 - v65) )
                {
                  byte_10456980[3 * v16] = 1;
                  byte_10456981[3 * v16] = (_BYTE)v55 << v69;
                  byte_10456982[3 * v16] = (_BYTE)v53 << v69;
                }
                v13 += 4;
                ++v58;
                if ( (int)v13 >= (int)&dword_103EDB4C )
                  break;
                v11 = v65;
              }
              LOBYTE(v7) = v67;
              if ( --v53 < 0 )
                break;
              v11 = v65;
              v8 = v53;
              v10 = v69;
            }
            v9 = v55;
            v8 = v73;
          }
          v55 = --v9;
        }
        while ( v9 >= 0 );
        v6 = v63;
      }
      v63 = ++v6;
    }
    while ( v6 < 3 );
  }
  v54 = 0;
  if ( *a1 - 1 <= 0 )
    goto LABEL_54;
  v68 = a4 - (_DWORD)a3;
  v70 = v77;
  v17 = dbl_10456958;
  v62 = dbl_10456958;
  while ( 2 )
  {
    *(_DWORD *)v17 = 0;
    *((_DWORD *)v17 + 1) = 0;
    v18 = a3;
    v56 = 0;
    v61 = a3;
    v64 = v70;
    while ( 2 )
    {
      v19 = (__int64)floor(255.0 / *(double *)((char *)v18 + v68) * *v18 + 0.5);
      v20 = v19;
      v66 = v19;
      if ( (int)v19 < 0 )
      {
        v20 = 0;
LABEL_27:
        v66 = v20;
        goto LABEL_28;
      }
      if ( (int)v19 >= 256 )
      {
        v20 = 255;
        goto LABEL_27;
      }
LABEL_28:
      v21 = 1;
      v74 = 1;
      v52 = byte_10456980[12 * v20 + 6 * v56 + 6 * v20 + 6 * v20 + 3 * v54 + 3 * v56 + 3 * v20];
      v72 = &v75;
      v22 = &dbl_10458608;
      do
      {
        v23 = v20;
        v59 = v20;
        if ( v52 )
        {
          v24 = v61;
          v26 = (255.0 / *(double *)((char *)v61 + v68) * *v61 - (double)v66) * (double)v74;
          v27 = v26 < 0.0;
          v28 = 0;
          v29 = v26 == 0.0;
          if ( (v25 & 0x4100) != 0 )
            goto LABEL_40;
        }
        v23 = v21 + v20;
        v59 = v21 + v20;
        if ( v21 + v20 < 0 )
        {
          v23 = 0;
LABEL_35:
          v59 = v23;
          goto LABEL_36;
        }
        if ( v23 >= 256 )
        {
          v23 = 255;
          goto LABEL_35;
        }
LABEL_36:
        v30 = v54 + 2 * (v56 + 2 * v23 + v23) + v56 + 2 * v23 + v23;
        v31 = byte_10456980[3 * v30] == 0;
        v32 = &byte_10456980[3 * v30];
        if ( v31 )
        {
          do
          {
            v32 += 27 * v21;
            v23 += v21;
          }
          while ( !*v32 );
          v59 = v23;
        }
        v24 = v61;
LABEL_40:
        *(_DWORD *)v22 = 0;
        *((_DWORD *)v22 + 1) = 0;
        if ( a2 > 0 )
        {
          v33 = v24;
          v34 = (double)v59;
          v60 = a2;
          do
          {
            v33 += 3;
            v31 = v60 == 1;
            v35 = v34 * *(double *)((char *)v24 + v68) - *(v33 - 3) * 255.0;
            --v60;
            *v22 = v35 * v35 + *v22;
          }
          while ( !v31 );
          v20 = v66;
        }
        ++v22;
        v21 = -v21;
        *v72++ = v23;
        v74 = v21;
      }
      while ( (int)v22 < (int)dbl_10458618 );
      if ( v37 | v38 )
      {
        v39 = dbl_10458608 + *v62;
        *v64 = v75;
        *v62 = v39;
      }
      else
      {
        *v62 = dbl_10458610 + *v62;
        if ( (v40 & 0x4100) != 0 )
        {
          v41 = v75;
          if ( (v20 & 1) == 0 )
            v41 = v76;
          *v64 = v41;
        }
        else
        {
          *v64 = v76;
        }
      }
      v42 = ++v56 < 3;
      ++v61;
      v64 += 3;
      if ( v42 )
      {
        v18 = v61;
        continue;
      }
      break;
    }
    ++v54;
    ++v62;
    ++v70;
    if ( v54 < *a1 - 1 )
    {
      v17 = v62;
      continue;
    }
    break;
  }
LABEL_54:
  if ( *a1 != 4 )
  {
    if ( *a1 != 3 )
      goto LABEL_65;
    v54 = 0;
    if ( dbl_10456958[0] <= dbl_10456960 )
      goto LABEL_65;
    goto LABEL_64;
  }
  v43 = dbl_10456958[0];
  if ( byte_1044FA18 )
    goto LABEL_58;
  if ( dbl_10456958[0] > dbl_10456960 )
  {
    if ( dbl_10456960 > dbl_10456968 )
    {
LABEL_61:
      v54 = 2;
      goto LABEL_65;
    }
LABEL_64:
    v54 = 1;
    goto LABEL_65;
  }
  v43 = dbl_10456958[0];
LABEL_58:
  if ( v43 > dbl_10456968 )
    goto LABEL_61;
  v54 = 0;
LABEL_65:
  v44 = a5;
  v45 = 0;
  v57 = 0;
  v71 = &v77[v54];
  do
  {
    v46 = v44;
    v47 = v45 + 2 * *v71 + *v71;
    v48 = 2;
    v49 = &byte_10456981[6 * v47 + 3 * v54 + 3 * v47];
    do
    {
      v46 += 12;
      v50 = (unsigned __int8)*v49++;
      --v48;
      *(_DWORD *)(v46 - 12) = v50 >> (8 - *((_BYTE *)dword_103EDB10 + v44 - a5));
    }
    while ( v48 );
    v45 = v57 + 1;
    v44 += 4;
    v42 = ++v57 < 3;
    v71 += 3;
  }
  while ( v42 );
  if ( a2 > 0 )
    memset32(a6, v54 + 1, a2);
  if ( v54 )
    *a1 = v54 + 2;
  return dbl_10456958[v54];
}
