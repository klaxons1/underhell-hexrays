char __thiscall sub_10081160(int this, int a2)
{
  int v3; // ebx
  int v4; // eax
  double v5; // st7
  int v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v14; // eax
  float v15; // esi
  double v16; // st7
  double v17; // st6
  double v18; // rt1
  int v19; // ecx
  int v20; // eax
  double v21; // st6
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  float v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  double v31; // st7
  double v32; // st6
  double v33; // st5
  void *v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  float v38; // [esp+10h] [ebp-78h]
  float v39; // [esp+10h] [ebp-78h]
  int v40[14]; // [esp+20h] [ebp-68h] BYREF
  int v41; // [esp+58h] [ebp-30h] BYREF
  float v42; // [esp+5Ch] [ebp-2Ch]
  float v43; // [esp+60h] [ebp-28h]
  int v44; // [esp+64h] [ebp-24h] BYREF
  float v45; // [esp+68h] [ebp-20h]
  float v46; // [esp+6Ch] [ebp-1Ch]
  int v47; // [esp+70h] [ebp-18h]
  float v48; // [esp+74h] [ebp-14h]
  float v49; // [esp+78h] [ebp-10h]
  float v50; // [esp+7Ch] [ebp-Ch]
  float v51; // [esp+80h] [ebp-8h]
  char v52; // [esp+87h] [ebp-1h]

  v47 = this;
  sub_100B9C50(a2);
  v3 = **(_DWORD **)(this + 36);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 == 3 || (v52 = 0, v4 == 1) )
    v52 = 1;
  v5 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 20) + 92))(0.0);
  v51 = v5;
  if ( !v52 )
  {
    if ( v5 > 0.1 )
      goto LABEL_16;
    return 0;
  }
  sub_10079A70(*(_DWORD *)(v3 + 36), (float *)(*(_DWORD *)(this + 4) + 716), (float *)v3);
  v50 = v5;
  if ( *(_DWORD *)(v3 + 36) == 3 )
  {
    v6 = *(_DWORD *)(v3 + 40);
    if ( v6 && *(_DWORD *)(v6 + 36) == 3 )
    {
      v7 = *(float *)(v6 + 4) - *(float *)(v3 + 4);
      v8 = v7 * v7;
      v9 = *(float *)v6 - *(float *)v3;
      v10 = v8;
      v11 = *(float *)(v6 + 8) - *(float *)(v3 + 8);
      v38 = v9 * v9 + v10 + v11 * v11;
      v50 = off_10689708(v38) + v50;
    }
    v12 = sub_100737B0(*(_DWORD *)(*(_DWORD *)(this + 4) + 1676));
    v5 = v12 + v12 + v50;
  }
  if ( v51 >= v5 )
    v5 = v51;
  else
    v51 = v5;
