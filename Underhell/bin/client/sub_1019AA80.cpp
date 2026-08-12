float *__thiscall sub_1019AA80(int this, int a2)
{
  float *result; // eax
  int v4; // esi
  float *v5; // edi

  result = *(float **)(this + 1228);
  if ( result && *((_DWORD *)result + 1020) )
  {
    sub_1001CBD0(result + 935, (float *)(this + 3468));
    v4 = 0;
    v5 = (float *)(this + 3480);
    do
    {
      result = sub_1001CBD0((float *)(v4 + *(_DWORD *)(this + 1228)), v5);
      v4 += 340;
      v5 += 3;
    }
    while ( v4 < 2040 );
  }
  return result;
}
