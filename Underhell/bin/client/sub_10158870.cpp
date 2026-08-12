int __thiscall sub_10158870(int this, int *a2, int a3)
{
  int v4; // eax
  int result; // eax

  *(_DWORD *)(this + 4) = a2;
  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  sub_100F0010(a2, this - 228, v4);
  result = sub_100F0C50(this - 228, this - 228, this, "particle/particle_fire");
  *(_DWORD *)(this + 8) = result;
  *(_DWORD *)(this + 3628) = 0;
  *(float *)(this + 36) = 0.06666667;
  *(float *)(this + 40) = 0.0;
  return result;
}
