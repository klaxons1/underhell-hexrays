bool __thiscall sub_1010D0B0(int this, int a2, int a3)
{
  bool result; // al

  result = sub_1009E900((_DWORD *)this, a2, a3);
  if ( result )
  {
    sub_1022A940("scale", 2.0);
    *(float *)(this + 12) = 2.0;
    return 1;
  }
  return result;
}
