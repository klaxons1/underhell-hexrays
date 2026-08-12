void __thiscall sub_1019CFB0(float *this, float *a2, int a3, float a4)
{
  double v5; // st5
  double v6; // st3
  double v7; // st4
  double v8; // st6
  double v9; // rtt
  double v10; // st5
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st4
  double v17; // st6
  double v18; // rtt
  double v19; // st4
  double v20; // st6
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st4
  double v26; // st7
  double v27; // st3
  float v28; // [esp+8h] [ebp-48h]
  float v29; // [esp+8h] [ebp-48h]
  float v30; // [esp+14h] [ebp-3Ch]
  float v31; // [esp+18h] [ebp-38h]
  float v32; // [esp+1Ch] [ebp-34h]
  float v33; // [esp+20h] [ebp-30h]
  float v34; // [esp+24h] [ebp-2Ch]
  float v35; // [esp+28h] [ebp-28h]
  float v36; // [esp+2Ch] [ebp-24h]
  float v37; // [esp+2Ch] [ebp-24h]
  float v38; // [esp+30h] [ebp-20h]
  float v39; // [esp+30h] [ebp-20h]
  float v40; // [esp+34h] [ebp-1Ch]
  float v41; // [esp+34h] [ebp-1Ch]
  float v42; // [esp+38h] [ebp-18h]
  float v43; // [esp+38h] [ebp-18h]
  float v44; // [esp+38h] [ebp-18h]
  float v45; // [esp+3Ch] [ebp-14h]
  float v46; // [esp+3Ch] [ebp-14h]
  float v47; // [esp+3Ch] [ebp-14h]
  float v48; // [esp+40h] [ebp-10h]
  float v49; // [esp+40h] [ebp-10h]
  float v50; // [esp+40h] [ebp-10h]
  float v51; // [esp+44h] [ebp-Ch]
  int v52; // [esp+48h] [ebp-8h] BYREF
  float v53; // [esp+4Ch] [ebp-4h]

  v42 = this[564];
  v45 = this[565];
  v48 = this[566];
  v33 = a4 * v42 + this[558];
  v34 = v45 * a4 + this[559];
  v35 = v48 * a4 + this[560];
  v5 = a2[1] - this[562];
  v6 = 1.0 / a4;
  v7 = (*a2 - this[561]) * v6;
  v8 = a2[2] - this[563];
  v51 = v7;
  *(float *)&v52 = v5 * v6;
  v9 = v5 * v6;
  v10 = v6 * v8;
  v53 = v10;
  this[561] = *a2;
  this[562] = a2[1];
  this[563] = a2[2];
  v28 = v7 * v7 + v9 * v9 + v10 * v10;
  if ( 0.0 != off_103EDFE0(v28) )
  {
    v36 = v51 - v42;
    v38 = *(float *)&v52 - v45;
    v40 = v53 - v48;
    v43 = *a2 - v33;
    v46 = a2[1] - v34;
    v49 = a2[2] - v35;
    sub_101EDFB0(a3);
    v29 = v46 * v46 + v43 * v43 + v49 * v49;
    v11 = off_103EDFE0(v29);
    if ( v11 <= 12.0 )
    {
      v22 = 9.0 * *(float *)(dword_10434D94 + 44) * *(float *)(dword_10434D94 + 44);
      v23 = *(float *)(dword_10434D94 + 44) * 4.5 * *(float *)(dword_10434DDC + 44);
      v24 = 1.0 / (v23 * a4 + 1.0 + v22 * a4 * a4);
      v25 = (v23 + v22 * a4) * v24;
      v26 = v22 * v24;
      this[564] = (v36 * v25 + v26 * v43) * a4 + this[564];
      this[565] = (v38 * v25 + v46 * v26) * a4 + this[565];
      this[566] = a4 * (v25 * v40 + v26 * v49) + this[566];
      this[558] = v33;
      this[559] = v34;
      this[560] = v35;
      v27 = v46 * v31 + v43 * v30 + v49 * v32;
      *a2 = *a2 - v30 * v27;
      a2[1] = a2[1] - v31 * v27;
      a2[2] = a2[2] - v27 * v32;
    }
    else if ( v11 - 12.0 <= 40.0 )
    {
      v12 = 12.0 / v11;
      v13 = v43 * v12;
      v44 = v13;
      v14 = v46 * v12;
      v47 = v14;
      v15 = v49 * v12;
      v50 = v15;
      v16 = v15 * v32 + v13 * v30 + v14 * v31;
      v17 = v31 * v16;
      v18 = v16 * v32;
      v19 = *a2 - v30 * v16;
      *a2 = v19;
      a2[1] = a2[1] - v17;
      a2[2] = a2[2] - v18;
      this[558] = v19;
      this[559] = a2[1];
      this[560] = a2[2];
      v37 = v36 * v12;
      v39 = v38 * v12;
      v41 = v12 * v40;
      sub_1019CC50((float *)&v52, *(float *)(dword_10434D94 + 44), *(float *)(dword_10434DDC + 44), a4);
      v20 = (v53 * v41 + *(float *)&v52 * v50) * a4;
      v21 = (v39 * v53 + v47 * *(float *)&v52) * a4;
      this[564] = (v37 * v53 + v44 * *(float *)&v52) * a4 + this[564];
      this[565] = v21 + this[565];
      this[566] = v20 + this[566];
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
