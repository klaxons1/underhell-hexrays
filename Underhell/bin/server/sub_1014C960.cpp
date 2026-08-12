void __thiscall sub_1014C960(char *this, int a2, float *a3)
{
  int *v4; // ecx
  float *v5; // ecx
  float *v6; // ebx
  double v7; // st7
  bool v8; // zf
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st2
  int *v14; // ecx
  int *v15; // ecx
  double v16; // st5
  double v17; // st6
  double v18; // st2
  double v19; // st3
  double v20; // st2
  double v21; // rt0
  double v22; // st2
  double v23; // rt1
  double v24; // st2
  double v25; // rt2
  float *v26; // eax
  int v27; // ebx
  int *v28; // ecx
  int v29; // edx
  int *v30; // ecx
  int *v31; // ecx
  int *v32; // ecx
  int i; // ebx
  int j; // edi
  __int64 v35; // [esp-4h] [ebp-64h]
  float v36; // [esp+4h] [ebp-5Ch]
  float v37; // [esp+4h] [ebp-5Ch]
  _BYTE v38[12]; // [esp+14h] [ebp-4Ch] BYREF
  float v39; // [esp+20h] [ebp-40h] BYREF
  float v40; // [esp+24h] [ebp-3Ch]
  float v41; // [esp+28h] [ebp-38h]
  float v42; // [esp+2Ch] [ebp-34h] BYREF
  float v43; // [esp+30h] [ebp-30h]
  float v44; // [esp+34h] [ebp-2Ch]
  float v45; // [esp+38h] [ebp-28h] BYREF
  float v46; // [esp+3Ch] [ebp-24h]
  float v47; // [esp+40h] [ebp-20h]
  float v48; // [esp+44h] [ebp-1Ch]
  float v49; // [esp+48h] [ebp-18h]
  float v50; // [esp+4Ch] [ebp-14h]
  float v51; // [esp+50h] [ebp-10h]
  float v52; // [esp+54h] [ebp-Ch]
  float v53; // [esp+58h] [ebp-8h]
  int v54; // [esp+5Ch] [ebp-4h] BYREF
  int v55; // [esp+68h] [ebp+8h]
  int v56; // [esp+68h] [ebp+8h]
  float v57; // [esp+68h] [ebp+8h]
  float v58; // [esp+68h] [ebp+8h]
  int v59; // [esp+6Ch] [ebp+Ch]

  if ( !this[1016] )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_101BA7A0(
      this,
      *((_DWORD *)this + 106),
      *((_DWORD *)this + 145),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147));
    if ( this[1016] != 1 )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v4 = (int *)*((_DWORD *)this + 6);
        if ( v4 )
          sub_100194B0(v4, 1016);
      }
      this[1016] = 1;
    }
    if ( *((_DWORD *)this + 55) )
    {
      (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 464))(this, this + 220);
      *((_DWORD *)this + 55) = 0;
    }
    HIDWORD(v35) = this;
    if ( a2 )
      LODWORD(v35) = a2;
    else
      LODWORD(v35) = this;
    sub_1010DD80((_DWORD *)this + 218, v35, 0.0);
    *(float *)&v55 = -1.0;
    if ( a3[1] * a3[1] + *a3 * *a3 + a3[2] * a3[2] > 0.001 )
    {
      v5 = (float *)(this + 992);
      if ( a3[1] * *((float *)this + 249) + *((float *)this + 248) * *a3 + a3[2] * *((float *)this + 250) < 0.0 )
      {
        *((float *)this + 514) = *v5 + *((float *)this + 514);
        *((float *)this + 515) = *((float *)this + 249) + *((float *)this + 515);
        *((float *)this + 516) = *((float *)this + 516) + *((float *)this + 250);
        *((float *)this + 520) = *v5 + *((float *)this + 520);
        *((float *)this + 521) = *((float *)this + 521) + *((float *)this + 249);
        *((float *)this + 522) = *((float *)this + 250) + *((float *)this + 522);
        *((float *)this + 517) = *v5 + *((float *)this + 517);
        *((float *)this + 518) = *((float *)this + 249) + *((float *)this + 518);
        *((float *)this + 519) = *((float *)this + 519) + *((float *)this + 250);
        *((float *)this + 523) = *v5 + *((float *)this + 523);
        *((float *)this + 524) = *((float *)this + 524) + *((float *)this + 249);
        *((float *)this + 525) = *((float *)this + 250) + *((float *)this + 525);
        v45 = *v5 * -1.0;
        v46 = *((float *)this + 249) * -1.0;
        v47 = -1.0 * *((float *)this + 250);
        sub_1014B8B0(v5, &v45);
        *(float *)&v55 = 1.0;
      }
    }
    v6 = (float *)(this + 2056);
    v7 = *((float *)this + 514) - *((float *)this + 520);
    v8 = this[84] == 0;
    v48 = v7;
    v9 = *((float *)this + 515) - *((float *)this + 521);
    v49 = v9;
    v10 = *((float *)this + 516) - *((float *)this + 522);
    v50 = v10;
    v11 = *((float *)this + 514) - *((float *)this + 517);
    v51 = v11;
    v12 = *((float *)this + 515) - *((float *)this + 518);
    v52 = v12;
    v13 = *((float *)this + 516) - *((float *)this + 519);
    v53 = v13;
    if ( v8 )
    {
      v14 = (int *)*((_DWORD *)this + 6);
      if ( v14 )
      {
        sub_100194B0(v14, 992);
        v10 = v50;
        v7 = v48;
        v9 = v49;
        v12 = v52;
        v13 = v53;
        v11 = v51;
      }
    }
    else
    {
      this[88] |= 1u;
    }
    *((float *)this + 248) = v13 * v9 - v12 * v10;
    *((float *)this + 249) = v10 * v11 - v13 * v7;
    *((float *)this + 250) = v7 * v12 - v9 * v11;
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v15 = (int *)*((_DWORD *)this + 6);
      if ( v15 )
        sub_100194B0(v15, 992);
    }
    off_10689714();
    v45 = *((float *)this + 248) * -1.0;
    v46 = *((float *)this + 249) * -1.0;
    v47 = -1.0 * *((float *)this + 250);
    sub_10422540(&v45, v38);
    sub_104222B0(v38, 0, &v42, &v39);
    v16 = v48;
    v17 = v49;
    v18 = v44;
    v19 = v50;
    if ( fabs(v44 * v50 + v43 * v49 + v42 * v48) < 0.5 )
    {
      v45 = v51;
      v46 = v52;
      v47 = v53;
      v51 = v16 * *(float *)&v55;
      v52 = v17 * *(float *)&v55;
      v53 = v19 * *(float *)&v55;
      v20 = v45 * *(float *)&v55;
      v48 = v20;
      v21 = v20;
      v22 = v46 * *(float *)&v55;
      v49 = v22;
      v23 = v22;
      v24 = *(float *)&v55 * v47;
      v50 = v24;
      v25 = v24;
      v18 = v44;
      v17 = v23;
      v16 = v21;
      v19 = v25;
    }
    if ( v18 * v19 + v17 * v43 + v16 * v42 >= 0.0 )
    {
      v26 = (float *)(this + 2080);
      if ( v39 * v51 + v40 * v52 + v41 * v53 >= 0.0 )
        v26 = (float *)(this + 2092);
      sub_1014B920((float *)this + 251, v26);
    }
    else
    {
      if ( v39 * v51 + v40 * v52 + v41 * v53 >= 0.0 )
        v6 = (float *)(this + 2068);
      sub_1014B920((float *)this + 251, v6);
    }
    v36 = v49 * v49 + v48 * v48 + v50 * v50;
    *(float *)&v56 = off_10689708(v36);
    v37 = v51 * v51 + v52 * v52 + v53 * v53;
    *(float *)&v59 = off_10689708(v37);
    v27 = (int)(*(float *)&v56 * 0.083333336);
    if ( *((_DWORD *)this + 244) != v27 )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v28 = (int *)*((_DWORD *)this + 6);
        if ( v28 )
          sub_100194B0(v28, 976);
      }
      *((_DWORD *)this + 244) = v27;
    }
    v29 = (int)(*(float *)&v59 * 0.083333336);
    v54 = v29;
    if ( *((_DWORD *)this + 245) != v29 )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v30 = (int *)*((_DWORD *)this + 6);
        if ( v30 )
        {
          sub_100194B0(v30, 980);
          v29 = v54;
        }
      }
      *((_DWORD *)this + 245) = v29;
    }
    if ( *((int *)this + 244) > 16 )
    {
      v54 = 16;
      sub_1014BC10((_DWORD *)this + 244, &v54);
    }
    if ( *((int *)this + 245) > 16 )
    {
      v54 = 16;
      sub_10227600(&v54);
    }
    v57 = *(float *)&v56 / (double)*((int *)this + 244);
    if ( *((_DWORD *)this + 246) != LODWORD(v57) )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v31 = (int *)*((_DWORD *)this + 6);
        if ( v31 )
          sub_100194B0(v31, 984);
      }
      *((float *)this + 246) = v57;
    }
    v58 = *(float *)&v59 / (double)*((int *)this + 245);
    if ( *((_DWORD *)this + 247) != LODWORD(v58) )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v32 = (int *)*((_DWORD *)this + 6);
        if ( v32 )
          sub_100194B0(v32, 988);
      }
      *((float *)this + 247) = v58;
    }
    for ( i = 0; i < 16; ++i )
    {
      for ( j = 0; j < 16; ++j )
        sub_1014B7C0((int)this, i, j, 1.0);
    }
    sub_10148F20((int)this);
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 592))(this);
    sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 8);
    sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 4);
    *((_DWORD *)this + 49) = sub_1014C590;
  }
}
