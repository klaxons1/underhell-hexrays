void __thiscall sub_1035DFF0(int this, float a2)
{
  int v3; // ecx
  float v4; // edx
  float v5; // eax
  float *v6; // edi
  _DWORD *v7; // ecx
  float *v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  int v11; // ecx
  float *v12; // eax
  int v13; // edx
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st6
  double v23; // st6
  unsigned int v24; // eax
  _DWORD *v25; // ebx
  float *v26; // eax
  int v27; // eax
  int v28; // ecx
  double v29; // st6
  double v30; // st7
  float v31; // [esp+Ch] [ebp-D8h]
  float v32; // [esp+10h] [ebp-D4h]
  int v33[14]; // [esp+1Ch] [ebp-C8h] BYREF
  float v34[3]; // [esp+54h] [ebp-90h] BYREF
  int v35[3]; // [esp+60h] [ebp-84h] BYREF
  float v36[2]; // [esp+6Ch] [ebp-78h] BYREF
  float v37; // [esp+74h] [ebp-70h]
  _DWORD v38[4]; // [esp+78h] [ebp-6Ch] BYREF
  int v39; // [esp+88h] [ebp-5Ch] BYREF
  float v40; // [esp+8Ch] [ebp-58h]
  float v41; // [esp+90h] [ebp-54h]
  float v42; // [esp+94h] [ebp-50h]
  float v43; // [esp+98h] [ebp-4Ch]
  float v44; // [esp+9Ch] [ebp-48h]
  int v45; // [esp+A0h] [ebp-44h]
  int v46; // [esp+A4h] [ebp-40h]
  float v47; // [esp+A8h] [ebp-3Ch]
  float v48; // [esp+ACh] [ebp-38h]
  float v49; // [esp+B0h] [ebp-34h]
  int v50; // [esp+B4h] [ebp-30h]
  float v51; // [esp+B8h] [ebp-2Ch]
  float v52; // [esp+BCh] [ebp-28h]
  float v53; // [esp+C0h] [ebp-24h] BYREF
  float v54; // [esp+C4h] [ebp-20h]
  float v55; // [esp+C8h] [ebp-1Ch]
  int v56; // [esp+CCh] [ebp-18h] BYREF
  int v57; // [esp+D0h] [ebp-14h]
  int v58; // [esp+D4h] [ebp-10h]
  float v59; // [esp+D8h] [ebp-Ch]
  float v60; // [esp+DCh] [ebp-8h]
  float v61; // [esp+E0h] [ebp-4h]
  _DWORD *v62; // [esp+ECh] [ebp+8h]

  if ( a2 > 1.0 )
    a2 = 1.0;
  v3 = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 3680) = *(float *)(dword_106B31C8 + 12) + 5.0;
  if ( (v3 & 1) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 580);
  v5 = *(float *)(this + 584);
  v6 = (float *)(this + 580);
  v61 = *(float *)(this + 588);
  v7 = *(_DWORD **)(this + 2588);
  v59 = v4;
  v60 = v5;
  if ( sub_1007E040(v7) )
  {
    v8 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
    v9 = *(_DWORD **)(this + 2588);
    v59 = *v8;
    v60 = v8[1];
    v61 = v8[2];
    if ( !(unsigned __int8)sub_1007E020(v9) )
    {
      v10 = *(_DWORD **)(this + 2588);
      v40 = 32.0;
      v41 = 0.0;
      v39 = 33701899;
      v42 = 100.0;
      v44 = 0.0;
      v45 = 0;
      v43 = 12.0;
      LOBYTE(v46) = 0;
      sub_10083270(v10, (float *)&v39);
      v11 = *(_DWORD *)(this + 2588);
      if ( **(_DWORD **)(v11 + 36) )
      {
        v12 = (float *)sub_1007DFE0((_DWORD *)v11);
        v59 = *v12;
        v60 = v12[1];
        v61 = v12[2];
      }
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = *(_DWORD *)(this + 252) >> 11;
    v47 = v59 - *v6;
    v48 = v60 - *(float *)(this + 584);
    v49 = v61 - *(float *)(this + 588);
    if ( (v13 & 1) != 0 )
      sub_100DAE60(this);
    sub_10422220(this + 704, &v56);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v14 = v60 - *(float *)(this + 584);
    v15 = v14 * v14;
    v16 = v59 - *v6;
    v17 = v15;
    v18 = v61 - *(float *)(this + 588);
    v31 = v16 * v16 + v17 + v18 * v18;
    v19 = off_10689708(v31);
    v52 = v19;
    if ( v59 == *(float *)(this + 3684) && v60 == *(float *)(this + 3688) && v61 == *(float *)(this + 3692) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v20 = *(float *)(this + 3688) - *(float *)(this + 584);
      v21 = *(float *)(this + 3692) - *(float *)(this + 588);
      *(float *)(this + 3696) = *(float *)(this + 3684) - *v6;
      *(float *)(this + 3700) = v20;
      *(float *)(this + 3704) = v21;
      off_10689714();
      v19 = v52;
    }
    else
    {
      *(float *)(this + 3684) = v59;
      *(float *)(this + 3688) = v60;
      *(float *)(this + 3692) = v61;
    }
    v22 = 0.25;
    if ( v19 <= 256.0 )
      v22 = 1.0 - 0.00390625 * v19;
    *(float *)&v56 = *(float *)&v56 + (*(float *)(this + 3696) - *(float *)&v56) * v22;
    *(float *)&v57 = *(float *)&v57 + (*(float *)(this + 3700) - *(float *)&v57) * v22;
    *(float *)&v58 = v22 * (*(float *)(this + 3704) - *(float *)&v58) + *(float *)&v58;
    v23 = a2 * 220.0;
    v51 = v23;
    if ( v23 > v19 )
    {
      if ( !sub_1007E040(*(_DWORD **)(this + 2588)) || (unsigned __int8)sub_1007E020(*(_DWORD **)(this + 2588)) )
        *(_BYTE *)(this + 3644) = 1;
      else
        sub_100820C0(*(_DWORD *)(this + 2588));
    }
    v24 = *(_DWORD *)(this + 2888);
    if ( v24 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 2888) & 0xFFF) + 2] == v24 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 2888) & 0xFFF) + 1] )
    {
      memset(v33, 0, sizeof(v33));
      v62 = *(_DWORD **)(this + 2588);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v25 = *(_DWORD **)(this + 2600);
      v50 = sub_100209E0((_DWORD *)this);
      v26 = (float *)sub_1007DFE0(v62);
      sub_1007C550(v25, 2, (float *)(this + 580), v26, 33701899, v50, 100.0, 0, (float *)v33);
      if ( v33[0] < 0 )
      {
        v53 = v59;
        v54 = v60;
        v55 = v61;
        v27 = sub_1002A5B0((_DWORD *)this);
        sub_10070340(v27, this, &v53);
        v43 = -1.0;
        v44 = -1.0;
        *(float *)&v38[1] = v53;
        *(float *)&v38[3] = v55;
        v46 = dword_10672234;
        v28 = *(_DWORD *)(this + 2588);
        *(float *)&v38[2] = v54;
        v39 = -1;
        v40 = NAN;
        v41 = NAN;
        v42 = NAN;
        v38[0] = 4;
        v45 = 0;
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 20))(v28, v38, 0);
      }
    }
    off_10689714();
    if ( sub_1035D860(this, (float *)&v56, v51, (float *)v35) )
    {
      v56 = v35[0];
      v57 = v35[1];
      v58 = v35[2];
      off_10689714();
    }
    v53 = *(float *)&v56 * 220.0;
    v54 = *(float *)&v57 * 220.0;
    v55 = 220.0 * *(float *)&v58;
    sub_100DD660(this, &v53);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v32 = *(float *)(this + 480) * *(float *)(this + 480)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 484) * *(float *)(this + 484);
    if ( off_10689708(v32) > 0.0 && (unsigned __int8)sub_1007E020(*(_DWORD **)(this + 2588)) && v52 < 220.0 )
      sub_10039F40((int *)this, dword_106E7AD4);
    sub_10422540(&v56, v36);
    v37 = 0.0;
    sub_104222B0(v36, 0, v34, 0);
    v29 = 45.0;
    v30 = (v34[1] * v48 + v34[0] * v47 + v34[2] * v49) * 45.0;
    if ( v30 <= 45.0 && (v29 = -45.0, v30 >= -45.0) )
    {
      v37 = v30;
      sub_100E0EA0(this, v36);
    }
    else
    {
      v37 = v29;
      sub_100E0EA0(this, v36);
    }
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100DD660(this, &flt_106F1CA8);
  }
}
