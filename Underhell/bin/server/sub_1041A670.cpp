void __thiscall sub_1041A670(int this, float a2)
{
  bool v2; // dl

  v2 = a2 != *(float *)(this + 76);
  *(float *)(this + 76) = a2;
  if ( -1.0 != a2 )
  {
    if ( a2 < (double)*(float *)(this + 72) )
      *(float *)(this + 76) = *(float *)(this + 72);
    if ( v2 )
      sub_1041A2B0((_DWORD *)this);
  }
}
