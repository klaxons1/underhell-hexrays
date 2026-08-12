BOOL __thiscall sub_10312580(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  BOOL result; // eax
  _BYTE v10[8]; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+Ch] [ebp-4h]

  v2 = this[939];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[939] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 540))(v4, v10, 0);
  v5 = this[939];
  if ( v5 == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (this[939] & 0xFFF) + 1];
  v7 = *(_DWORD *)(v6 + 308);
  result = v7 != -1 && (v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 308) & 0xFFF) + 1], v8[1] == v7 >> 12) && *v8
        || fabs(v11) >= 15.0;
  return result;
}
