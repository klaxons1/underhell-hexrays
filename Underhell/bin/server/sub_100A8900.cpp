char __thiscall sub_100A8900(int this)
{
  double v1; // st7
  double v2; // st6
  double v3; // st7
  char result; // al

  v1 = *(float *)(this + 908);
  *(_BYTE *)(this + 916) = v1 > 0.0;
  *(float *)(this + 912) = v1 * v1;
  v2 = *(float *)(this + 948);
  *(_BYTE *)(this + 956) = v2 > 0.0;
  *(float *)(this + 952) = v2 * v2;
  v3 = *(float *)(this + 936) * *(float *)(this + 936);
  *(_BYTE *)(this + 944) = *(float *)(this + 936) > 0.0;
  *(float *)(this + 940) = v3;
  result = *(_BYTE *)(this + 876);
  *(_BYTE *)(this + 877) = result;
  return result;
}
