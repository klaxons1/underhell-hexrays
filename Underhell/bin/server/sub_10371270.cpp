_DWORD *__thiscall sub_10371270(int this, int a2)
{
  if ( sub_100697A0((_DWORD *)this, 103, 0)
    && a2 == 13
    && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4588) )
  {
    *(float *)(this + 4588) = *(float *)(dword_106B31C8 + 12) + 6.0;
  }
  return sub_1002D020((_DWORD *)this, a2);
}
