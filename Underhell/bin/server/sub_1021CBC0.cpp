int __thiscall sub_1021CBC0(int this, int a2)
{
  int result; // eax
  int v3; // edx

  *(_DWORD *)(this + 12) = a2;
  result = 0;
  if ( a2 - 1 > 0 )
  {
    v3 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(this + 16) + 8 * result) = v3 + *(_DWORD *)(this + 8);
      *(_DWORD *)(*(_DWORD *)(this + 16) + 8 * result++ + 4) = *(_DWORD *)(this + 8) + v3 + 36;
      v3 += 36;
      *(float *)(*(_DWORD *)(this + 28) + 4 * result - 4) = *(float *)(this + 24) / (double)(*(_DWORD *)(this + 12) - 1);
    }
    while ( result < *(_DWORD *)(this + 12) - 1 );
  }
  return result;
}
