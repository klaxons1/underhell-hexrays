int __thiscall sub_100BD660(int this, int a2, int a3, int a4)
{
  double v5; // st7
  int result; // eax

  sub_100E2C30(a2, a3, a4);
  if ( *(_DWORD *)(this + 888) )
    sub_10103660();
  v5 = 0.0;
  result = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 868) = 0.0;
  *(float *)(this + 872) = 0.0;
  *(float *)(this + 876) = 0.0;
  if ( (result & 1) != 0 )
  {
    result = sub_100DAE60(this);
    v5 = 0.0;
  }
  *(float *)(this + 880) = *(float *)(this + 588);
  *(float *)(this + 884) = v5;
  return result;
}
