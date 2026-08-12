char __thiscall sub_102257D0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  float v7; // ecx
  float v8; // edx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  float *v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  double v17; // st4
  double v18; // st7
  double v19; // st4
  double v20; // st5
  double v21; // st4
  double v22; // st7
  double v23; // st4
  double v24; // st5
  double v25; // st7
  float *v26; // [esp-10h] [ebp-80h]
  float v27; // [esp+0h] [ebp-70h]
  float v28; // [esp+0h] [ebp-70h]
  _BYTE v29[76]; // [esp+10h] [ebp-60h] BYREF
  int v30; // [esp+5Ch] [ebp-14h]
  float v31[3]; // [esp+64h] [ebp-Ch] BYREF
  int savedregs; // [esp+70h] [ebp+0h] BYREF
  int v33; // [esp+78h] [ebp+8h]
  float v34; // [esp+78h] [ebp+8h]

  v3 = *(_DWORD *)(this + 4);
  if ( v3 == -1 )
    return 1;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return 1;
  if ( !*(_DWORD *)(this + 48) )
    *(_DWORD *)(this + 48) = a2;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v7 = *(float *)(a2 + 580);
  v8 = *(float *)(a2 + 584);
  v31[2] = *(float *)(a2 + 588);
  v9 = *(_DWORD *)(this + 4);
  v31[0] = v7;
  v31[1] = v8;
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v33 = 0;
  else
    v33 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 320) + 8))(v10 + 320);
  v12 = *(_DWORD *)(this + 4);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  v26 = (float *)v11;
  v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 4))(v13 + 320);
  sub_100231A0((int)&savedregs, this, v31, v31, v14, v26, 33570827, v33, 0, (int)v29);
  if ( v29[55] )
  {
    v15 = *(_DWORD *)(this + 4);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( v30 != v16 )
      return 0;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v17 = *(float *)(this + 8) - *(float *)(a2 + 580);
  v18 = v17 * v17;
  v19 = *(float *)(this + 12) - *(float *)(a2 + 584);
  v20 = *(float *)(this + 16) - *(float *)(a2 + 588);
  v27 = v20 * v20 + v19 * v19 + v18;
  v34 = off_10689708(v27);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v21 = *(float *)(this + 20) - *(float *)(a2 + 580);
  v22 = v21 * v21;
  v23 = *(float *)(this + 24) - *(float *)(a2 + 584);
  v24 = *(float *)(this + 28) - *(float *)(a2 + 588);
  v28 = v24 * v24 + v23 * v23 + v22;
  v25 = off_10689708(v28);
  if ( v34 <= (double)*(float *)(this + 44) )
  {
    *(_DWORD *)(this + 48) = a2;
    *(float *)(this + 44) = v25;
  }
  if ( v34 > (double)*(float *)(this + 32) || v25 > *(float *)(this + 32) || v25 >= *(float *)(this + 36) )
    return 0;
  *(_DWORD *)(this + 40) = a2;
  *(float *)(this + 36) = v25;
  return 0;
}
