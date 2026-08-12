int __thiscall sub_101D8D50(int this, float *a2)
{
  int v4; // edx
  float *v5; // eax
  double v6; // st6
  double v7; // st6
  double v8; // st3
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st7
  double v13; // st7
  double v14; // st5
  double v15; // st6
  double v16; // rt0
  double v17; // st3
  double v18; // st4
  double v19; // st6
  double v20; // rt2
  float v21; // [esp+0h] [ebp-Ch]
  float v22; // [esp+0h] [ebp-Ch]
  float v23; // [esp+0h] [ebp-Ch]
  float v24; // [esp+0h] [ebp-Ch]
  float v25; // [esp+0h] [ebp-Ch]
  float v26; // [esp+0h] [ebp-Ch]
  float v27; // [esp+0h] [ebp-Ch]
  float v28; // [esp+0h] [ebp-Ch]
  float v29; // [esp+0h] [ebp-Ch]
  float v30; // [esp+0h] [ebp-Ch]
  float v31; // [esp+4h] [ebp-8h]
  float v32; // [esp+4h] [ebp-8h]
  float v33; // [esp+4h] [ebp-8h]
  float v34; // [esp+4h] [ebp-8h]
  float v35; // [esp+4h] [ebp-8h]
  float v36; // [esp+4h] [ebp-8h]
  float v37; // [esp+4h] [ebp-8h]
  float v38; // [esp+4h] [ebp-8h]
  float v39; // [esp+4h] [ebp-8h]
  float v40; // [esp+4h] [ebp-8h]
  float v41; // [esp+8h] [ebp-4h]
  float v42; // [esp+8h] [ebp-4h]
  float v43; // [esp+8h] [ebp-4h]
  float v44; // [esp+8h] [ebp-4h]
  float v45; // [esp+8h] [ebp-4h]
  float v46; // [esp+8h] [ebp-4h]
  float v47; // [esp+8h] [ebp-4h]
  float v48; // [esp+8h] [ebp-4h]
  float v49; // [esp+8h] [ebp-4h]
  float v50; // [esp+8h] [ebp-4h]
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
    v21 = 0.0;
    v4 = 2;
    v31 = 0.0;
    v41 = 0.0;
    do
    {
      v42 = a2[1] + v41;
      v5 = a2 + 6;
      v32 = *(v5 - 4) + v31;
      v5 += 7;
      v22 = *(v5 - 10) + v21;
      v5 += 6;
      v43 = *(v5 - 14) + v42;
      v5 += 7;
      v6 = *(v5 - 20);
      ++v5;
      v33 = v6 + v32;
      v23 = *(v5 - 20) + v22;
      v44 = *(v5 - 18) + v43;
      v34 = *(v5 - 17) + v33;
      v24 = *(v5 - 16) + v23;
      v45 = *(v5 - 14) + v44;
      v35 = *(v5 - 13) + v34;
      v25 = *(v5 - 12) + v24;
      v46 = *(v5 - 10) + v45;
      v36 = *(v5 - 9) + v35;
      v26 = *(v5 - 8) + v25;
      v47 = *(v5 - 6) + v46;
      v37 = *(v5 - 5) + v36;
      v27 = *(v5 - 4) + v26;
      v48 = *(v5 - 2) + v47;
      v38 = *(v5 - 1) + v37;
      v7 = *v5;
      a2 = v5 + 5;
      --v4;
      v28 = v7 + v27;
      v41 = *(a2 - 3) + v48;
      v31 = *(a2 - 2) + v38;
      v21 = *(a2 - 1) + v28;
    }
    while ( v4 );
    v29 = v21 * 0.0625;
    v39 = v31 * 0.0625;
    v49 = 0.0625 * v41;
    if ( v39 >= (double)v29 )
    {
      v51 = v39;
      v8 = v29;
      v9 = v39;
    }
    else
    {
      v8 = v29;
      v9 = v39;
      v51 = v29;
    }
    if ( v51 <= (double)v49 )
    {
      v52 = v49;
      v11 = v29;
      v10 = v49;
    }
    else
    {
      v10 = v49;
      if ( v29 <= v9 )
        v8 = v39;
      v11 = v29;
      v52 = v8;
    }
    v12 = v52;
    if ( v52 <= 0.0 )
    {
      v50 = 1.0;
      v40 = 1.0;
      v30 = 1.0;
    }
    else
    {
      v30 = v11 / v12;
      v40 = v9 / v12;
      v50 = v10 / v12;
    }
    v13 = *(float *)(this + 20);
    v14 = *(float *)(this + 24);
    v53 = 1.0 / (*(float *)(this + 16) + v13 + v14);
    v15 = v53;
    v54 = *(float *)(this + 16) * v53 * *(float *)(this + 28);
    *(float *)(this + 28) = v54;
    v16 = v54;
    v55 = v13 * v15 * *(float *)(this + 32);
    v17 = v55;
    *(float *)(this + 32) = v55;
    v56 = v14 * v15 * *(float *)(this + 36);
    v18 = v56;
    *(float *)(this + 36) = v56;
    v57 = (v16 + v16 * 3.0 * v30) * 0.25;
    *(float *)(this + 28) = v57;
    v19 = v57;
    v58 = (v17 + v17 * 3.0 * v40) * 0.25;
    *(float *)(this + 32) = v58;
    v20 = v58;
    v59 = 0.25 * (v18 + 3.0 * v18 * v50);
    *(float *)(this + 36) = v59;
    v60 = 1.0 / (v59 + v19 + v20);
    *(float *)(this + 28) = *(float *)(this + 28) * v60;
    *(float *)(this + 32) = *(float *)(this + 32) * v60;
    *(float *)(this + 36) = v60 * *(float *)(this + 36);
  }
  return this + 28;
}
