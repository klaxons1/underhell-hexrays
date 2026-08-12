void __thiscall sub_10142540(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st4
  double v6; // st5
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  double v12; // st5
  double v13; // st6
  float v14; // eax
  float v15; // ecx
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st7
  int v23; // edi
  double v24; // st7
  double v25; // st7
  float v26; // eax
  int *v27; // ecx
  long double v28; // st6
  long double v29; // st5
  long double v30; // rt1
  long double v31; // st5
  double v32; // st7
  double v33; // st7
  double v34; // st7
  unsigned int v35; // eax
  double v36; // st6
  double v37; // st5
  double v38; // rt0
  double v39; // st5
  double v40; // st7
  int v41; // ecx
  double v42; // st0
  double v43; // st5
  double v44; // rt2
  double v45; // st3
  double v46; // st7
  double v47; // st3
  float v48; // [esp+8h] [ebp-2Ch]
  float v49; // [esp+14h] [ebp-20h] BYREF
  float v50; // [esp+18h] [ebp-1Ch]
  float v51; // [esp+1Ch] [ebp-18h]
  float v52; // [esp+20h] [ebp-14h] BYREF
  float v53; // [esp+24h] [ebp-10h]
  float v54; // [esp+28h] [ebp-Ch]
  float v55; // [esp+2Ch] [ebp-8h]
  float v56; // [esp+30h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(float *)(this + 580) - *(float *)(this + 1172);
  v52 = v3;
  v4 = *(float *)(this + 584) - *(float *)(this + 1176);
  v53 = v4;
  v54 = *(float *)(this + 588) - *(float *)(this + 1180);
  if ( v3 <= 255.0 )
  {
    if ( v3 >= -255.0 )
      v56 = v3;
    else
      v56 = -255.0;
    v5 = 255.0;
    v6 = -255.0;
  }
  else
  {
    v5 = 255.0;
    v6 = -255.0;
    v56 = 255.0;
  }
  if ( *(_DWORD *)(this + 1128) != LODWORD(v56) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 1128);
        v3 = v52;
        v6 = -255.0;
        v5 = 255.0;
        v4 = v53;
      }
    }
    *(float *)(this + 1128) = v56;
  }
  if ( v5 >= v4 )
  {
    if ( v6 <= v4 )
      v56 = v4;
    else
      v56 = v6;
  }
  else
  {
    v56 = v5;
  }
  if ( *(_DWORD *)(this + 1132) != LODWORD(v56) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 1132);
        v3 = v52;
        v4 = v53;
      }
    }
    *(float *)(this + 1132) = v56;
  }
  if ( *(_DWORD *)(this + 1136) != *(_DWORD *)(this + 1180) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        sub_100194B0(v9, 1136);
        v3 = v52;
        v4 = v53;
      }
    }
    *(float *)(this + 1136) = *(float *)(this + 1180);
  }
  if ( *(_BYTE *)(this + 224) == 2 )
  {
    v10 = *(_DWORD *)(this + 1120);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
    v12 = v4 * v4;
    v13 = *(float *)(v11 + 812) - 5.0;
    if ( v13 * v13 >= v3 * v3 + v12 + v54 * v54 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v14 = *(float *)(this + 480);
      v15 = *(float *)(this + 484);
      v52 = *(float *)(this + 476) - *(float *)(this + 476) * a2;
      v53 = v14 - v14 * a2;
      v54 = v15 - v15 * a2;
      sub_100DD660(this, &v52);
    }
    else
    {
      v52 = 0.0;
      v53 = 0.0;
      v54 = 0.0;
      sub_100DD660(this, &v52);
    }
    return;
  }
  if ( sub_10264FF0(this + 1208) > *(float *)(this + 1212) )
  {
    v56 = RandomFloat(10.0, 30.0);
    v16 = sub_10264FF0(this + 1208) + v56;
    v17 = v56;
    *(float *)(this + 1212) = v16;
    *(float *)(this + 1208) = v17;
    *(_BYTE *)(this + 1216) = *(_BYTE *)(this + 1216) == 0;
  }
  if ( *(float *)(this + 1240) - sub_10264FF0(this + 1236) <= 0.0 )
  {
    if ( *(float *)(this + 1232) - sub_10264FF0(this + 1228) <= 0.0 )
    {
      if ( sub_10264FF0(this + 1220) <= *(float *)(this + 1224) )
        goto LABEL_50;
      v56 = RandomFloat(10.0, 60.0);
      v18 = sub_10264FF0(this + 1220) + v56;
      v19 = v56;
      *(float *)(this + 1224) = v18;
      *(float *)(this + 1220) = v19;
      v56 = RandomFloat(2.0, 10.0);
      v20 = sub_10264FF0(this + 1228) + v56;
      v21 = v56;
      *(float *)(this + 1232) = v20;
      *(float *)(this + 1228) = v21;
    }
    *(float *)(this + 1192) = *(float *)(this + 1196);
    goto LABEL_50;
  }
  *(float *)(this + 1192) = *(float *)(this + 1200);
