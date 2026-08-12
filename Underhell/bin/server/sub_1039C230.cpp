int __thiscall sub_1039C230(int this, float a2, float a3)
{
  if ( !*(_DWORD *)(this + 3844) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3852) )
    return 0;
  if ( a3 < 250.0 )
    return 38;
  if ( a3 > 800.0 )
    return 39;
  if ( a2 < 0.6 )
    return 40;
  *(_DWORD *)(this + 3864) = sub_1039BCB0((_BYTE *)this);
  return 22;
}
