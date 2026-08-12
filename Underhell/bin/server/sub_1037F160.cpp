void __thiscall sub_1037F160(int this, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st2
  double v10; // st4
  double v11; // st5
  double v12; // st4
  double v13; // st2
  double v14; // st4
  double v15; // st2
  double v16; // st1
  double v17; // rt0
  double v18; // st2
  double v19; // st6
  double v20; // st3
  double v21; // st5
  double v22; // rt2
  double v23; // st3
  double v24; // st6
  double v25; // st7
  int v26; // edi
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // ebx
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // ebx
  int v33; // edi
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // ebx
  int v37; // eax
  double (__thiscall *v38)(int, float *); // edx
  int v39; // eax
  float *v40; // ecx
  long double v41; // st7
  float v42; // eax
  float v43; // edx
  float v44; // [esp+4h] [ebp-34h]
  float v45; // [esp+18h] [ebp-20h]
  float v46[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v47[3]; // [esp+28h] [ebp-10h] BYREF
  float v48; // [esp+34h] [ebp-4h]

  v5 = 1.0;
  if ( *(_DWORD *)(this + 2380) == 6 )
  {
    v7 = 0.5;
    v8 = 0.5 * (a5 * 0.0066666668);
  }
  else
  {
    v7 = 1.0;
    v8 = a5 * 0.0020000001;
  }
  v9 = a2;
  if ( a2 <= 0.0 )
  {
    if ( v9 >= 0.0 )
    {
      v11 = 0.0;
    }
    else
    {
      v12 = v7 - v9 / flt_10675178 * v7;
      v11 = 0.0;
      v8 = v8 * v12;
    }
  }
  else
  {
    v10 = v7 + v9 / flt_1067516C * v7;
    v11 = 0.0;
    v8 = v8 * v10;
  }
  v13 = a4;
  v14 = 90.0;
  if ( a4 <= v11 )
  {
    if ( v13 >= v11 )
      v15 = v11;
    else
      v15 = v13 / flt_10675180 * 90.0;
  }
  else
  {
    v15 = v13 / flt_10675174 * -90.0;
  }
  v16 = a3;
  if ( a3 <= v11 )
  {
    if ( v16 >= v11 )
    {
      v45 = v11;
    }
    else
    {
      v45 = v16 * -25.0 / flt_1067517C;
      v11 = a3 / flt_1067517C;
    }
  }
  else
  {
    v45 = v16 * 25.0 / flt_10675170;
    v11 = v16 * -1.0 / flt_10675170;
  }
  v17 = v15;
  v18 = v8;
  v19 = v17;
  if ( v18 <= 1.0 )
  {
    v5 = v18;
    if ( v18 < 0.25 )
      v5 = 0.25;
  }
  v20 = v11;
  v21 = -90.0;
  if ( v20 <= 90.0 )
  {
    if ( v20 < -90.0 )
      v20 = -90.0;
  }
  else
  {
    v20 = 90.0;
  }
  v22 = v20;
  v23 = v19;
  v24 = v22;
  if ( v23 > 90.0 || (v14 = v23, v23 >= -90.0) )
    v21 = v14;
  *(float *)(this + 3648) = v24 * 0.2 + *(float *)(this + 3648) * 0.80000001;
  *(float *)(this + 3652) = *(float *)(this + 3652) * 0.80000001 + v21 * 0.2;
  v25 = v5 * 0.2 + 0.80000001 * *(float *)(this + 3644);
  *(float *)(this + 3644) = v25;
  v26 = dword_10700AC8;
  v27 = *(_DWORD *)dword_10700AC8;
  v48 = v25;
  (*(void (__thiscall **)(int))(v27 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v28 = *(_DWORD **)(this + 1100);
  if ( v28 && *v28 )
    v29 = *(_DWORD *)(this + 1100);
  else
    v29 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
  sub_100BE7D0((_DWORD *)this, v29, 0, v48);
  v30 = dword_10700AC8;
  v31 = *(_DWORD *)dword_10700AC8;
  v48 = *(float *)(this + 3648);
  (*(void (__thiscall **)(int))(v31 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v32 = *(_DWORD **)(this + 1100);
  if ( !v32 || !*v32 )
    v32 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 104))(v30);
  sub_100BE7D0((_DWORD *)this, (int)v32, 1, v48);
  v33 = dword_10700AC8;
  v34 = *(_DWORD *)dword_10700AC8;
  v48 = *(float *)(this + 3652);
  (*(void (__thiscall **)(int))(v34 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v35 = *(_DWORD **)(this + 1100);
  if ( v35 && *v35 )
    v36 = *(_DWORD *)(this + 1100);
  else
    v36 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 104))(v33);
  sub_100BE7D0((_DWORD *)this, v36, 2, v48);
  v37 = *(_DWORD *)(this + 2372);
  if ( v37 == 11 || v37 == 6 )
    sub_100C2AB0(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v38 = *(double (__thiscall **)(int, float *))(*(_DWORD *)this + 1696);
  v46[0] = *(float *)(this + 476) + *(float *)(this + 580);
  v46[1] = *(float *)(this + 480) + *(float *)(this + 584);
  v46[2] = *(float *)(this + 484) + *(float *)(this + 588);
  v39 = (int)(v38(this, v46) * 182.04445);
  v40 = *(float **)(this + 2604);
  LODWORD(v48) = (unsigned __int16)v39;
  v44 = (double)(unsigned __int16)v39 * 0.0054931641;
  sub_10078210(v40, v44, -2.0);
  v41 = 0.0;
  if ( a5 != 0.0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v41 = -(asin(*(float *)(this + 484) / a5) * 57.29578);
  }
  v42 = *(float *)(this + 736);
  v43 = *(float *)(this + 732);
  v47[0] = *(float *)(this + 728);
  v47[1] = v43;
  v47[0] = v47[0] * 0.80000001 + v41 * 0.2;
  v47[2] = v45 * 0.1 + v42 * 0.89999998;
  sub_100E11A0(this, v47);
}
