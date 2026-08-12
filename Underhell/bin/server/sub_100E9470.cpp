int __thiscall sub_100E9470(_DWORD *this, int a2, float a3)
{
  int result; // eax

  if ( -1.0 == a3 )
    result = -1;
  else
    result = (int)(a3 / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( a2 >= 0 )
    *(_DWORD *)(this[36] + 16 * a2 + 12) = result;
  else
    this[33] = result;
  return result;
}
