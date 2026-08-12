bool __thiscall sub_1010CFD0(int this, int a2, int a3)
{
  bool result; // al

  result = sub_1009E900((_DWORD *)this, a2, a3);
  if ( result )
  {
    sub_1022A940("scale", 0.0020000001);
    *(float *)(this + 12) = 0.0020000001;
    return 1;
  }
  return result;
}
