void __thiscall sub_100DD660(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  float v6[3]; // [esp+8h] [ebp-18h] BYREF
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( *(float *)(this + 476) != *a2 || *(float *)(this + 480) != a2[1] || *(float *)(this + 484) != a2[2] )
  {
    sub_100E98A0(4);
    *(_DWORD *)(this + 252) &= ~0x1000u;
    *(float *)(this + 476) = *a2;
    *(float *)(this + 480) = a2[1];
    *(float *)(this + 484) = a2[2];
    v3 = *(_DWORD *)(this + 308);
    if ( v3 != -1
      && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v3 >> 12)
      && (v5 = *v4) != 0 )
    {
      if ( (*(_DWORD *)(v5 + 252) & 0x1000) != 0 )
        sub_100DAFD0(*v4);
      v7[0] = *a2 - *(float *)(v5 + 476);
      v7[1] = a2[1] - *(float *)(v5 + 480);
      v7[2] = a2[2] - *(float *)(v5 + 484);
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(v5);
      sub_10421C60(v7, v5 + 500, v6);
      sub_100D9590((float *)(this + 592), v6);
    }
    else
    {
      sub_100D9590((float *)(this + 592), a2);
    }
  }
}
