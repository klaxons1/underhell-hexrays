void __thiscall sub_10218B60(int this, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int *v5; // ecx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  unsigned __int16 v15; // di
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // eax
  int v19; // ebx
  int v20; // ecx
  double v21; // st4
  double v22; // st6
  double v23; // st4
  double v24; // st5
  double v25; // st6
  double v26; // st7
  unsigned int v27; // eax
  unsigned __int16 v28; // bx
  int v29; // ecx
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  float v36; // [esp+14h] [ebp-1Ch]
  float v37; // [esp+18h] [ebp-18h]
  float v38; // [esp+1Ch] [ebp-14h]
  unsigned __int16 v39; // [esp+20h] [ebp-10h]
  int v40; // [esp+24h] [ebp-Ch]
  float v41; // [esp+24h] [ebp-Ch]
  int v42; // [esp+24h] [ebp-Ch]
  int v43; // [esp+28h] [ebp-8h]
  unsigned __int16 v44; // [esp+28h] [ebp-8h]
  int v45; // [esp+2Ch] [ebp-4h]

  v45 = this;
  v43 = *(_DWORD *)(this + 68);
  if ( v43 == -1 )
    v43 = *(_DWORD *)(dword_106C2B2C + 48);
  if ( byte_106C2B08 )
    v43 = 0;
  v2 = *(unsigned __int16 *)(this + 24);
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 72) = 0;
  if ( v2 < 0xFFFF )
  {
    v3 = this + 12;
    do
    {
      v4 = 8 * (unsigned __int16)v2;
      v40 = *(unsigned __int16 *)(*(_DWORD *)v3 + v4 + 6);
      if ( *(_DWORD *)(*(_DWORD *)v3 + v4) != -1
        && (v5 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 1],
            off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 2] == *(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) >> 12)
        && (v6 = *v5) != 0 )
      {
        ++*(_DWORD *)(v45 + 76);
        v7 = *(_DWORD *)(v6 + 424);
        if ( v7 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
          ++*(_DWORD *)(v45 + 72);
        if ( *(unsigned __int16 *)(v45 + 30) > v43 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2);
          if ( v8 == -1
            || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 2] != v8 >> 12 )
          {
            v9 = 0;
          }
          else
          {
            v9 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 1];
          }
          if ( sub_102187F0(v9) == 1 )
          {
            v10 = 8 * (unsigned __int16)v2;
            v11 = *(_DWORD *)(*(_DWORD *)v3 + v10);
            if ( v11 == -1
              || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 2] != v11 >> 12 )
            {
              v12 = 0;
            }
            else
            {
              v12 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * (unsigned __int16)v2) & 0xFFF) + 1];
            }
            sub_100E31F0(v12, 0.0, 1);
            sub_10399E70(v2);
            *(_WORD *)(v10 + *(_DWORD *)v3 + 6) = *(_WORD *)(v3 + 16);
            *(_WORD *)(v3 + 16) = v2;
            return;
          }
        }
      }
      else
      {
        sub_10399E70(v2);
        *(_WORD *)(v4 + *(_DWORD *)v3 + 6) = *(_WORD *)(v3 + 16);
        *(_WORD *)(v3 + 16) = v2;
      }
      LOWORD(v2) = v40;
    }
    while ( v40 < 0xFFFF );
    this = v45;
  }
  v41 = 0.0;
  v39 = *(_WORD *)(this + 24);
  v13 = v45;
  v14 = sub_10261B20();
  if ( v14 && *(unsigned __int16 *)(v45 + 30) > v43 )
  {
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    v15 = *(_WORD *)(v45 + 24);
    v36 = *(float *)(v14 + 580);
    v37 = *(float *)(v14 + 584);
    v38 = *(float *)(v14 + 588);
    v44 = v15;
    if ( v15 == 0xFFFF )
    {
LABEL_47:
      v27 = *(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v39);
      if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v39) & 0xFFF) + 2] != v27 >> 12 )
        sub_100E31F0(0, 0.0, 1);
      else
        sub_100E31F0(off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v39) & 0xFFF) + 1], 0.0, 1);
      return;
    }
    while ( 1 )
    {
      v16 = *(_DWORD *)(v45 + 12) + 8 * v15;
      if ( *(_DWORD *)v16 == -1 || off_1061BE18[4 * (*(_DWORD *)v16 & 0xFFF) + 2] != *(_DWORD *)v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)v16 & 0xFFF) + 1];
      v18 = *(_DWORD *)(v17 + 416);
      v19 = *(unsigned __int16 *)(v16 + 6);
      v20 = *(_DWORD *)(v17 + 424);
      if ( v18 == -1 )
        goto LABEL_40;
      if ( off_1061BE18[4 * (*(_DWORD *)(v17 + 416) & 0xFFF) + 2] != v18 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(v17 + 416) & 0xFFF) + 1] )
      {
        break;
      }
LABEL_46:
      v15 = v19;
      v44 = v19;
      if ( v19 >= 0xFFFF )
        goto LABEL_47;
    }
    v15 = v44;
LABEL_40:
    if ( !v20 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 8))(v20) )
    {
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      v21 = v37 - *(float *)(v17 + 584);
      v22 = v21 * v21;
      v23 = v36 - *(float *)(v17 + 580);
      v24 = v22;
      v25 = v38 - *(float *)(v17 + 588);
      v26 = v23 * v23 + v24 + v25 * v25;
      if ( v41 < v26 )
      {
        v41 = v26;
        v39 = v15;
      }
    }
    goto LABEL_46;
  }
  v28 = *(_WORD *)(v45 + 24);
  if ( v28 != 0xFFFF )
  {
    while ( *(unsigned __int16 *)(v13 + 30) > v43 )
    {
      v29 = *(_DWORD *)(v45 + 12);
      v30 = 8 * v28;
      v42 = *(unsigned __int16 *)(v30 + v29 + 6);
      if ( *(_DWORD *)(v30 + v29) == -1
        || off_1061BE18[4 * (*(_DWORD *)(v30 + v29) & 0xFFF) + 2] != *(_DWORD *)(v30 + v29) >> 12 )
      {
        v31 = 0;
      }
      else
      {
        v31 = off_1061BE18[4 * (*(_DWORD *)(v30 + v29) & 0xFFF) + 1];
      }
      v32 = *(_DWORD *)(v31 + 424);
      v33 = *(_DWORD *)(v31 + 416);
      if ( (v33 == -1 || off_1061BE18[4 * (v33 & 0xFFF) + 2] != v33 >> 12 || !off_1061BE18[4 * (v33 & 0xFFF) + 1])
        && (!v32 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 8))(v32)) )
      {
        v34 = *(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v28);
        if ( v34 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v28) & 0xFFF) + 2] != v34 >> 12 )
          v35 = 0;
        else
          v35 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v45 + 12) + 8 * v28) & 0xFFF) + 1];
        sub_100E31F0(v35, 0.0, 1);
        sub_10399E70(v28);
        *(_WORD *)(v30 + *(_DWORD *)(v45 + 12) + 6) = *(_WORD *)(v45 + 28);
        *(_WORD *)(v45 + 28) = v28;
      }
      v28 = v42;
      if ( v42 >= 0xFFFF )
        break;
      v13 = v45;
    }
  }
}
