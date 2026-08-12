void __thiscall sub_1006FD50(float *this, float *a2, int a3, float a4)
{
  double v5; // st6
  double v6; // st5
  float v7; // edx
  double v8; // st4
  double v9; // st5
  double v10; // st3
  double v11; // st4
  double v12; // st6
  double v13; // rtt
  double v14; // st5
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st4
  double v21; // st6
  double v22; // rtt
  double v23; // st4
  double v24; // st6
  double v25; // st7
  double v26; // st7
  double v27; // st6
  double v28; // st5
  double v29; // st4
  double v30; // st7
  double v31; // rt1
  double v32; // st6
  double v33; // st3
  double v34; // st7
  double v35; // st6
  float v36; // [esp+8h] [ebp-48h]
  float v37; // [esp+8h] [ebp-48h]
  float v38; // [esp+8h] [ebp-48h]
  float v39; // [esp+14h] [ebp-3Ch] BYREF
  float v40; // [esp+18h] [ebp-38h]
  float v41; // [esp+1Ch] [ebp-34h]
  float v42; // [esp+20h] [ebp-30h]
  float v43; // [esp+24h] [ebp-2Ch]
  float v44; // [esp+28h] [ebp-28h]
  float v45; // [esp+2Ch] [ebp-24h]
  float v46; // [esp+30h] [ebp-20h]
  float v47; // [esp+34h] [ebp-1Ch]
  float v48; // [esp+38h] [ebp-18h]
  float v49; // [esp+3Ch] [ebp-14h]
  float v50; // [esp+40h] [ebp-10h]
  float v51; // [esp+44h] [ebp-Ch]
  int v52; // [esp+48h] [ebp-8h] BYREF
  float v53; // [esp+4Ch] [ebp-4h]

  v5 = a4 * this[564];
  v6 = this[565] * a4;
  v7 = this[566];
  v36 = this[565];
  v48 = this[564];
  v8 = v5 + this[558];
  v49 = v36;
  v50 = v7;
  v42 = v8;
  v43 = v6 + this[559];
  v44 = v7 * a4 + this[560];
  v9 = a2[1] - this[562];
  v10 = 1.0 / a4;
  v11 = (*a2 - this[561]) * v10;
  v12 = a2[2] - this[563];
  v51 = v11;
  *(float *)&v52 = v9 * v10;
  v13 = v9 * v10;
  v14 = v10 * v12;
  v53 = v14;
  this[561] = *a2;
  this[562] = a2[1];
  this[563] = a2[2];
  v37 = v11 * v11 + v13 * v13 + v14 * v14;
  if ( 0.0 != off_103EDFE0(v37) )
  {
    v45 = v51 - v48;
    v46 = *(float *)&v52 - v49;
    v47 = v53 - v50;
    v48 = *a2 - v42;
    v49 = a2[1] - v43;
    v50 = a2[2] - v44;
    sub_101EDFB0(a3, &v39);
    v38 = v49 * v49 + v48 * v48 + v50 * v50;
    v15 = off_103EDFE0(v38);
    if ( v15 <= 12.0 )
    {
      v26 = 9.0 * *(float *)(dword_10434CBC + 44) * *(float *)(dword_10434CBC + 44);
      v27 = *(float *)(dword_10434CBC + 44) * 4.5 * *(float *)(dword_10434D04 + 44);
      v28 = 1.0 / (v27 * a4 + 1.0 + v26 * a4 * a4);
      v29 = (v27 + v26 * a4) * v28;
      v30 = v26 * v28;
      v31 = (v46 * v29 + v49 * v30) * a4;
      v32 = a4 * (v29 * v47 + v30 * v50);
      this[564] = (v45 * v29 + v30 * v48) * a4 + this[564];
      this[565] = v31 + this[565];
      this[566] = v32 + this[566];
      this[558] = v42;
      this[559] = v43;
      this[560] = v44;
      v33 = v49 * v40 + v48 * v39 + v50 * v41;
      v34 = v40 * v33;
      v35 = v33 * v41;
      *a2 = *a2 - v39 * v33;
      a2[1] = a2[1] - v34;
      a2[2] = a2[2] - v35;
    }
    else if ( v15 - 12.0 <= 40.0 )
    {
      v16 = 12.0 / v15;
      v17 = v48 * v16;
      v48 = v17;
      v18 = v49 * v16;
      v49 = v18;
      v19 = v50 * v16;
      v50 = v19;
      v20 = v19 * v41 + v17 * v39 + v18 * v40;
      v21 = v40 * v20;
      v22 = v20 * v41;
      v23 = *a2 - v39 * v20;
      *a2 = v23;
      a2[1] = a2[1] - v21;
      a2[2] = a2[2] - v22;
      this[558] = v23;
      this[559] = a2[1];
      this[560] = a2[2];
      v45 = v45 * v16;
      v46 = v46 * v16;
      v47 = v16 * v47;
      sub_1019CC50((int)&v52, *(float *)(dword_10434CBC + 44), *(float *)(dword_10434D04 + 44), a4);
      v24 = (v53 * v47 + *(float *)&v52 * v50) * a4;
      v25 = (v46 * v53 + v49 * *(float *)&v52) * a4;
      this[564] = (v45 * v53 + v48 * *(float *)&v52) * a4 + this[564];
      this[565] = v25 + this[565];
      this[566] = v24 + this[566];
    }
    else
    {
      this[558] = *a2;
      this[559] = a2[1];
      this[560] = a2[2];
      this[564] = v51;
      this[565] = *(float *)&v52;
      this[566] = v53;
    }
  }
}
