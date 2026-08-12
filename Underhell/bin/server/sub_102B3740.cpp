void __thiscall sub_102B3740(int this)
{
  double v2; // st6
  double v3; // st4
  double v4; // rt0
  double v5; // st7
  float v6; // ecx
  float v7; // edx
  double v8; // st6
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st6
  int v14; // eax
  double v15; // st7
  double v16; // st5
  int v17; // ecx
  double v18; // st6
  double v19; // rt0
  double v20; // st7
  int v21; // edx
  double v22; // st0
  double v23; // st1
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st6
  unsigned int v28; // edx
  double v29; // st6
  double v30; // st4
  double v31; // st5
  double v32; // st7
  double v33; // st5
  float v34; // [esp+0h] [ebp-64h]
  float v35[3]; // [esp+8h] [ebp-5Ch] BYREF
  float v36; // [esp+14h] [ebp-50h] BYREF
  float v37; // [esp+18h] [ebp-4Ch]
  float v38; // [esp+1Ch] [ebp-48h]
  float v39; // [esp+20h] [ebp-44h] BYREF
  float v40; // [esp+24h] [ebp-40h]
  float v41; // [esp+28h] [ebp-3Ch]
  float v42; // [esp+2Ch] [ebp-38h]
  float v43; // [esp+30h] [ebp-34h]
  float v44; // [esp+34h] [ebp-30h]
  float v45; // [esp+38h] [ebp-2Ch] BYREF
  float v46; // [esp+3Ch] [ebp-28h]
  float v47; // [esp+40h] [ebp-24h]
  float v48; // [esp+44h] [ebp-20h] BYREF
  float v49; // [esp+48h] [ebp-1Ch]
  float v50; // [esp+4Ch] [ebp-18h]
  float v51; // [esp+50h] [ebp-14h] BYREF
  float v52; // [esp+54h] [ebp-10h]
  float v53; // [esp+58h] [ebp-Ch]
  float v54; // [esp+5Ch] [ebp-8h]
  float v55; // [esp+60h] [ebp-4h]

  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
    sub_101C73D0((unsigned int *)this, 0);
  if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2328))(this) > *(float *)(this + 3840) )
    *(float *)(this + 3840) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2280))(this)
                            + *(float *)(this + 3840);
  v2 = 2.0 * *(float *)(this + 496);
  v3 = *(float *)(this + 736);
  v4 = *(float *)(this + 492) * 2.0 + *(float *)(this + 732);
  v39 = *(float *)(this + 488) * 2.0 + *(float *)(this + 728) + 5.0;
  v40 = v4;
  v41 = v2 + v3;
  sub_104222B0(&v39, &v36, &v45, &v48);
  v5 = *(float *)(this + 3800) * v46;
  v6 = *(float *)(this + 488);
  v7 = *(float *)(this + 492);
  v8 = *(float *)(this + 3796) * v45;
  v53 = *(float *)(this + 496);
  v51 = v6;
  v52 = v7;
  if ( v5 + v8 + *(float *)(this + 3804) * v47 >= 0.0 )
  {
    v9 = v52;
    if ( v52 > -60.0 )
    {
      v10 = v9 - 8.0;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = v52;
    if ( v52 < 60.0 )
    {
      v10 = v9 + 8.0;
      goto LABEL_11;
    }
  }
  v10 = v9;
LABEL_11:
  v11 = v10 * 0.98;
  v52 = v11;
  v12 = v11 + *(float *)(this + 732);
  v13 = *(float *)(this + 736) + v53;
  v39 = *(float *)(this + 728) + v51 + 5.0;
  v40 = v12;
  v41 = v13;
  sub_104222B0(&v39, 0, 0, &v48);
  v14 = *(_DWORD *)(this + 252) >> 12;
  v15 = *(float *)(this + 3788) * v49;
  v16 = *(float *)(this + 3788) * v50;
  v39 = v48 * *(float *)(this + 3788) * 20.0;
  v40 = v15 * 20.0;
  v41 = v16 * 20.0;
  if ( (v14 & 1) != 0 )
    sub_100DAFD0(this);
  v17 = *(_DWORD *)(this + 252) >> 11;
  v42 = *(float *)(this + 476) * 2.0;
  v43 = *(float *)(this + 480) * 2.0;
  v44 = 2.0 * *(float *)(this + 484);
  if ( (v17 & 1) != 0 )
    sub_100DAE60(this);
  v18 = *(float *)(this + 584) + v43;
  v19 = *(float *)(this + 588) + v44;
  v42 = v42 + *(float *)(this + 580) + v39;
  v43 = v18 + v40;
  v44 = v19 + v41 - 768.0;
  v39 = *(float *)(this + 728) + 5.0;
  v40 = *(float *)(this + 732);
  v41 = *(float *)(this + 736);
  sub_104222B0(&v39, &v36, &v45, &v48);
  v35[0] = v48 * *(float *)(this + 3788);
  v35[1] = v49 * *(float *)(this + 3788);
  v35[2] = v50 * *(float *)(this + 3788) - 38.4;
  sub_100EA150(this, v35);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v34 = *(float *)(this + 480) * *(float *)(this + 480)
      + *(float *)(this + 476) * *(float *)(this + 476)
      + *(float *)(this + 484) * *(float *)(this + 484);
  v20 = off_10689708(v34);
  v21 = *(_DWORD *)(this + 252);
  v55 = v20;
  if ( (v21 & 0x1000) != 0 )
    sub_100DAFD0(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  if ( *(float *)(this + 476) * v36 + *(float *)(this + 480) * v37 < 0.0 )
    v55 = -v55;
  v22 = *(float *)(this + 3624) - v43;
  v23 = *(float *)(this + 3620) - v42;
  v24 = *(float *)(this + 3628) - v44;
  v54 = v24 * v38 + v36 * v23 + v37 * v22;
  if ( -(v23 * v45 + v22 * v46 + v24 * v47) <= 0.0 )
  {
    v27 = v53;
    if ( *(float *)(this + 736) >= 30.0 || v27 >= 15.0 )
      v26 = v27 - 2.0;
    else
      v26 = v27 + 4.0;
  }
  else
  {
    v25 = v53;
    if ( *(float *)(this + 736) <= -30.0 || v25 <= -15.0 )
      v26 = v25 + 2.0;
    else
      v26 = v25 - 4.0;
  }
  v28 = *(_DWORD *)this;
  v53 = v26;
  (*(void (__thiscall **)(int, float *))(v28 + 2284))(this, &v45);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2288))(this);
  if ( *(float *)(this + 3788) < 80.0 && *(float *)(this + 3628) > (double)v44 )
  {
    v29 = *(float *)(this + 3788) + 12.0;
LABEL_38:
    *(float *)(this + 3788) = v29;
    goto LABEL_39;
  }
  if ( *(float *)(this + 3788) > 30.0 && *(float *)(this + 3628) < (double)v44 )
  {
    v29 = *(float *)(this + 3788) - 8.0;
    goto LABEL_38;
  }
LABEL_39:
  v30 = v51;
  if ( v54 <= 0.0 || *(float *)(this + 3840) <= (double)v55 || *(float *)(this + 728) + v30 >= 40.0 )
  {
    v31 = v51;
    if ( v54 >= 0.0 || v55 <= -50.0 || *(float *)(this + 728) + v31 <= -20.0 )
    {
      v32 = v51;
      v33 = *(float *)(this + 728) + v31;
      if ( v33 >= 0.0 )
      {
        if ( v33 > 0.0 )
          v51 = v32 - 4.0;
        sub_100D7260((float *)this, &v51);
      }
      else
      {
        v51 = v32 + 4.0;
        sub_100D7260((float *)this, &v51);
      }
    }
    else
    {
      v51 = v31 - 12.0;
      sub_100D7260((float *)this, &v51);
    }
  }
  else
  {
    v51 = v30 + 12.0;
    sub_100D7260((float *)this, &v51);
  }
}
