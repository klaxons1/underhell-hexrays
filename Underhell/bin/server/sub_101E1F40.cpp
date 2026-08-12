char __thiscall sub_101E1F40(int this, float a2, float a3, int a4)
{
  double v4; // st7
  char result; // al

  if ( !dword_106B321C || *(float *)(*(_DWORD *)(dword_106B321C + 28) + 44) <= 0.0 )
    return 0;
  *(float *)(this + 3556) = a2;
  v4 = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 3564) = a4;
  result = 1;
  *(float *)(this + 3560) = v4 + a3;
  return result;
}
