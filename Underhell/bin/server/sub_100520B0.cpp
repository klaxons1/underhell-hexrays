char __thiscall sub_100520B0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v6; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 0;
  v6 = v3[1] == v4 ? *v3 : 0;
  if ( (*(_DWORD *)(v6 + 256) & 0x8000) != 0
    || *(_BYTE *)(this + 109) && *(_BYTE *)(this + 148) && !sub_1001ED80((float *)(this + 144)) )
  {
    return 0;
  }
  *(_BYTE *)(this + 109) = 0;
  return 1;
}
