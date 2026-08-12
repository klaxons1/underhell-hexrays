char __usercall sub_10114030@<al>(float *a1@<edi>, float *a2@<esi>, float *a3, int a4, float a5, float *a6)
{
  double v6; // st6
  double v7; // st5
  char result; // al
  double v9; // st4
  double v10; // st3
  double v11; // st7
  double v12; // st2
  float *v13; // eax
  double v14; // rtt
  long double v15; // st2
  double v16; // st7
  double v17; // st1
  double v18; // st4
  float v19; // [esp+4h] [ebp-7Ch] BYREF
  float v20; // [esp+8h] [ebp-78h]
  float v21; // [esp+Ch] [ebp-74h]
  float v22; // [esp+14h] [ebp-6Ch]
  float v23; // [esp+18h] [ebp-68h]
  float v24; // [esp+1Ch] [ebp-64h]
  float v25; // [esp+24h] [ebp-5Ch]
  float v26; // [esp+28h] [ebp-58h]
  float v27; // [esp+2Ch] [ebp-54h]
  float v28; // [esp+34h] [ebp-4Ch] BYREF
  float v29; // [esp+38h] [ebp-48h]
  float v30; // [esp+3Ch] [ebp-44h]
  float v31; // [esp+44h] [ebp-3Ch]
  float v32; // [esp+48h] [ebp-38h]
  float v33; // [esp+4Ch] [ebp-34h]
  float v34; // [esp+54h] [ebp-2Ch]
  float v35; // [esp+58h] [ebp-28h]
  float v36; // [esp+5Ch] [ebp-24h]
  float v37; // [esp+64h] [ebp-1Ch] BYREF
  float v38; // [esp+68h] [ebp-18h]
  float v39; // [esp+6Ch] [ebp-14h]
  _BYTE v40[12]; // [esp+70h] [ebp-10h] BYREF
  float v41; // [esp+7Ch] [ebp-4h]
  float v42; // [esp+90h] [ebp+10h]
  float v43; // [esp+90h] [ebp+10h]
  float v44; // [esp+90h] [ebp+10h]
  float v45; // [esp+90h] [ebp+10h]
  float v46; // [esp+90h] [ebp+10h]
  float v47; // [esp+90h] [ebp+10h]
  float v48; // [esp+90h] [ebp+10h]
  float v49; // [esp+90h] [ebp+10h]
  float v50; // [esp+90h] [ebp+10h]
  float v51; // [esp+90h] [ebp+10h]
  float v52; // [esp+90h] [ebp+10h]
  float v53; // [esp+90h] [ebp+10h]
  float v54; // [esp+90h] [ebp+10h]
  float v55; // [esp+90h] [ebp+10h]
  float v56; // [esp+90h] [ebp+10h]

  sub_10421E30(a3, a4, &v19);
  sub_10421CE0(&v19, 3, &v37);
  sub_10113F80(&v28, &v19);
  v41 = v28 * *a2 + v29 * a2[1] + v30 * a2[2] + *a1;
  v6 = v37;
  v7 = a5;
  v42 = fabs(v37) + a5;
  if ( LODWORD(v42) > LODWORD(v41) )
  {
    *a6 = *a3;
    a6[1] = a3[1];
    result = 1;
    a6[2] = a3[2];
    return result;
  }
  v9 = v31;
  v41 = v31 * *a2 + v32 * a2[1] + v33 * a2[2] + a1[1];
  v10 = v38;
  v43 = fabs(v38) + v7;
  if ( LODWORD(v43) > LODWORD(v41) )
  {
    *a6 = a3[4];
    a6[1] = a3[5];
    result = 1;
    a6[2] = a3[6];
    return result;
  }
  v41 = v34 * *a2 + v35 * a2[1] + v36 * a2[2] + a1[2];
  v44 = fabs(v39) + v7;
  if ( LODWORD(v44) > LODWORD(v41) )
  {
    *a6 = a3[8];
    a6[1] = a3[9];
    result = 1;
    a6[2] = a3[10];
    return result;
  }
  v11 = v39;
  v41 = v28 * *a1 + v9 * a1[1] + a1[2] * v34 + *a2;
  v45 = fabs(v22 * v10 + v19 * v6 + v25 * v39) + v7;
  if ( LODWORD(v45) > LODWORD(v41) )
  {
    sub_10421CE0(a4, 0, a6);
    return 1;
  }
  v41 = v29 * *a1 + v32 * a1[1] + a1[2] * v35 + a2[1];
  v46 = fabs(v23 * v10 + v20 * v6 + v26 * v11) + v7;
  if ( LODWORD(v46) > LODWORD(v41) )
  {
    sub_10421CE0(a4, 1, a6);
    return 1;
  }
  v12 = v36;
  v41 = a1[2] * v36 + v30 * *a1 + v33 * a1[1] + a2[2];
  v47 = fabs(v24 * v10 + v21 * v6 + v27 * v11) + v7;
  if ( LODWORD(v47) > LODWORD(v41) )
  {
    sub_10421CE0(a4, 2, a6);
    return 1;
  }
  if ( v28 < 0.99900001 )
  {
    v41 = a1[2] * v9 + v34 * a1[1] + v30 * a2[1] + v29 * a2[2];
    v48 = fabs(v22 * v11 - v25 * v10) + v7;
    if ( LODWORD(v48) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 0, v40);
      sub_10421D20(a3, v40, a6);
      return 1;
    }
  }
  if ( v29 < 0.99900001 )
  {
    v41 = a1[2] * v32 + v35 * a1[1] + v30 * *a2 + a2[2] * v28;
    v49 = fabs(v23 * v11 - v26 * v10) + v7;
    if ( LODWORD(v49) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 1, v40);
      sub_10421D20(a3, v40, a6);
      return 1;
    }
    v12 = v36;
  }
  if ( v30 < 0.99900001 )
  {
    v41 = a1[2] * v33 + v12 * a1[1] + v29 * *a2 + v28 * a2[1];
    v50 = fabs(v24 * v11 - v27 * v10) + v7;
    if ( LODWORD(v50) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 2, v40);
      sub_10421D20(a3, v40, a6);
      return 1;
    }
  }
  if ( v9 < 0.99900001 )
  {
    v41 = a1[2] * v28 + *a1 * v34 + v33 * a2[1] + v32 * a2[2];
    v51 = fabs(v25 * v6 - v19 * v11) + v7;
    if ( LODWORD(v51) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 0, v40);
      v13 = a3 + 4;
LABEL_26:
      sub_10421D20(v13, v40, a6);
      return 1;
    }
    v12 = v36;
  }
  if ( v32 < 0.99900001 )
  {
    v41 = a1[2] * v29 + v35 * *a1 + v33 * *a2 + a2[2] * v9;
    v52 = fabs(v26 * v6 - v20 * v11) + v7;
    if ( LODWORD(v52) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 1, v40);
      v13 = a3 + 4;
      goto LABEL_26;
    }
  }
  if ( v33 >= 0.99900001 )
  {
    v16 = v12;
  }
  else
  {
    v41 = a1[2] * v30 + v12 * *a1 + v32 * *a2 + v9 * a2[1];
    v14 = v12;
    v15 = v27 * v6 - v11 * v21;
    v16 = v14;
    v53 = fabs(v15) + v7;
    if ( LODWORD(v53) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 2, v40);
      sub_10421D20(a3 + 4, v40, a6);
      return 1;
    }
  }
  if ( v34 >= 0.99900001 )
  {
    v18 = v35;
  }
  else
  {
    v17 = v9 * *a1 + v28 * a1[1] + v16 * a2[1] + v35 * a2[2];
    v18 = v35;
    v41 = v17;
    v54 = fabs(v19 * v10 - v22 * v6) + v7;
    if ( LODWORD(v54) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 0, v40);
      v13 = a3 + 8;
      goto LABEL_26;
    }
  }
  if ( v18 < 0.99900001 )
  {
    v41 = v29 * a1[1] + v32 * *a1 + v16 * *a2 + a2[2] * v34;
    v55 = fabs(v20 * v10 - v23 * v6) + v7;
    if ( LODWORD(v55) > LODWORD(v41) )
    {
      sub_10421CE0(a4, 1, v40);
      v13 = a3 + 8;
      goto LABEL_26;
    }
  }
  if ( v16 >= 0.99900001 )
    return 0;
  v41 = v30 * a1[1] + v33 * *a1 + v18 * *a2 + v34 * a2[1];
  v56 = v7 + fabs(v38 * v21 - v6 * v24);
  if ( LODWORD(v56) <= LODWORD(v41) )
    return 0;
  sub_10421CE0(a4, 2, v40);
  sub_10421D20(a3 + 8, v40, a6);
  return 1;
}
