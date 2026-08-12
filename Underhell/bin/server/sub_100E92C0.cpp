double __thiscall sub_100E92C0(_DWORD *this, int a2)
{
  if ( a2 )
    return (double)*(int *)(this[36] + 16 * sub_100E91A0(this, a2) + 12) * *(float *)(dword_106B31C8 + 28);
  else
    return (double)(int)this[33] * *(float *)(dword_106B31C8 + 28);
}