LABEL_16:
  v14 = *(_DWORD *)(this + 4);
  v44 = *(int *)(v14 + 716);
  v45 = *(float *)(v14 + 720);
  v15 = 0.0;
  v46 = *(float *)(v14 + 724);
  v49 = 0.0;
  v50 = 0.0;
  if ( v5 <= 0.01 )
    return 0;
  v16 = v45;
  v17 = *(float *)&v44;
  while ( v3 )
  {
    v19 = *(_DWORD *)(v3 + 36);
    if ( (v19 == 3 || v19 == 1) && !v52 )
      break;
    if ( v19 != 3 || (v20 = *(_DWORD *)(v3 + 40)) == 0 || *(_DWORD *)(v20 + 36) != 3 )
      v52 = 0;
    v21 = *(float *)v3 - v17;
    v22 = *(float *)(v3 + 4) - v16;
    if ( v19 )
    {
      v24 = v21 * v21 + v22 * v22;
      v25 = *(float *)(v3 + 8) - v46;
      v23 = v25 * v25;
    }
    else
    {
      v23 = v22 * v22;
      v24 = v21 * v21;
    }
    v39 = v23 + v24;
    v26 = off_10689708(v39);
    v48 = v26;
    if ( v51 + 0.01 < v26 )
    {
      *(float *)&v41 = *(float *)v3 - *(float *)&v44;
      v42 = *(float *)(v3 + 4) - v45;
      v43 = *(float *)(v3 + 8) - v46;
      off_10689714();
      v48 = sub_10265030(&v41);
      *(float *)&v41 = *(float *)&v41 * v51 + *(float *)&v44;
      v42 = v42 * v51 + v45;
      v43 = v51 * v43 + v46;
      memset(v40, 0, sizeof(v40));
      if ( sub_1007C550(
             *(_DWORD **)(v47 + 24),
             *(_DWORD *)(v3 + 36),
             (float *)&v44,
             (float *)&v41,
             33701899,
             0,
             100.0,
             1,
             (float *)v40) )
      {
        v34 = (void *)sub_1042FCC0(48);
        if ( v34 )
          v35 = sub_100B9A20(v34, (int)&v40[1], v48, *(_DWORD *)(v3 + 36), 8, 0);
        else
          v35 = 0;
        if ( v15 == 0.0 )
        {
          v49 = *(float *)&v35;
        }
        else
        {
          v36 = *(_DWORD *)(LODWORD(v15) + 40);
          if ( v36 )
            *(_DWORD *)(v36 + 44) = 0;
          *(_DWORD *)(LODWORD(v15) + 40) = v35;
          if ( v35 )
          {
            v37 = *(_DWORD *)(v35 + 44);
            if ( v37 )
              *(_DWORD *)(v37 + 40) = 0;
            *(float *)(*(_DWORD *)(LODWORD(v15) + 40) + 44) = v15;
          }
        }
      }
      v51 = 0.0;
      v32 = v45;
      v33 = 0.0;
      v31 = *(float *)&v44;
    }
    else
    {
      v27 = COERCE_FLOAT(sub_1042FCC0(48));
      if ( v27 == 0.0 )
      {
        v27 = 0.0;
      }
      else
      {
        *(_DWORD *)(LODWORD(v27) + 24) = -1;
        *(_DWORD *)(LODWORD(v27) + 28) = -1;
        qmemcpy((void *)LODWORD(v27), (const void *)v3, 0x30u);
        *(float *)(LODWORD(v27) + 20) = -1.0;
        v15 = v50;
        *(_DWORD *)(LODWORD(v27) + 44) = 0;
        *(_DWORD *)(LODWORD(v27) + 40) = 0;
      }
      v28 = *(_DWORD *)(LODWORD(v27) + 32);
      if ( (v28 & 2) != 0 )
      {
        *(_DWORD *)(LODWORD(v27) + 32) = v28 & 0xFFFFFFFD;
        *(_DWORD *)(LODWORD(v27) + 24) = -1;
      }
      *(_DWORD *)(LODWORD(v27) + 32) &= 0xFFFFFFF3;
      *(_DWORD *)(LODWORD(v27) + 16) = -1;
      if ( v15 == 0.0 )
      {
        v49 = v27;
      }
      else
      {
        v29 = *(_DWORD *)(LODWORD(v15) + 40);
        if ( v29 )
          *(_DWORD *)(v29 + 44) = 0;
        *(float *)(LODWORD(v15) + 40) = v27;
        v30 = *(_DWORD *)(LODWORD(v27) + 44);
        if ( v30 )
          *(_DWORD *)(v30 + 40) = 0;
        *(float *)(*(_DWORD *)(LODWORD(v15) + 40) + 44) = v15;
      }
      v31 = *(float *)v3;
      v50 = v27;
      *(float *)&v44 = v31;
      v15 = v27;
      v32 = *(float *)(v3 + 4);
      v45 = *(float *)(v3 + 4);
      v46 = *(float *)(v3 + 8);
      v3 = *(_DWORD *)(v3 + 40);
      v33 = v51 - v48;
      v51 = v33;
    }
    if ( v33 <= 0.01 )
      break;
    v18 = v32;
    v17 = v31;
    v16 = v18;
  }
  if ( v49 == 0.0 )
    return 0;
  unknown_libname_2(LODWORD(v49));
  return 1;
}
