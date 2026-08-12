float *__thiscall sub_102A71D0(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // esi
  float *result; // eax
  double v8; // st6
  double v9; // rt0
  _BYTE v10[12]; // [esp+8h] [ebp-18h] BYREF
  float v11[3]; // [esp+14h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 280))(this, v10, 0);
  v3 = this[17];
  if ( v3 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_10424E70(v10, v4 + 704, v11);
  v5 = this[17];
  if ( v5 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  result = a2;
  v8 = *(float *)(v6 + 584) + v11[1];
  v9 = *(float *)(v6 + 588) + v11[2];
  *a2 = *(float *)(v6 + 580) + v11[0];
  a2[1] = v8;
  a2[2] = v9;
  return result;
}
