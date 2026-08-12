void __thiscall sub_10322BC0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  float v5; // edx
  float v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 3736);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  if ( *(float *)(v4 + 580) != *(float *)(this + 3708)
    || *(float *)(v4 + 584) != *(float *)(this + 3712)
    || *(float *)(v4 + 588) != *(float *)(this + 3716) )
  {
    v5 = *(float *)(v4 + 580);
    v6[1] = *(float *)(v4 + 584);
    v6[0] = v5;
    v6[2] = *(float *)(v4 + 588);
    sub_10322AE0((float *)(this + 3708), v6);
    sub_101126F0((int *)(this + 320));
  }
}
