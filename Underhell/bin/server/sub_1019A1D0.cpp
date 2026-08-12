char __usercall sub_1019A1D0@<al>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  int i; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v11; // eax
  double v12; // st7
  int v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st6
  double v20; // st4
  double v21; // st2
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st6
  double v26; // st5
  double v27; // st6
  double v28; // rtt
  double v29; // st7
  _BYTE v30[12]; // [esp+24h] [ebp-12Ch] BYREF
  float v31[10]; // [esp+30h] [ebp-120h] BYREF
  char v32; // [esp+5Bh] [ebp-F5h]
  int v33; // [esp+70h] [ebp-E0h]
  _BYTE v34[12]; // [esp+7Ch] [ebp-D4h] BYREF
  float v35[3]; // [esp+88h] [ebp-C8h] BYREF
  float v36[16]; // [esp+94h] [ebp-BCh] BYREF
  char v37; // [esp+D4h] [ebp-7Ch]
  bool v38; // [esp+D5h] [ebp-7Bh]
  _DWORD v39[4]; // [esp+ECh] [ebp-64h] BYREF
  float v40; // [esp+FCh] [ebp-54h]
  float v41; // [esp+100h] [ebp-50h]
  float v42; // [esp+104h] [ebp-4Ch]
  float v43; // [esp+108h] [ebp-48h] BYREF
  float v44; // [esp+10Ch] [ebp-44h]
  int v45; // [esp+110h] [ebp-40h]
  float v46; // [esp+114h] [ebp-3Ch]
  float v47; // [esp+118h] [ebp-38h]
  float v48; // [esp+11Ch] [ebp-34h]
  float v49; // [esp+120h] [ebp-30h] BYREF
  float v50; // [esp+124h] [ebp-2Ch]
  float v51; // [esp+128h] [ebp-28h]
  float v52; // [esp+12Ch] [ebp-24h] BYREF
  float v53; // [esp+130h] [ebp-20h]
  float v54; // [esp+134h] [ebp-1Ch] BYREF
  int v55; // [esp+138h] [ebp-18h] BYREF
  int v56; // [esp+13Ch] [ebp-14h]
  char v57; // [esp+142h] [ebp-Eh]
  bool v58; // [esp+143h] [ebp-Dh]
  _DWORD v59[3]; // [esp+144h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+150h] [ebp+0h]

  v59[0] = a2;
  v59[1] = retaddr;
LABEL_2:
  if ( !a1[298] )
  {
    v3 = sub_1019A0B0(a1);
    a1[298] = v3;
    if ( !v3 )
    {
      for ( i = a1[303]; i != -1; i = *(_DWORD *)(v56 + a1[300] + 8) )
      {
        v5 = 12 * i;
        v6 = *(_DWORD *)(v5 + a1[300]);
        v56 = v5;
        v7 = sub_10199DD0((int)v59, (float *)(v6 + 12), *(_DWORD *)(v6 + 52));
        a1[298] = v7;
        if ( v7 )
          break;
        v8 = sub_10199DD0((int)v59, (float *)v6, *(_DWORD *)(v6 + 52));
        a1[298] = v8;
        if ( v8 )
          break;
      }
      if ( !a1[298] )
        return 0;
    }
  }
  v9 = 0;
  while ( ((1 << v9) & *(unsigned __int8 *)(a1[298] + 52)) != 0 )
  {
    if ( ++v9 >= 4 )
    {
      a1[298] = *(_DWORD *)(a1[298] + 56);
      goto LABEL_2;
    }
  }
  v11 = a1[298];
  v43 = *(float *)v11;
  v44 = *(float *)(v11 + 4);
  v45 = *(_DWORD *)(v11 + 8);
  v55 = (int)sub_10192230(v43, 0);
  v56 = (int)sub_10192230(v44, 0);
  switch ( v9 )
  {
    case 0:
      v56 = (int)((double)v56 - 25.0);
      break;
    case 1:
      v12 = (double)v55 + 25.0;
      goto LABEL_19;
    case 2:
      v56 = (int)((double)v56 + 25.0);
      break;
    case 3:
      v12 = (double)v55 - 25.0;
LABEL_19:
      v55 = (int)v12;
      break;
    default:
      break;
  }
  v13 = a1[298];
  v43 = (float)v55;
  v14 = (double)v56;
  a1[299] = v9;
  v44 = v14;
  *(_BYTE *)(v13 + 52) |= 1 << v9;
  v52 = v43;
  v53 = v44;
  if ( (unsigned __int8)sub_1019DEA0(&v43, &v54, v34) )
  {
    v15 = (float *)a1[298];
    v16 = *v15;
    v40 = *v15;
    v17 = v15[1];
    v41 = v15[1];
    v18 = v15[2];
    v42 = v15[2];
    v46 = v16;
    v47 = v17;
    v48 = v18 + 36.0;
    v49 = v52;
    v50 = v53;
    v51 = v54 + 36.0;
    sub_10265570(0, 0);
    v39[0] = &CTraceFilterWalkableEntities::`vftable';
    v39[3] = 7;
    v19 = v49 - v46;
    v36[4] = v19;
    v20 = v50 - v47;
    v36[5] = v20;
    v21 = v51 - v48;
    v36[6] = v21;
    v38 = 0.0 != v21 * v21 + v19 * v19 + v20 * v20;
    v36[14] = 0.0;
    v36[13] = 0.0;
    v36[12] = 0.0;
    v36[10] = 0.0;
    v36[9] = 0.0;
    v36[8] = 0.0;
    v37 = 1;
    v36[0] = v46;
    v36[1] = v47;
    v36[2] = v48;
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v36,
      81931,
      v39,
      v30);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v30, (int)v31, 255, 0, 0, 1, -1.0);
    if ( 1.0 != v31[8] || v32 )
    {
      v58 = sub_1018BB50(v33, 7) != 0;
    }
    else
    {
      v22 = v54;
      v23 = v54 - v42;
      if ( v23 > 58.099998 || v42 - v22 > 200.0 )
      {
        v58 = 0;
      }
      else
      {
        v57 = 0;
        v58 = 1;
        v46 = v52 - v40;
        v47 = v53 - v41;
        v24 = v23;
        v25 = v42;
        v48 = v24;
        v26 = 2.0;
        *(float *)&v56 = 2.0;
        while ( 1 )
        {
          if ( v26 < 25.0 )
          {
            v28 = v25;
            v27 = v47 * (v26 * 0.039999999) + v41;
            v22 = v28 + v26 * 0.039999999 * v48;
            v49 = v46 * (v26 * 0.039999999) + v40;
          }
          else
          {
            v57 = 1;
            v49 = v52;
            v27 = v53;
          }
          v50 = v27;
          v51 = v22;
          if ( !(unsigned __int8)sub_1019DEA0(&v49, &v55, v35) || *(float *)(dword_106B82D4 + 44) > (double)v35[2] )
            break;
          v29 = *(float *)&v56 + 2.0;
          *(float *)&v56 = v29;
          if ( v57 )
            goto LABEL_39;
          v25 = v42;
          v26 = v29;
          v22 = v54;
        }
        v58 = 0;
      }
    }
LABEL_39:
    if ( !sub_1019E380((int)&v52, 72.0) && v58 )
      sub_10197C60(a1, (int)&v52, (int)v34, a1[299], a1[298]);
  }
  return 1;
}
