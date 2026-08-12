void __thiscall sub_103EA460(float *this, float *a2, int a3, float a4)
{
  double v5; // st4
  double v6; // rt1
  double v7; // st4
  double v8; // st5
  double v9; // rt2
  double v10; // st4
  double v11; // st2
  double v12; // st0
  double v13; // st1
  double v14; // st3
  double v15; // rt1
  double v16; // st2
  double v17; // st5
  double v18; // rt1
  double v19; // st5
  double v20; // rt2
  double v21; // st5
  double v22; // st6
  double v23; // st5
  double v24; // st2
  double v25; // st1
  double v26; // rt0
  double v27; // st3
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st4
  double v32; // st7
  double v33; // rt0
  double v34; // st6
  double v35; // st3
  double v36; // st7
  double v37; // st6
  float v38; // [esp+0h] [ebp-48h]
  float v39; // [esp+Ch] [ebp-3Ch]
  float v40; // [esp+10h] [ebp-38h]
  float v41; // [esp+14h] [ebp-34h]
  float v42; // [esp+18h] [ebp-30h]
  float v43; // [esp+1Ch] [ebp-2Ch]
  float v44; // [esp+20h] [ebp-28h]
  float v45; // [esp+24h] [ebp-24h] BYREF
  float v46; // [esp+28h] [ebp-20h]
  float v47; // [esp+2Ch] [ebp-1Ch]
  float v48; // [esp+30h] [ebp-18h]
  float v49; // [esp+34h] [ebp-14h]
  float v50; // [esp+38h] [ebp-10h]
  float v51; // [esp+3Ch] [ebp-Ch]
  float v52; // [esp+40h] [ebp-8h]
  float v53; // [esp+44h] [ebp-4h]

  sub_10422220(a3, &v45);
  v5 = a4 * this[455] + this[449];
  v39 = v5;
  v6 = v5;
  v7 = this[456] * a4 + this[450];
  v8 = v6;
  v40 = v7;
  v9 = v7;
  v10 = this[457] * a4 + this[451];
  v41 = v10;
  v11 = a2[1] - this[453];
  v12 = 1.0 / a4;
  v13 = (*a2 - this[452]) * v12;
  v14 = a2[2] - this[454];
  v48 = v13;
  v49 = v11 * v12;
  v15 = v11 * v12;
  v16 = v12 * v14;
  v50 = v16;
  this[452] = *a2;
  this[453] = a2[1];
  this[454] = a2[2];
  v42 = v13 - this[455];
  v43 = v15 - this[456];
  v44 = v16 - this[457];
  v17 = *a2 - v8;
  v51 = v17;
  v18 = v17;
  v19 = a2[1] - v9;
  v52 = v19;
  v20 = v19;
  v21 = a2[2] - v10;
  v53 = v21;
  v38 = v21 * v21 + v18 * v18 + v20 * v20;
  if ( off_10689708(v38) <= 12.0 )
  {
    v28 = 9.0 * *(float *)(dword_106B7584 + 44) * *(float *)(dword_106B7584 + 44);
    v29 = *(float *)(dword_106B7584 + 44) * 4.5 * *(float *)(dword_106B75CC + 44);
    v30 = 1.0 / (v29 * a4 + 1.0 + v28 * a4 * a4);
    v31 = (v29 + v28 * a4) * v30;
    v32 = v28 * v30;
    v33 = (v43 * v31 + v52 * v32) * a4;
    v34 = a4 * (v31 * v44 + v32 * v53);
    this[455] = (v42 * v31 + v32 * v51) * a4 + this[455];
    this[456] = v33 + this[456];
    this[457] = v34 + this[457];
    this[449] = v39;
    this[450] = v40;
    this[451] = v41;
    v35 = v51 * v45 + v52 * v46 + v53 * v47;
    v36 = v46 * v35;
    v37 = v35 * v47;
    *a2 = *a2 - v45 * v35;
    a2[1] = a2[1] - v36;
    a2[2] = a2[2] - v37;
  }
  else
  {
    v22 = v46;
    v23 = v48;
    v24 = v47;
    if ( v47 * v50 + v45 * v48 + v49 * v46 < 0.0 )
      v25 = 1.0;
    else
      v25 = -1.0;
    v26 = v50;
    v27 = v45 * 12.0 * v25 + *a2;
    *a2 = v27;
    a2[1] = v22 * 12.0 * v25 + a2[1];
    a2[2] = v25 * (12.0 * v24) + a2[2];
    this[449] = v27;
    this[450] = a2[1];
    this[451] = a2[2];
    this[455] = v23;
    this[456] = v49;
    this[457] = v26;
  }
}
