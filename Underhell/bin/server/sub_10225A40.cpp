char __thiscall sub_10225A40(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  float v7; // ecx
  float v8; // edx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  float *v14; // eax
  float *v15; // [esp-18h] [ebp-80h]
  _BYTE v16[84]; // [esp+8h] [ebp-60h] BYREF
  float v17[3]; // [esp+5Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF
  int v19; // [esp+70h] [ebp+8h]

  v3 = this[1];
  if ( v3 == -1 )
    return 1;
  v4 = &off_1061BE18[4 * (this[1] & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return 1;
  if ( this[2] == -1
    || off_1061BE18[4 * (this[2] & 0xFFF) + 2] != this[2] >> 12
    || !off_1061BE18[4 * (this[2] & 0xFFF) + 1] )
  {
    if ( a2 )
      this[2] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      this[2] = -1;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v7 = *(float *)(a2 + 584);
  v8 = *(float *)(a2 + 588);
  v17[0] = *(float *)(a2 + 580);
  v9 = this[1];
  v17[1] = v7;
  v17[2] = v8;
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 320) + 8))(v10 + 320);
  v12 = this[1];
  if ( v12 == -1 || off_1061BE18[4 * (this[1] & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (this[1] & 0xFFF) + 1];
  v15 = (float *)v11;
  v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 4))(v13 + 320);
  sub_100231A0((int)&savedregs, a2, v17, v17, v14, v15, 33570827, v19, 0, (int)v16);
  if ( v16[55] )
    return 0;
  this[2] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  return 1;
}
