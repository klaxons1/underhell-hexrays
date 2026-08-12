double __thiscall sub_1011C650(_DWORD *this, float a2, float a3)
{
  double result; // st7
  double v4; // st7
  double v5; // st6
  int v6; // edx
  double v7; // st5
  double v8; // st4
  int v9; // ebx
  double v10; // rt0
  double v11; // rt1
  double v12; // st4
  double v13; // st5
  double v14; // rt2
  double v15; // st4
  double v16; // st7
  float *v17; // eax
  double v18; // rtt
  int v19; // edi
  double v20; // st4
  double v21; // st7
  double v22; // rt1
  double v23; // st4
  float *v24; // esi
  double v25; // rt2
  double v26; // st4
  double v27; // st7
  int v28; // eax
  int v29; // esi
  int v30; // edi
  int v31; // ebx
  int v32; // edx
  double v33; // rtt
  double v34; // st4
  double v35; // st5
  double v36; // rt0
  double v37; // st4
  double v38; // st7
  double v39; // rt1
  double v40; // st4
  double v41; // st7
  double v42; // rtt
  double v43; // st4
  double v44; // st5
  float *v45; // esi
  double v46; // rt0
  double v47; // st4
  double v48; // st5
  double v49; // rt2
  double v50; // st4
  double v51; // st7
  float *v52; // edx
  double v53; // rtt
  double v54; // st4
  double v55; // st7
  float *v56; // ecx
  double v57; // st5
  double v58; // st4
  double v59; // st5
  double v60; // st3
  double v61; // st3
  double v62; // st3
  double v63; // st3
  double v64; // st6
  double v65; // st7
  float v66; // [esp+0h] [ebp-48h]
  int v67; // [esp+8h] [ebp-40h] BYREF
  float v68; // [esp+Ch] [ebp-3Ch]
  int v69[2]; // [esp+14h] [ebp-34h] BYREF
  int v70; // [esp+1Ch] [ebp-2Ch]
  int v71[3]; // [esp+20h] [ebp-28h] BYREF
  int v72[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v73[3]; // [esp+38h] [ebp-10h] BYREF
  int v74; // [esp+44h] [ebp-4h]
  float *v75; // [esp+54h] [ebp+Ch]

  v74 = this[15];
  if ( v74 <= 0 )
    return 0.5;
  v4 = a3;
  v5 = a2;
  v6 = -1;
  v7 = 0.5;
  v8 = 0.0;
  v9 = -12;
  while ( 1 )
  {
    flt_10437698 = v8;
    v11 = v8;
    v12 = v7;
    v13 = v11;
    flt_1043769C = v12;
    flt_10437690 = v12;
    v14 = v12;
    v15 = v4;
    v16 = v14;
    flt_1043768C = v15;
    if ( v6 >= 0 )
      v17 = v6 < this[15] ? (float *)(v9 + this[12]) : &flt_1043768C;
    else
      v17 = &flt_10437698;
    v18 = v15;
    v19 = v6 + 1;
    flt_10437698 = v13;
    v20 = v16;
    v21 = v13;
    flt_1043769C = v20;
    flt_10437690 = v20;
    v22 = v20;
    v23 = v18;
    v7 = v22;
    flt_1043768C = v18;
    if ( v6 + 1 >= 0 )
      v24 = v19 < this[15] ? (float *)(this[12] + v9 + 12) : &flt_1043768C;
    else
      v24 = &flt_10437698;
    if ( v17 && v24 && *v17 <= v5 && *v24 >= v5 )
      break;
    ++v6;
    v9 += 12;
    if ( v19 >= v74 )
      break;
    v10 = v23;
    v8 = v21;
    v4 = v10;
  }
  v25 = v23;
  v26 = v21;
  v27 = v25;
  v28 = v6 - 1;
  v29 = v6;
  v30 = v6 + 1;
  v31 = v6 + 2;
  if ( v6 - 1 < -1 )
    v28 = -1;
  if ( v6 < -1 )
    v29 = -1;
  v32 = this[15];
  if ( v30 >= v32 )
    v30 = this[15];
  if ( v31 >= v32 )
    v31 = this[15];
  flt_10437698 = v26;
  v33 = v26;
  v34 = v7;
  v35 = v33;
  flt_1043769C = v34;
  flt_10437690 = v34;
  v36 = v34;
  v37 = v27;
  v38 = v36;
  flt_1043768C = v37;
  if ( v28 >= 0 )
  {
    if ( v28 < this[15] )
      v75 = (float *)(this[12] + 12 * v28);
    else
      v75 = &flt_1043768C;
  }
  else
  {
    v75 = &flt_10437698;
  }
  v39 = v37;
  flt_10437698 = v35;
  v40 = v38;
  v41 = v35;
  flt_1043769C = v40;
  flt_10437690 = v40;
  v42 = v40;
  v43 = v39;
  v44 = v42;
  flt_1043768C = v39;
  if ( v29 >= 0 )
  {
    if ( v29 < this[15] )
      v45 = (float *)(this[12] + 12 * v29);
    else
      v45 = &flt_1043768C;
  }
  else
  {
    v45 = &flt_10437698;
  }
  v46 = v43;
  flt_10437698 = v41;
  v47 = v44;
  v48 = v41;
  flt_1043769C = v47;
  flt_10437690 = v47;
  v49 = v47;
  v50 = v46;
  v51 = v49;
  flt_1043768C = v46;
  if ( v30 >= 0 )
  {
    if ( v30 < this[15] )
      v52 = (float *)(this[12] + 12 * v30);
    else
      v52 = &flt_1043768C;
  }
  else
  {
    v52 = &flt_10437698;
  }
  v53 = v50;
  flt_10437698 = v48;
  v54 = v51;
  v55 = v48;
  flt_1043769C = v54;
  flt_10437690 = v54;
  flt_1043768C = v53;
  if ( v31 >= 0 )
  {
    if ( v31 < this[15] )
      v56 = (float *)(this[12] + 12 * v31);
    else
      v56 = &flt_1043768C;
  }
  else
  {
    v56 = &flt_10437698;
  }
  v57 = *v52 - *v45;
  v58 = 1.0;
  if ( v57 <= 1.0 )
  {
    if ( v57 < 0.0099999998 )
      v57 = 0.0099999998;
    v58 = v57;
    v59 = 1.0;
  }
  else
  {
    v59 = 1.0;
  }
  v60 = v75[1];
  v69[0] = *(int *)v75;
  *(float *)&v69[1] = v60;
  *(float *)&v70 = v55;
  v61 = v45[1];
  v71[0] = *(int *)v45;
  *(float *)&v71[1] = v61;
  v71[2] = v70;
  v62 = v52[1];
  v72[0] = *(int *)v52;
  *(float *)&v72[1] = v62;
  v72[2] = v70;
  v63 = v56[1];
  v73[0] = *(int *)v56;
  *(float *)&v73[1] = v63;
  v73[2] = v70;
  v64 = v55;
  v65 = (a2 - *v45) / v58;
  if ( v59 >= v65 )
  {
    if ( v64 > v65 )
      v65 = v64;
  }
  else
  {
    v65 = v59;
  }
  v66 = v65;
  sub_101EF230((int)v69, (int)v71, (int)v72, (int)v73, v66, (int)&v67);
  result = 1.0;
  if ( v68 <= 1.0 )
  {
    result = v68;
    if ( v68 < 0.0 )
      return 0.0;
  }
  return result;
}
