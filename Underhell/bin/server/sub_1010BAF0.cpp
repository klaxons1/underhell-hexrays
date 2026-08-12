double __thiscall sub_1010BAF0(_DWORD *this)
{
  int v1; // ecx
  double result; // st7

  v1 = this[5];
  for ( result = 0.0; v1; v1 = *(_DWORD *)(v1 + 24) )
  {
    if ( result < *(float *)(v1 + 12) )
      result = *(float *)(v1 + 12);
  }
  return result;
}
