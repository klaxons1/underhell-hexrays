int __thiscall sub_1021CC40(int this, float a2)
{
  double v2; // st7
  int v3; // edx
  int result; // eax

  v2 = 0.0;
  if ( a2 > 0.0 )
    v2 = a2;
  v3 = *(_DWORD *)(this + 12);
  *(float *)(this + 20) = v2;
  result = 0;
  *(float *)(this + 24) = v2 * v2;
  if ( v3 - 1 > 0 )
  {
    do
    {
      ++result;
      *(float *)(*(_DWORD *)(this + 28) + 4 * result - 4) = *(float *)(this + 24) / (double)(*(_DWORD *)(this + 12) - 1);
    }
    while ( result < *(_DWORD *)(this + 12) - 1 );
  }
  return result;
}
