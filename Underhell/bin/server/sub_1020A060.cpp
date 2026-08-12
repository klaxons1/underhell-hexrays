void __thiscall sub_1020A060(int this, int a2)
{
  int v3; // eax
  float v4; // ecx
  float v5; // edx
  int v6; // eax
  int v7; // ebx
  double v9; // st7
  double v10; // st7
  double v11; // st7
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  char *v19; // eax
  long double v20; // st7
  double v21; // st6
  long double v22; // st4
  long double v23; // st5
  long double v24; // st7
  long double v25; // st4
  long double v26; // st3
  unsigned int v27; // ecx
  int *v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // ebx
  int v36; // edi
  int v37; // eax
  int v38; // [esp-8h] [ebp-70h]
  float v39; // [esp+0h] [ebp-68h]
  int v40[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v41[3]; // [esp+28h] [ebp-40h] BYREF
  int v42; // [esp+34h] [ebp-34h] BYREF
  float v43; // [esp+38h] [ebp-30h]
  float v44; // [esp+3Ch] [ebp-2Ch]
  float v45; // [esp+40h] [ebp-28h] BYREF
  float v46; // [esp+44h] [ebp-24h]
  float v47; // [esp+48h] [ebp-20h]
  float v48; // [esp+4Ch] [ebp-1Ch] BYREF
  float v49; // [esp+50h] [ebp-18h]
  float v50; // [esp+54h] [ebp-14h]
  int v51; // [esp+58h] [ebp-10h] BYREF
  float v52; // [esp+5Ch] [ebp-Ch]
  float v53; // [esp+60h] [ebp-8h]
  int v54; // [esp+64h] [ebp-4h]
  int v55; // [esp+70h] [ebp+8h]
  int v56; // [esp+70h] [ebp+8h]

  v3 = *(int *)(this + 1968);
  v4 = *(float *)(this + 1972);
  v5 = *(float *)(this + 1976);
  v51 = v3;
  v6 = *(_DWORD *)(this + 1940);
  v7 = 0;
  v52 = v4;
  v53 = v5;
  v54 = 0;
  if ( v6 == 1 )
  {
    v9 = *(float *)(this + 1968);
    v54 = 0;
    *(float *)&v51 = v9;
    v52 = *(float *)(this + 1972);
    v53 = *(float *)(this + 1976);
LABEL_26:
    v48 = *(float *)(this + 2004);
    v49 = *(float *)(this + 2008);
    v50 = *(float *)(this + 2012);
    v45 = *(float *)(this + 2016);
    v46 = *(float *)(this + 2020);
    v11 = *(float *)(this + 2024);
    goto LABEL_6;
  }
  if ( v6 == 2 )
  {
    v10 = *(float *)(this + 1980);
    v54 = 1;
    *(float *)&v51 = v10;
    v52 = *(float *)(this + 1984);
    v53 = *(float *)(this + 1988);
  }
  else
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v42, 0, 0);
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      *(float *)&v55 = *(float *)(a2 + 584) * v43 + *(float *)(a2 + 580) * *(float *)&v42 + *(float *)(a2 + 588) * v44;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( *(float *)(this + 584) * v43 + *(float *)(this + 580) * *(float *)&v42 + *(float *)(this + 588) * v44 < *(float *)&v55 )
      {
        v16 = *(float *)(this + 1980);
        v54 = 1;
        v7 = 1;
        *(float *)&v51 = v16;
        v52 = *(float *)(this + 1984);
        v53 = *(float *)(this + 1988);
      }
    }
    if ( sub_10207370((_DWORD *)this)
      && a2
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
      && !(unsigned __int8)sub_10209DD0(v7) )
    {
      if ( v7 )
      {
        v18 = *(float *)(this + 1968);
        v54 = 0;
        *(float *)&v51 = v18;
        v52 = *(float *)(this + 1972);
        v53 = *(float *)(this + 1976);
        goto LABEL_26;
      }
      v17 = *(float *)(this + 1980);
      v54 = 1;
      *(float *)&v51 = v17;
      v52 = *(float *)(this + 1984);
      v53 = *(float *)(this + 1988);
    }
    else if ( !v7 )
    {
      goto LABEL_26;
    }
  }
  v48 = *(float *)(this + 2028);
  v49 = *(float *)(this + 2032);
  v50 = *(float *)(this + 2036);
  v45 = *(float *)(this + 2040);
  v46 = *(float *)(this + 2044);
  v11 = *(float *)(this + 2048);