LABEL_50:
  v22 = sub_10141B10(this);
  v55 = v22;
  v23 = 0;
  if ( *(int *)(this + 1264) > 0 )
  {
    v56 = 1.0 - v22;
    do
      sub_10141810(this, *(_DWORD *)(*(_DWORD *)(this + 1252) + 4 * v23++), v56);
    while ( v23 < *(_DWORD *)(this + 1264) );
    v22 = v55;
  }
  v48 = 1.0 - v22;
  sub_10141810(this, 0, v48);
  v24 = (*(float *)(this + 1188) / *(float *)(this + 1200) * 175.0 + 25.0) * a2;
  if ( v24 >= *(float *)(this + 1144) )
  {
    v25 = -v24;
    if ( v25 > *(float *)(this + 1144) )
      *(float *)(this + 1144) = v25;
  }
  else
  {
    *(float *)(this + 1144) = v24;
  }
  v26 = *(float *)(this + 1140);
  v56 = *(float *)(this + 1144) + v26;
  if ( LODWORD(v26) != LODWORD(v56) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v27 = *(int **)(this + 24);
      if ( v27 )
        sub_100194B0(v27, 1140);
    }
    *(float *)(this + 1140) = v56;
  }
  *(float *)(this + 1144) = 0.0;
  v28 = *(float *)(this + 1140) * 3.141592653589793 * 0.005555555555555556;
  v29 = cos(v28);
  *(float *)(this + 1148) = v29;
  v30 = v29;
  v31 = sin(v28);
  *(float *)(this + 1152) = v31;
  *(float *)(this + 1156) = 0.0;
  *(float *)(this + 1160) = -v31;
  *(float *)(this + 1164) = v30;
  *(float *)(this + 1168) = 0.0;
  v32 = *(float *)(this + 1192) - *(float *)(this + 1188);
  *(float *)(this + 1188) = (v32 + v32) * a2 + *(float *)(this + 1188);
  if ( sub_10264FF0(this + 1228) > *(float *)(this + 1232) )
  {
    v33 = *(float *)(this + 1192) - a2;
    *(float *)(this + 1192) = v33;
    if ( v33 < 0.0 )
      *(float *)(this + 1192) = 0.0;
  }
  v34 = *(float *)(this + 1188);
  v35 = *(_DWORD *)(this + 1120);
  v36 = *(float *)(this + 1148) * v34;
  v49 = v36;
  v37 = *(float *)(this + 1152) * v34;
  v50 = v37;
  v38 = v37;
  v39 = v34 * *(float *)(this + 1156);
  v40 = v38;
  v51 = v39;
  if ( v35 == -1 || off_1061BE18[4 * (v35 & 0xFFF) + 2] != v35 >> 12 )
    v41 = 0;
  else
    v41 = off_1061BE18[4 * (v35 & 0xFFF) + 1];
  v42 = *(float *)(v41 + 812) - 5.0;
  v43 = v52;
  if ( v53 * v53 + v52 * v52 + v54 * v54 > v42 * v42 )
  {
    v44 = v54;
    v52 = -v43;
    v45 = -v53;
    v53 = v45;
    v54 = -v54;
    if ( v36 * -v43 + v45 * v40 + -v44 * v51 < 0.0 )
    {
      off_10689714();
      v46 = -v53;
      v47 = v51 * 0.0 + v50 * v52 + v49 * v46;
      v49 = v46 * v47;
      v50 = v52 * v47;
      v51 = 0.0 * v47;
    }
  }
  sub_100DD660(this, &v49);
  *(float *)(this + 108) = *(float *)(this + 1188);
}
