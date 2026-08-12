void __thiscall sub_10317B90(int this, float *a2, float *a3)
{
  unsigned int v4; // eax
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st3
  float v11; // edx
  float v12; // eax
  long double v13; // st7
  double v14; // st7
  double v15; // st7
  int v16; // eax
  double v17; // st7
  double v18; // st7
  int v19; // ecx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st4
  double v24; // st5
  double v25; // st2
  double v26; // st1
  double v27; // rtt
  double v28; // st1
  double v29; // st7
  double v30; // st3
  double v31; // rt2
  double v32; // st3
  double v33; // st3
  double v34; // rt2
  double v35; // st3
  double v36; // rtt
  double v37; // rt0
  double v38; // st3
  double v39; // st2
  double v40; // st6
  double v41; // st7
  double v42; // st2
  double v43; // st1
  double v44; // st3
  double v45; // rt0
  double v46; // st1
  double v47; // st6
  double v48; // rt1
  double v49; // st1
  double v50; // st7
  double v51; // st7
  float v52; // eax
  float v53; // ecx
  double v54; // st4
  double v55; // st3
  double v56; // st2
  double v57; // st4
  unsigned int v58; // eax
  double v59; // st7
  int v60; // eax
  double v61; // st7
  double v62; // st6
  int v63; // edi
  _DWORD *v64; // eax
  int v65; // ebx
  float v66; // [esp+1Ch] [ebp-60h]
  float v67; // [esp+1Ch] [ebp-60h]
  float v68; // [esp+1Ch] [ebp-60h]
  char v69[12]; // [esp+2Ch] [ebp-50h] BYREF
  float v70[3]; // [esp+38h] [ebp-44h] BYREF
  float v71[3]; // [esp+44h] [ebp-38h] BYREF
  float v72; // [esp+50h] [ebp-2Ch]
  float v73; // [esp+54h] [ebp-28h]
  float v74; // [esp+5Ch] [ebp-20h]
  float v75; // [esp+60h] [ebp-1Ch]
  float v76; // [esp+64h] [ebp-18h]
  float v77; // [esp+68h] [ebp-14h] BYREF
  float v78; // [esp+6Ch] [ebp-10h]
  float v79; // [esp+70h] [ebp-Ch]
  float v80; // [esp+74h] [ebp-8h]
  float v81; // [esp+78h] [ebp-4h]
  float v82; // [esp+84h] [ebp+8h]
  float v83; // [esp+84h] [ebp+8h]
  float v84; // [esp+88h] [ebp+Ch]

  if ( *(_BYTE *)(this + 224) != 1
    || (v4 = *(_DWORD *)(this + 4332), v4 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 1] )
  {
    (*(void (__thiscall **)(int, float *, float *, char *))(*(_DWORD *)this + 528))(this, v71, v70, v69);
    v11 = a2[1];
    v12 = a2[2];
    v74 = *a2;
    v75 = v11;
    v76 = v12;
    off_10689714();
    v81 = v75 * v71[1] + v74 * v71[0] + v76 * v71[2];
    v80 = sub_10265030(a3);
    v82 = (asin(v70[1] * v75 + v70[0] * v74 + v70[2] * v76) + *(float *)(this + 4272)) * 57.29578;
    v13 = asin(v81) * 57.29578 * 0.75;
    v84 = v13;
    if ( v13 <= 45.0 )
    {
      if ( v13 >= -30.0 )
      {
        v14 = 45.0;
      }
      else
      {
        v14 = 45.0;
        v84 = -30.0;
      }
    }
    else
    {
      v14 = 45.0;
      v84 = 45.0;
    }
    if ( v82 <= v14 )
    {
      if ( v82 < -45.0 )
        v82 = -45.0;
    }
    else
    {
      v82 = v14;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v15 = *(float *)(this + 704);
    sub_10424CA0(*(float *)(this + 704));
    v66 = v15;
    sub_10424C10(v84, v66);
    v16 = *(_DWORD *)(this + 252) >> 11;
    v72 = (v84 - *(float *)(this + 488) * 0.60000002 + v84 - *(float *)(this + 488) * 0.60000002) * 2.7777777;
    if ( (v16 & 1) != 0 )
      sub_100DAE60(this);
    v17 = *(float *)(this + 708);
    sub_10424CA0(*(float *)(this + 708));
    v67 = v17;
    v18 = v80;
    sub_10424C10(v80, v67);
    v19 = *(_DWORD *)(this + 252) >> 11;
    v73 = (v18 - *(float *)(this + 492) * 0.60000002 + v18 - *(float *)(this + 492) * 0.60000002) * 2.7777777;
    if ( (v19 & 1) != 0 )
      sub_100DAE60(this);
    v20 = *(float *)(this + 712);
    sub_10424CA0(*(float *)(this + 712));
    v68 = v20;
    sub_10424C10(v82, v68);
    v21 = v82 - *(float *)(this + 496) * 0.60000002;
    v22 = (v21 + v21) * 2.7777777;
    v7 = 300.0;
    v23 = -300.0;
    if ( v72 <= 300.0 )
    {
      if ( v72 >= -300.0 )
        v23 = v72;
      v24 = -300.0;
    }
    else
    {
      v24 = -300.0;
      v23 = 300.0;
    }
    v25 = v73;
    if ( v73 <= 120.0 )
    {
      v26 = -120.0;
      if ( v25 < -120.0 )
        v25 = -120.0;
    }
    else
    {
      v25 = 120.0;
      v26 = -120.0;
    }
    v27 = v26;
    v28 = v22;
    v29 = v27;
    if ( v28 <= 300.0 )
    {
      if ( v28 >= v24 )
        v24 = v28;
      v33 = v29;
      v6 = v25;
      v34 = v33;
      v35 = v24;
      v8 = v34;
      v36 = v35;
      v32 = 120.0;
      v7 = v36;
    }
    else
    {
      v30 = v29;
      v6 = v25;
      v31 = v30;
      v32 = 120.0;
      v8 = v31;
    }
    v37 = v32;
    v10 = v23;
    v9 = v37;
  }
  else
  {
    v5 = *(_DWORD *)dword_106B31E4;
    v72 = 0.0;
    v6 = 50.0;
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(v5 + 4))(dword_106B31E4, 50.0, 120.0);
    v7 = 0.0;
    v8 = -120.0;
    v9 = 120.0;
    v10 = (float)0.0;
  }
  v38 = (v10 - *(float *)(this + 4056)) * 10.0;
  v39 = v7;
  v40 = (v6 - *(float *)(this + 4060)) * 10.0;
  v41 = 10.0 * (v39 - *(float *)(this + 4064));
  v42 = 1000.0;
  v43 = -1000.0;
  if ( v38 <= 1000.0 )
  {
    if ( v38 >= -1000.0 )
      v43 = v38;
    v44 = -1000.0;
  }
  else
  {
    v44 = -1000.0;
    v43 = 1000.0;
  }
  v45 = v43;
  v46 = v40;
  v47 = v45;
  if ( v46 <= 1000.0 )
  {
    if ( v46 < v44 )
      v46 = v44;
  }
  else
  {
    v46 = 1000.0;
  }
  v48 = v46;
  v49 = v41;
  v50 = v48;
  if ( v49 > 1000.0 || (v42 = v49, v49 >= v44) )
    v44 = v42;
  *(float *)(this + 4056) = v47 * 0.1 + *(float *)(this + 4056);
  *(float *)(this + 4060) = v50 * 0.1 + *(float *)(this + 4060);
  v51 = v9;
  *(float *)(this + 4064) = v44 * 0.1 + *(float *)(this + 4064);
  v52 = *(float *)(this + 492);
  v53 = *(float *)(this + 496);
  v54 = *(float *)(this + 4056) * 0.1;
  v55 = *(float *)(this + 4060);
  v77 = *(float *)(this + 488);
  v78 = v52;
  v56 = *(float *)(this + 4064);
  v77 = v54 + v77;
  v57 = v55 * 0.1 + v52;
  v78 = v57;
  v79 = 0.1 * v56 + v53;
  if ( v57 <= v51 )
  {
    if ( v8 > v57 )
      v78 = v8;
  }
  else
  {
    v78 = v51;
  }
  if ( *(_BYTE *)(this + 224) == 1 )
  {
    v58 = *(_DWORD *)(this + 4332);
    if ( v58 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 2] != v58 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 1] )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -5.0,
              5.0);
      v60 = *(_DWORD *)(this + 252) >> 11;
      v77 = (v59 - *(float *)(this + 704)) * 0.1;
      if ( (v60 & 1) != 0 )
        sub_100DAE60(this);
      v79 = (((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               -5.0,
               5.0)
           - *(float *)(this + 712))
          * 0.1;
    }
  }
  sub_100D7260((float *)this, &v77);
  v61 = 30.0;
  if ( v78 <= 30.0 )
  {
    v61 = v78;
    v62 = -30.0;
    if ( v78 < -30.0 )
      v61 = -30.0;
  }
  else
  {
    v62 = -30.0;
  }
  v63 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v64 = *(_DWORD **)(this + 1100);
  if ( v64 && *v64 )
    v65 = *(_DWORD *)(this + 1100);
  else
    v65 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v63 + 104))(v63);
  v83 = 45.0 - (v61 - v62) * 90.0 * 0.016666668;
  sub_100C1460((_DWORD *)this, v65, "rudder", v83);
}
