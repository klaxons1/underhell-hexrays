float *__thiscall sub_102EC4C0(int this, int a2)
{
  float *result; // eax
  int *v4; // ecx

  if ( *(_BYTE *)(this + 801) )
  {
    result = (float *)this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = (float *)sub_100194B0(v4, 801);
    }
    *(_BYTE *)(this + 801) = 0;
    if ( *(_BYTE *)(this + 800) )
      return sub_10284530((float *)(this + 804), (float *)(dword_106B31C8 + 12));
  }
  return result;
}
