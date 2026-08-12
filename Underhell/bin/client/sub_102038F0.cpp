int __thiscall sub_102038F0(int this, int a2, float a3, int a4)
{
  double v6; // st7
  double v7; // st6
  int v8; // eax
  double v9; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // rt2
  double v16; // st5
  double v17; // st6
  double v18; // st7
  double v19; // rtt
  int v20; // edi
  double v21; // st7
  double X; // st7
  double v23; // st7
  int v24; // eax
  int v25; // edi
  int v26; // ebx
  double v27; // st7
  double v28; // st6
  double v29; // st5
  int v30; // ecx
  double v31; // rt2
  double v32; // rt0
  double v33; // st5
  double v34; // st6
  double v35; // st5
  double v36; // st5
  double v37; // st5
  double v38; // st5
  float *v39; // ecx
  float v40; // [esp+14h] [ebp-4h]
  int v41; // [esp+1Ch] [ebp+4h]
  float v42; // [esp+20h] [ebp+8h]
  int v43; // [esp+20h] [ebp+8h]
  int v44; // [esp+24h] [ebp+Ch]

  v6 = (double)sub_101F89A0((_DWORD *)a2) * *(float *)(this + 60);
  v7 = *(float *)(this + 52) * a3;
  v42 = v7;
  if ( 0.0 == v6 && !*(_BYTE *)(this + 64) )
  {
    v9 = 0.0;
  }
  else
  {
    if ( *(_BYTE *)(this + 64) )
    {
      v8 = *(_DWORD *)(a2 + 6004);
      v9 = 0.0;
      if ( v8 )
      {
        v7 = (double)*(int *)(v8 + 40) * *(float *)(this + 60) * v7;
        v42 = v7;
        goto LABEL_9;
      }
      v6 = *(float *)(this + 60);
    }
    v7 = v6 * v7;
    v9 = 0.0;
    v42 = v7;
  }
LABEL_9:
  if ( v7 == v9 )
    return 0;
  if ( !(unsigned __int8)sub_10203BD0(a2, a4) )
    return 0;
  v12 = *(float *)(this + 48) + *(float *)(a4 + 12);
  if ( v12 > *(float *)(a2 + 36) )
    return 0;
  v13 = *(float *)(a2 + 36) - *(float *)(a2 + 44);
  *(float *)&v44 = v13;
  v14 = *(float *)(a2 + 36);
  v41 = *(int *)(a2 + 36);
  if ( 0.0 == *(float *)(this + 44) )
    goto LABEL_25;
  v15 = v14;
  v16 = v13;
  v17 = v15;
  if ( v16 < v12 )
  {
    v16 = v12;
    *(float *)&v44 = v12;
  }
  v18 = v12 + *(float *)(this + 44);
  v19 = v16;
  v14 = v17;
  v13 = v19;
  if ( v14 <= v18 )
LABEL_25:
    v18 = v14;
  else
    *(float *)&v41 = v18;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = v18 - v13;
  v40 = v21;
  X = v21 * v42 + *(float *)a4;
  *(float *)a4 = X;
  v23 = floor(X) - (double)v20;
  v24 = (int)v23;
  *(_DWORD *)(a4 + 4) = (int)v23 + v20;
  if ( !(int)v23 )
    return 0;
  v25 = *(_DWORD *)(a2 + 40);
  v43 = (int)v23;
  if ( *(_DWORD *)(a2 + 72) - v25 < v24 )
  {
    v24 = *(_DWORD *)(a2 + 72) - v25;
    v43 = v24;
  }
  if ( !v24 )
    return 0;
  v26 = v25 + v24;
  v27 = v40 / (double)v43;
  *(_DWORD *)(a2 + 32) = (v25 + v24 + 3) / 4;
  *(_DWORD *)(a2 + 40) = v25 + v24;
  v28 = *(float *)&v44 + v27;
  v29 = *(float *)&v41;
  if ( v24 < 4 )
  {
    v38 = v28;
    v34 = *(float *)&v41;
  }
  else
  {
    v30 = v25 + 1;
    while ( 1 )
    {
      if ( v29 <= v28 )
        v28 = v29;
      v32 = v29;
      v33 = v28;
      v34 = v32;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v25 & 3) + *(_DWORD *)(a2 + 6356) * (v25 / 4))) = v33;
      v35 = v33 + v27;
      if ( v35 >= v32 )
        v35 = v34;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v30 & 3) + *(_DWORD *)(a2 + 6356) * (v30 / 4))) = v35;
      v36 = v35 + v27;
      if ( v36 >= v34 )
        v36 = v34;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((((_BYTE)v30 + 1) & 3) + *(_DWORD *)(a2 + 6356) * ((v30 + 1) / 4))) = v36;
      v37 = v36 + v27;
      if ( v37 >= v34 )
        v37 = v34;
      v25 += 4;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((((_BYTE)v30 - 2) & 3) + *(_DWORD *)(a2 + 6356) * ((v30 + 2) / 4))) = v37;
      v30 += 4;
      v38 = v37 + v27;
      if ( v25 >= v26 - 3 )
        break;
      v31 = v38;
      v29 = v34;
      v28 = v31;
    }
  }
  for ( ; v25 < v26; v38 = v38 + v27 )
  {
    v39 = (float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v25 & 3) + *(_DWORD *)(a2 + 6356) * (v25 / 4)));
    if ( v38 >= v34 )
      v38 = v34;
    ++v25;
    *v39 = v38;
  }
  return 256;
}
