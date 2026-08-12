void __thiscall sub_101282D0(int *this, char *a2)
{
  int *v2; // edi
  bool v3; // zf
  char *v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // ebx
  int v20; // eax
  int *v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned __int16 v24; // cx
  int v25; // eax
  int *v26; // ecx
  int v27; // ecx
  signed int v28; // eax
  int v29; // ecx
  _DWORD *v30; // esi
  int v31; // eax
  int v32; // esi
  void *v33; // esp
  int v34; // ebx
  int v35; // esi
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // edx
  int v39; // ebx
  int v40; // eax
  int v41; // ecx
  _DWORD *v42; // edi
  unsigned int v43; // eax
  int v44; // edx
  _WORD *v45; // ecx
  int v46; // eax
  _BYTE v47[12]; // [esp+0h] [ebp-3Ch] BYREF
  _DWORD v48[4]; // [esp+Ch] [ebp-30h] BYREF
  int v49; // [esp+1Ch] [ebp-20h] BYREF
  _BYTE *v50; // [esp+20h] [ebp-1Ch] BYREF
  int *v51; // [esp+24h] [ebp-18h]
  unsigned int v52; // [esp+28h] [ebp-14h] BYREF
  int v53; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v54; // [esp+30h] [ebp-Ch]
  int v55; // [esp+34h] [ebp-8h]
  char v56; // [esp+3Bh] [ebp-1h]

  v2 = this;
  v3 = *this == 0;
  v51 = this;
  if ( !v3 )
    return;
  v4 = a2;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 1);
  v2[10] = *(_DWORD *)a2;
  v2[11] = v6;
  if ( *(_DWORD *)(v5 + 336) )
  {
    if ( !v6 )
    {
      v7 = sub_10128960();
      if ( !sub_101280C0(a2, v7) )
        return;
    }
  }
  v8 = *((_DWORD *)a2 + 1);
  *((_BYTE *)v2 + 8) = 1;
  v56 = 0;
  v55 = v8 ? *(_DWORD *)(v8 + 20) : *(_DWORD *)(*(_DWORD *)a2 + 188);
  v9 = 0;
  v54 = 0;
  if ( v55 <= 0 )
    return;
  while ( 1 )
  {
    v10 = (_DWORD *)sub_10127960(v4, v9);
    v3 = (v10[3] & 0x1000) == 0;
    v50 = v10;
    if ( v3 )
      sub_10008B30((int)a2, v9);
    v11 = v10[4];
    if ( v11 >= 0 )
    {
      v12 = v10[5];
      v56 = 1;
      if ( v12 < 0 )
        v12 = -v12;
      v48[0] = v11;
      v48[3] = v12;
      v48[1] = 0;
      v48[2] = 1;
      if ( sub_10008C70(v2 + 3, v48, (int *)&v52, &v53) )
        v13 = v53 | (v52 << 16);
      else
        v13 = -1;
      v14 = HIWORD(v13);
      if ( (int)HIWORD(v13) < v2[6] )
      {
        v15 = v2[3];
        if ( (unsigned __int16)v13 < *(int *)(v15 + 20 * v14 + 12) )
        {
          v16 = *(_DWORD *)(v15 + 20 * v14) + 16 * (unsigned __int16)v13;
          v17 = *((_DWORD *)v50 + 5);
          ++*(_DWORD *)(v16 + 8);
          if ( v17 < 0 )
            v17 = -v17;
          *(_DWORD *)(v16 + 12) += v17;
          v9 = v54;
          goto LABEL_27;
        }
        v9 = v54;
      }
      if ( !sub_10008C70(v2 + 3, v48, &v49, (int *)&v50) )
        sub_10128040((int *)(v2[3] + 20 * v49), *(_DWORD *)(v2[3] + 20 * v49 + 12), v48);
    }
LABEL_27:
    v54 = ++v9;
    if ( v9 >= v55 )
      break;
    v4 = a2;
  }
  if ( v56 )
  {
    v18 = v2[6];
    v19 = 0;
    v20 = 0;
    v53 = 0;
    if ( v18 > 0 )
    {
      v21 = (int *)(v2[3] + 12);
      do
      {
        if ( *v21 > 0 )
        {
          v22 = v20 << 16;
          goto LABEL_34;
        }
        ++v20;
        v21 += 5;
      }
      while ( v20 < v18 );
    }
LABEL_33:
    v22 = -1;
LABEL_34:
    while ( 1 )
    {
      v23 = HIWORD(v22);
      v54 = v22;
      if ( (int)HIWORD(v22) >= v18 )
        break;
      v24 = v22;
      v25 = v2[3];
      if ( v24 >= *(int *)(v25 + 20 * v23 + 12) )
        break;
      v26 = (int *)(*(_DWORD *)(v25 + 20 * v23) + 16 * v24);
      v26[1] = v19;
      v19 += v26[2];
      v27 = *v26;
      v52 = v19;
      if ( v53 <= v27 )
        v53 = v27;
      v18 = v2[6];
      v28 = (v54 + 1) >> 16;
      v29 = (unsigned __int16)(v54 + 1);
      if ( v28 >= v18 )
        goto LABEL_33;
      v30 = (_DWORD *)(v2[3] + 20 * v28 + 12);
      while ( v29 >= *v30 )
      {
        ++v28;
        v29 = 0;
        v30 += 5;
        if ( v28 >= v18 )
        {
          v19 = v52;
          goto LABEL_33;
        }
      }
      v19 = v52;
      v22 = v29 | (v28 << 16);
    }
    v31 = sub_100DDA40(v19 >> 30 != 0 ? -1 : 4 * v19);
    v32 = 4 * v53 + 19;
    v52 = v31;
    *v2 = v31;
    v32 &= 0xFFFFFFF0;
    v2[1] = v19;
    v33 = alloca(v32);
    v50 = v47;
    memset(v47, 0, v32);
    v34 = 0;
    v53 = 0;
    do
    {
      v35 = sub_10127960(a2, v34);
      v36 = *(_DWORD *)(v35 + 16);
      v49 = v36;
      if ( v36 >= 0 )
      {
        v37 = sub_1022D3F0(v36);
        if ( *((_BYTE *)v2 + 34) )
          v38 = v37 & v2[9];
        else
          v38 = v37 % v2[6];
        v39 = v2[3] + 20 * v38;
        v40 = *(_DWORD *)(v39 + 12);
        v41 = 0;
        if ( v40 > 0 )
        {
          v42 = *(_DWORD **)v39;
          do
          {
            if ( *v42 == v49 )
              break;
            ++v41;
            v42 += 4;
          }
          while ( v41 < v40 );
          v2 = v51;
        }
        if ( v41 == v40 )
          v43 = -1;
        else
          v43 = v41 | (v38 << 16);
        v44 = (int)v50;
        v45 = (_WORD *)(v52
                      + 4
                      * (*(_DWORD *)&v50[4 * *(_DWORD *)(v35 + 16)]
                       + *(_DWORD *)(*(_DWORD *)(v2[3] + 20 * HIWORD(v43)) + 16 * (unsigned __int16)v43 + 4)));
        *v45 = v53;
        v46 = *(_DWORD *)(v35 + 20);
        if ( v46 < 0 )
          v46 = -v46;
        v34 = v53;
        v45[1] = v46;
        ++*(_DWORD *)(v44 + 4 * *(_DWORD *)(v35 + 16));
      }
      v53 = ++v34;
    }
    while ( v34 < v55 );
  }
}
