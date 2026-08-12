void __thiscall sub_10198C10(int this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st6
  int *v5; // eax
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // rt1
  double v11; // st5
  double v12; // st6
  double v13; // rt2
  double v14; // st5
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  int v20; // eax
  float *v21; // eax
  int v22; // eax
  float *v23; // eax
  int v24; // eax
  float *v25; // eax
  float *v26; // eax
  int *v27; // ecx
  int *v28; // ecx
  int *v29; // ecx
  int *v30; // ecx
  double v31; // st7
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int i; // edi
  float *v36; // ecx
  float *v37; // ecx
  float v38; // [esp+Ch] [ebp-48h]
  _DWORD v39[4]; // [esp+24h] [ebp-30h]
  float v40[2]; // [esp+34h] [ebp-20h] BYREF
  float v41; // [esp+3Ch] [ebp-18h]
  float v42; // [esp+40h] [ebp-14h] BYREF
  float v43; // [esp+44h] [ebp-10h]
  float v44; // [esp+48h] [ebp-Ch]
  float v45; // [esp+4Ch] [ebp-8h]
  char v46; // [esp+53h] [ebp-1h]
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  v2 = *(float *)(this + 12);
  v3 = *(_DWORD *)(this + 52);
  v42 = *(float *)(this + 12);
  v4 = *(float *)(this + 16);
  v43 = *(float *)(this + 16);
  v44 = *(float *)(this + 20) + 25.0;
  switch ( v3 )
  {
    case 0:
      v43 = v4 - 16.0;
      break;
    case 1:
      v42 = v2 + 16.0;
      break;
    case 2:
      v43 = v4 + 16.0;
      break;
    case 3:
      v42 = v2 - 16.0;
      break;
    default:
      break;
  }
  v5 = (int *)sub_1019E4A0(&v42, 1, 10000.0, 0);
  *(_DWORD *)(this + 48) = v5;
  if ( v5 )
    sub_1018F8F0(v5, this);
  else
    DevMsg(
      "ERROR: Unconnected ladder bottom at ( %g, %g, %g )\n",
      *(float *)(this + 12),
      *(float *)(this + 16),
      *(float *)(this + 20));
  v6 = *(_DWORD *)(this + 52);
  v7 = *(float *)(this + 4);
  v8 = *(float *)this;
  v9 = *(float *)(this + 8) + 25.0;
  v42 = *(float *)this;
  v10 = v8;
  v11 = v7;
  v12 = v10;
  v43 = v11;
  v13 = v11;
  v14 = v9;
  v15 = v13;
  v44 = v14;
  switch ( v6 )
  {
    case 0:
      v16 = v15 - 16.0;
      v17 = 16.0;
      v43 = v16;
      break;
    case 1:
      v17 = 16.0;
      v42 = v12 + 16.0;
      break;
    case 2:
      v18 = v15 + 16.0;
      v17 = 16.0;
      v43 = v18;
      break;
    case 3:
      v17 = 16.0;
      v42 = v12 - 16.0;
      break;
    default:
      v17 = 16.0;
      break;
  }
  v19 = v17 + *(float *)(this + 8) - *(float *)(this + 20);
  if ( v19 > 120.0 )
    v19 = 120.0;
  v45 = v19;
  switch ( v6 )
  {
    case 0:
      v20 = 2;
      break;
    case 1:
      v20 = 3;
      break;
    case 3:
      v20 = 1;
      break;
    default:
      v20 = 0;
      break;
  }
  v38 = v19;
  v21 = sub_10198A10((int)&savedregs, &v42, v20, 75.0, v38, 0, 0);
  *(_DWORD *)(this + 32) = v21;
  if ( v21 == *(float **)(this + 48) )
    *(_DWORD *)(this + 32) = 0;
  switch ( *(_DWORD *)(this + 52) )
  {
    case 0:
      v22 = 3;
      break;
    case 2:
      v22 = 1;
      break;
    case 3:
      v22 = 2;
      break;
    default:
      v22 = 0;
      break;
  }
  v23 = sub_10198A10((int)&savedregs, &v42, v22, 75.0, v45, 0, 0);
  *(_DWORD *)(this + 36) = v23;
  if ( v23 == *(float **)(this + 48) )
    *(_DWORD *)(this + 36) = 0;
  switch ( *(_DWORD *)(this + 52) )
  {
    case 0:
      v24 = 1;
      break;
    case 1:
      v24 = 2;
      break;
    case 2:
      v24 = 3;
      break;
    default:
      v24 = 0;
      break;
  }
  v25 = sub_10198A10((int)&savedregs, &v42, v24, 75.0, v45, 0, 0);
  *(_DWORD *)(this + 40) = v25;
  if ( v25 == *(float **)(this + 48) )
    *(_DWORD *)(this + 40) = 0;
  v26 = sub_10198A10((int)&savedregs, &v42, *(_DWORD *)(this + 52), 150.0, v45, 0, 0);
  *(_DWORD *)(this + 44) = v26;
  if ( v26 == *(float **)(this + 48) )
    *(_DWORD *)(this + 44) = 0;
  if ( !*(_DWORD *)(this + 32) && !*(_DWORD *)(this + 36) && !*(_DWORD *)(this + 40) )
    DevMsg(
      "ERROR: Unconnected ladder top at ( %g, %g, %g )\n",
      *(float *)this,
      *(float *)(this + 4),
      *(float *)(this + 8));
  v27 = *(int **)(this + 32);
  if ( v27 )
    sub_1018F980(v27, this);
  v28 = *(int **)(this + 36);
  if ( v28 )
    sub_1018F980(v28, this);
  v29 = *(int **)(this + 40);
  if ( v29 )
    sub_1018F980(v29, this);
  v30 = *(int **)(this + 44);
  if ( v30 )
  {
    sub_1018F980(v30, this);
    sub_1019C170(*(_DWORD *)(this + 44));
  }
  v31 = *(float *)(this + 20) + 5.0;
  v32 = *(_DWORD *)(this + 36);
  v33 = *(_DWORD *)(this + 40);
  v39[0] = *(_DWORD *)(this + 32);
  v34 = *(_DWORD *)(this + 44);
  v45 = v31;
  v46 = 0;
  v39[1] = v32;
  v39[2] = v33;
  v39[3] = v34;
  for ( i = 0; i < 4; ++i )
  {
    v36 = (float *)v39[i];
    if ( v36 )
    {
      sub_1018AE60(v36, (float *)this, v40);
      v31 = v41;
      if ( v45 >= (double)v41 )
      {
        v31 = v45;
      }
      else
      {
        v46 = 1;
        v45 = v41;
      }
    }
  }
  if ( v46 )
    *(float *)(this + 8) = v31;
  v37 = *(float **)(this + 48);
  if ( v37 )
  {
    sub_1018AE60(v37, (float *)(this + 12), v40);
    if ( *(float *)(this + 20) - v41 > 72.0 )
      sub_1018F880(*(int **)(this + 48), this);
  }
}