LABEL_6:
  v12 = *(_DWORD *)(this + 2052);
  v47 = v11;
  if ( v12 != -1 )
  {
    v13 = &off_1061BE18[4 * (v12 & 0xFFF) + 1];
    v14 = v12 >> 12;
    if ( v13[1] == v14 )
    {
      if ( *v13 )
      {
        if ( v13[1] == v14 )
          v15 = *v13;
        else
          v15 = 0;
        sub_1025FAC0(v15);
      }
    }
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v19 = sub_10129A00((float *)(this + 580), (int)&v48, (int)&v45, a2, 0);
  if ( v19 )
    *(_DWORD *)(this + 2052) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v19 + 8))(v19);
  else
    *(_DWORD *)(this + 2052) = -1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v20 = v45;
  v21 = 0.5;
  *(float *)v41 = (v45 + v48) * 0.5 + *(float *)(this + 580);
  *(float *)&v41[1] = (v49 + v46) * 0.5 + *(float *)(this + 584);
  *(float *)&v41[2] = (v47 + v50) * 0.5 + *(float *)(this + 588);
  v22 = fabs(v48);
  if ( v22 > v45 )
    v20 = v22;
  v23 = v20;
  v24 = v46;
  *(float *)&v56 = v23;
  v25 = fabs(v49);
  if ( v25 <= v46 )
    v26 = v46;
  else
    v26 = v25;
  if ( v26 < v23 )
  {
    v24 = v23;
  }
  else
  {
    if ( v25 > v24 )
      v24 = v25;
    *(float *)&v56 = v24;
  }
  if ( *(_DWORD *)(dword_106C1BB4 + 48) )
  {
    *(float *)&v42 = v24;
    v43 = v24;
    v44 = v24;
    *(float *)v40 = -v24;
    v40[1] = v40[0];
    v40[2] = v40[0];
    sub_1011C000((float *)v41, (float *)v40, (float *)&v42, 255, 0, 0, 1, 1.0);
    v24 = *(float *)&v56;
    v21 = 0.5;
  }
  if ( (*(_DWORD *)(this + 248) & 0x4000) == 0 )
  {
    v39 = v21;
    sub_1023D4B0(4096, (int)v41, (int)v24, v39, a2, 0, 0);
  }
  v27 = *(_DWORD *)(this + 2052);
  if ( v27 != -1 )
  {
    v28 = &off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
    v29 = v27 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] == v29 )
    {
      if ( *v28 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] == v29 )
          v30 = *v28;
        else
          v30 = 0;
        sub_100EBE30(v30, 14);
        if ( !(unsigned __int8)sub_10209DD0(v54) )
        {
          v31 = *(_DWORD *)(this + 2052);
          if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != v31 >> 12 )
            v32 = 0;
          else
            v32 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          sub_101129A0((unsigned __int16 *)(v32 + 320), *(_WORD *)(v32 + 356) | 4);
        }
        if ( *(_DWORD *)(dword_106C1BB4 + 48) )
        {
          v33 = *(_DWORD *)(this + 2052);
          if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != *(_DWORD *)(this + 2052) >> 12 )
            v34 = 0;
          else
            v34 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          v35 = v34 + 320;
          if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != v33 >> 12 )
            v36 = 0;
          else
            v36 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v37 = (*(int (__thiscall **)(int))(*(_DWORD *)(v36 + 320) + 4))(v36 + 320);
          sub_1011BB20(this + 580, v37, v38, 255, 0, 0, 1, 1.0);
        }
      }
    }
  }
  sub_102087C0((float *)this, (float *)&v51, *(float *)(this + 108));
}
