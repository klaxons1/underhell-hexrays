int __thiscall sub_1011FF00(int *this, int a2)
{
  int v2; // edi
  int v3; // edx
  float *i; // esi

  v2 = this[3];
  v3 = 0;
  if ( v2 <= 0 )
    return sub_1011FE70(this, v2, (_DWORD *)a2);
  for ( i = (float *)(*this + 12); *i <= (double)*(float *)(a2 + 12); i += 5 )
  {
    if ( ++v3 >= v2 )
      return sub_1011FE70(this, v2, (_DWORD *)a2);
  }
  return sub_1011FE70(this, v3, (_DWORD *)a2);
}
