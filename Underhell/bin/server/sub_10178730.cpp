float *sub_10178730()
{
  float *v0; // esi
  float *result; // eax
  float *v2; // eax

  v2 = (float *)sub_10184390(576);
  if ( !v2 )
    return 0;
  v0 = v2;
  *(_DWORD *)v2 = &CPositionInterpolator_Rope::`vftable';
  sub_1021CE10(v2 + 16, 10, v2 + 106, v2 + 124);
  *((_DWORD *)v0 + 2) = &CRopePhysics<10>::`vftable';
  *((_DWORD *)v0 + 134) = &CRopeDelegate::`vftable';
  v0[141] = 0.0;
  *((_BYTE *)v0 + 568) = 0;
  *((_DWORD *)v0 + 143) = 5;
  v0[135] = 1.0e24;
  v0[136] = 1.0e24;
  v0[137] = 1.0e24;
  result = v0;
  v0[138] = 1.0e24;
  v0[139] = 1.0e24;
  v0[140] = 1.0e24;
  return result;
}
