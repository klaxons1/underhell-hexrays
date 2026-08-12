int __thiscall sub_10128160(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // ecx

  result = this[3];
  if ( result < a2 )
  {
    v4 = a2 - result;
    v5 = this[3];
    if ( a2 != result )
    {
      v6 = this[1];
      if ( a2 > v6 )
        sub_1010AFF0(this, a2 - v6);
      this[3] += v4;
      v7 = *this;
      result = this[3] - v5 - v4;
      this[4] = *this;
      if ( result > 0 && v4 > 0 )
        return (int)memcpy((void *)(v7 + 4 * (v5 + v4)), (const void *)(v7 + 4 * v5), 4 * result);
    }
  }
  return result;
}
