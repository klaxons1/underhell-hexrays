char __thiscall sub_102A2840(int this)
{
  unsigned int v2; // eax
  int v3; // edi
  _DWORD *v4; // ecx
  float *v5; // eax

  sub_102A0290((void *)this);
  *(_DWORD *)(this + 156) = 0;
  v2 = *(_DWORD *)(this + 68);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    *(float *)(this + 168) = *(float *)(v3 + 580);
    *(float *)(this + 172) = *(float *)(v3 + 584);
    *(float *)(this + 176) = *(float *)(v3 + 588);
    *(float *)(this + 180) = 8.0;
  }
  v4 = *(_DWORD **)(this + 4);
  *(float *)(this + 152) = *(float *)(dword_106B31C8 + 12);
  sub_10020480(v4, 0x10000000);
  v5 = (float *)(*(int (**)(void))(**(_DWORD **)(this + 4) + 1868))();
  sub_100756F0(v5, 2.0);
  return sub_102A01C0((int *)this, (int)"TLK_PASSENGER_BEGIN_ENTRANCE", 0, 0, 0, 0);
}
