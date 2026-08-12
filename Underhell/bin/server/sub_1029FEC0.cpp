float *__thiscall sub_1029FEC0(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = this[17];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 540))(v5, v11, 0);
  v6 = this[17];
  if ( v6 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v8 = this[17];
  v10[0] = *(float *)(v7 + 580) + v11[0];
  v10[1] = *(float *)(v7 + 584) + v11[1];
  v10[2] = *(float *)(v7 + 588) + v11[2];
  if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    return sub_1029EAC0(0, v10, a2);
  else
    return sub_1029EAC0(off_1061BE18[4 * (v8 & 0xFFF) + 1], v10, a2);
}
