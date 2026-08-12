int __thiscall sub_10022930(int this, int a2)
{
  double v2; // st7
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v2 = *(float *)(a2 + 8);
    result = *(_DWORD *)(this + 2404);
    *(float *)(this + 2556) = *(float *)(a2 + 8);
    *(float *)(result + 8) = v2;
  }
  else
  {
    result = *(_DWORD *)(this + 2404);
    *(float *)(this + 2556) = 0.0;
    *(float *)(result + 8) = 0.0;
  }
  return result;
}
