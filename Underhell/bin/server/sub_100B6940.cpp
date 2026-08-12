double __thiscall sub_100B6940(int this, float *a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v7; // edi
  float v8; // [esp+4h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 3644);
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5) && *v4 )
  {
    if ( v4[1] == v5 )
      v7 = *v4;
    else
      v7 = 0;
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10424590(this + 580, this + 3708, v7 + 580, a2, &v8);
    return v8;
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *a2 = *(float *)(this + 580);
    a2[1] = *(float *)(this + 584);
    a2[2] = *(float *)(this + 588);
    return 0.0;
  }
}
