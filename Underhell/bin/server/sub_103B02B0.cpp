int __thiscall sub_103B02B0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[916] = *(float *)(a2 + 8);
  else
    this[916] = 0.0;
  return result;
}
