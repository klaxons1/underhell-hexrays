void __stdcall sub_100B5730(int a1, float *a2)
{
  int v2; // edi
  int v3; // edi

  if ( sub_101ACCC0(a1) )
  {
    v2 = sub_101ACCC0(a1);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    *a2 = *(float *)(a1 + 580) - *(float *)(v2 + 580);
    a2[1] = *(float *)(a1 + 584) - *(float *)(v2 + 584);
    a2[2] = *(float *)(a1 + 588) - *(float *)(v2 + 588);
    off_10689714();
  }
  else if ( sub_101ACC90(a1) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v3 = sub_101ACC90(a1);
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    *a2 = *(float *)(v3 + 580) - *(float *)(a1 + 580);
    a2[1] = *(float *)(v3 + 584) - *(float *)(a1 + 584);
    a2[2] = *(float *)(v3 + 588) - *(float *)(a1 + 588);
    off_10689714();
  }
  else
  {
    *a2 = 1.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    off_10689714();
  }
}
