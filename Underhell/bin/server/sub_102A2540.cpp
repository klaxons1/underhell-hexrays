double __thiscall sub_102A2540(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v5; // eax
  float v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+Ch] [ebp-Ch] BYREF
  float v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+14h] [ebp-4h]

  v1 = this[17];
  if ( v1 == -1 )
    return -1.0;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return -1.0;
  if ( v2[1] == v3 )
    v5 = *v2;
  else
    v5 = 0;
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 540))(v5, &v7, 0);
  v6 = v7 * v7 + v8 * v8 + v9 * v9;
  return off_10689708(v6);
}
