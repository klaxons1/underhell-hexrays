double __thiscall sub_100A67C0(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  double result; // st7
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(this + 100);
  if ( v3 == -1 )
    return *(float *)(this + 96);
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 100) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return *(float *)(this + 96);
  sub_100A6560(this, v9, a2);
  v5 = *(_DWORD *)(this + 100);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 100) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 100) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 536))(v6, v8);
  result = v9[1] * v8[1] + v8[0] * v9[0] + v9[2] * v8[2];
  if ( result < 0.0 )
    result = 0.0;
  if ( *(float *)(this + 96) > 0.0 )
    return result + *(float *)(this + 96);
  return result;
}
