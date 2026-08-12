void __thiscall sub_1021EAD0(int this, int a2, int a3, int a4)
{
  double v5; // st6
  double v6; // st7
  bool v7; // zf
  double v8; // st7
  int v9; // ebx
  int v10; // ecx
  float *v11; // edx
  float *v12; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int v17; // [esp+28h] [ebp-1ACh]
  float *v18; // [esp+28h] [ebp-1ACh]
  float v19; // [esp+2Ch] [ebp-1A8h]
  float v20; // [esp+30h] [ebp-1A4h]
  float v21; // [esp+34h] [ebp-1A0h] BYREF
  float v22; // [esp+38h] [ebp-19Ch]
  float v23; // [esp+3Ch] [ebp-198h]
  int v24; // [esp+40h] [ebp-194h]
  float v25; // [esp+44h] [ebp-190h]
  float v26; // [esp+48h] [ebp-18Ch]
  float v27; // [esp+4Ch] [ebp-188h]
  float v28; // [esp+50h] [ebp-184h]
  __m128 v29[3]; // [esp+54h] [ebp-180h] BYREF
  float v30; // [esp+84h] [ebp-150h]
  float v31; // [esp+94h] [ebp-140h]
  float v32; // [esp+A4h] [ebp-130h]
  __m128 v33[3]; // [esp+114h] [ebp-C0h] BYREF
  float v34; // [esp+144h] [ebp-90h]
  float v35; // [esp+154h] [ebp-80h]
  float v36; // [esp+164h] [ebp-70h]

  v19 = *(float *)(this + 64);
  v20 = *(float *)(this + 68);
  if ( ((1 << *(_DWORD *)(this + 52)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 64) <= 1.0 )
    {
      if ( *(float *)(this + 64) >= 0.0 )
        v19 = *(float *)(this + 64);
      else
        v19 = 0.0;
      v5 = 1.0;
      v6 = 0.0;
    }
    else
    {
      v5 = 1.0;
      v6 = 0.0;
      v19 = 1.0;
    }
    if ( v5 >= *(float *)(this + 68) )
    {
      if ( v6 <= *(float *)(this + 68) )
        v6 = *(float *)(this + 68);
    }
    else
    {
      v6 = v5;
    }
    v20 = v6;
  }
  sub_101F9040((float *)a2, *(_DWORD *)(this + 44), *(float *)(a2 + 36), v29);
  sub_101F9040((float *)a2, *(_DWORD *)(this + 48), *(float *)(a2 + 36), v33);
  v7 = *(_BYTE *)(this + 74) == 0;
  v21 = v30;
  v22 = v31;
  v23 = v32;
  v25 = v34;
  v26 = v35;
  v27 = v36;
  v8 = v30 * v34 + v31 * v35 + v32 * v36;
  v28 = v8;
  if ( v7 || *(_BYTE *)(this + 72) || v8 >= *(float *)(this + 56) && v8 <= *(float *)(this + 60) )
  {
    v9 = 0;
    v17 = 0;
    if ( *(int *)(a2 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(this + 72) )
          goto LABEL_23;
        v10 = v9 & 3;
        v11 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v10 + v9 / 4 * *(_DWORD *)(a2 + 6324)));
        v12 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v10 + v9 / 4 * *(_DWORD *)(a2 + 6332)));
        v13 = v11[4] - v12[4];
        v14 = v11[8] - v12[8];
        v21 = *v11 - *v12;
        v22 = v13;
        v23 = v14;
        off_103EDFF0(&v21);
        v15 = v27 * v23 + v26 * v22 + v25 * v21;
        if ( !*(_BYTE *)(this + 74) || v15 >= *(float *)(this + 56) && v15 <= *(float *)(this + 60) )
          break;
        v9 = v17;
LABEL_29:
        v17 = ++v9;
        if ( v9 >= *(_DWORD *)(a2 + 40) )
          return;
      }
      v9 = v17;
LABEL_23:
      v18 = (float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 52) + 6068)
                    + 4 * ((v9 & 3) + *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 52) + 6324) * (v9 / 4)));
      v16 = sub_100260E0(v28, *(float *)(this + 56), *(float *)(this + 60), v19, v20);
      if ( *(_BYTE *)(this + 73) )
        v16 = v16 * *v18;
      if ( ((1 << *(_DWORD *)(this + 52)) & 0x4800) != 0 )
      {
        v24 = (int)v16;
        *v18 = (float)(int)v16;
      }
      else
      {
        *v18 = v16;
      }
      goto LABEL_29;
    }
  }
}
