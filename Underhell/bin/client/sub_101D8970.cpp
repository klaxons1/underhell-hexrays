int __thiscall sub_101D8970(int this, int a2)
{
  unsigned __int8 *v3; // eax
  int v4; // edx
  double v5; // st6
  int v6; // esi
  double v7; // st3
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st7
  double v12; // st7
  double v13; // st5
  double v14; // st6
  double v15; // rt0
  double v16; // st3
  double v17; // st4
  double v18; // st6
  double v19; // rt2
  float v20; // [esp+0h] [ebp-Ch]
  float v21; // [esp+0h] [ebp-Ch]
  float v22; // [esp+0h] [ebp-Ch]
  float v23; // [esp+4h] [ebp-8h]
  float v24; // [esp+4h] [ebp-8h]
  float v25; // [esp+4h] [ebp-8h]
  float v26; // [esp+8h] [ebp-4h]
  float v27; // [esp+8h] [ebp-4h]
  float v28; // [esp+8h] [ebp-4h]
  float v29; // [esp+10h] [ebp+4h]
  float v30; // [esp+10h] [ebp+4h]
  float v31; // [esp+10h] [ebp+4h]
  float v32; // [esp+10h] [ebp+4h]
  float v33; // [esp+10h] [ebp+4h]
  float v34; // [esp+10h] [ebp+4h]
  float v35; // [esp+10h] [ebp+4h]
  float v36; // [esp+10h] [ebp+4h]
  float v37; // [esp+10h] [ebp+4h]
  float v38; // [esp+10h] [ebp+4h]
  float v39; // [esp+10h] [ebp+4h]
  float v40; // [esp+10h] [ebp+4h]
  float v41; // [esp+10h] [ebp+4h]
  int v42; // [esp+10h] [ebp+4h]
  float v43; // [esp+10h] [ebp+4h]
  float v44; // [esp+10h] [ebp+4h]
  float v45; // [esp+10h] [ebp+4h]
  float v46; // [esp+10h] [ebp+4h]
  float v47; // [esp+10h] [ebp+4h]
  float v48; // [esp+10h] [ebp+4h]
  float v49; // [esp+10h] [ebp+4h]
  float v50; // [esp+10h] [ebp+4h]
  float v51; // [esp+10h] [ebp+4h]
  float v52; // [esp+10h] [ebp+4h]
  float v53; // [esp+10h] [ebp+4h]
  float v54; // [esp+10h] [ebp+4h]
  float v55; // [esp+10h] [ebp+4h]
  float v56; // [esp+10h] [ebp+4h]
  float v57; // [esp+10h] [ebp+4h]
  float v58; // [esp+10h] [ebp+4h]
  float v59; // [esp+10h] [ebp+4h]
  float v60; // [esp+10h] [ebp+4h]

  if ( !*(_BYTE *)(this + 8) )
    return 0;
  if ( *(_BYTE *)(this + 9) )
  {
    v20 = 0.0;
    v3 = (unsigned __int8 *)(a2 + 6);
    v23 = 0.0;
    v4 = 2;
    v26 = 0.0;
    do
    {
      v29 = (double)*(v3 - 4) + v20;
      v30 = v29 + (double)*v3;
      v31 = v30 + (double)v3[4];
      v32 = v31 + (double)v3[8];
      v33 = v32 + (double)v3[12];
      v34 = v33 + (double)v3[16];
      v35 = v34 + (double)v3[20];
      v20 = v35 + (double)v3[24];
      v36 = (double)*(v3 - 5) + v23;
      v37 = v36 + (double)*(v3 - 1);
      v38 = v37 + (double)v3[3];
      v39 = v38 + (double)v3[7];
      v40 = v39 + (double)v3[11];
      v41 = v40 + (double)v3[15];
      v5 = v41;
      v42 = v3[19];
      v6 = v3[23];
      v3 += 32;
      --v4;
      v43 = v5 + (double)v42;
      v23 = v43 + (double)v6;
      v44 = (double)*(v3 - 38) + v26;
      v45 = v44 + (double)*(v3 - 34);
      v46 = v45 + (double)*(v3 - 30);
      v47 = v46 + (double)*(v3 - 26);
      v48 = v47 + (double)*(v3 - 22);
      v49 = v48 + (double)*(v3 - 18);
      v50 = v49 + (double)*(v3 - 14);
      v26 = v50 + (double)*(v3 - 10);
    }
    while ( v4 );
    v21 = v20 * 0.0625;
    v24 = v23 * 0.0625;
    v27 = 0.0625 * v26;
    if ( v24 >= (double)v21 )
    {
      v51 = v24;
      v7 = v21;
      v8 = v24;
    }
    else
    {
      v7 = v21;
      v8 = v24;
      v51 = v21;
    }
    if ( v51 <= (double)v27 )
    {
      v52 = v27;
      v10 = v21;
      v9 = v27;
    }
    else
    {
      v9 = v27;
      if ( v21 <= v8 )
        v7 = v24;
      v10 = v21;
      v52 = v7;
    }
    v11 = v52;
    if ( v52 <= 0.0 )
    {
      v28 = 1.0;
      v25 = 1.0;
      v22 = 1.0;
    }
    else
    {
      v22 = v10 / v11;
      v25 = v8 / v11;
      v28 = v9 / v11;
    }
    v12 = *(float *)(this + 20);
    v13 = *(float *)(this + 24);
    v53 = 1.0 / (*(float *)(this + 16) + v12 + v13);
    v14 = v53;
    v54 = *(float *)(this + 16) * v53;
    *(float *)(this + 28) = v54;
    v15 = v54;
    v55 = v12 * v14;
    v16 = v55;
    *(float *)(this + 32) = v55;
    v56 = v13 * v14;
    v17 = v56;
    *(float *)(this + 36) = v56;
    v57 = (v15 + v15 * 3.0 * v22) * 0.25;
    *(float *)(this + 28) = v57;
    v18 = v57;
    v58 = (v16 + v16 * 3.0 * v25) * 0.25;
    *(float *)(this + 32) = v58;
    v19 = v58;
    v59 = 0.25 * (v17 + 3.0 * v17 * v28);
    *(float *)(this + 36) = v59;
    v60 = 1.0 / (v59 + v18 + v19);
    *(float *)(this + 28) = *(float *)(this + 28) * v60;
    *(float *)(this + 32) = *(float *)(this + 32) * v60;
    *(float *)(this + 36) = v60 * *(float *)(this + 36);
  }
  return this + 28;
}
