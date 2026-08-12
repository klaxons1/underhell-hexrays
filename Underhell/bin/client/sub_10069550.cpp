int __thiscall sub_10069550(int (__thiscall ***this)(int, float *), int a2, float *a3)
{
  float *v3; // esi
  unsigned int v4; // ebx
  float *v5; // edx
  int result; // eax

  v3 = (float *)&this[3 * a2];
  v4 = 12;
  v5 = a3;
  result = (char *)v3 - (char *)a3;
  while ( *(_DWORD *)((char *)v5 + result) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      return result;
  }
  result = (**(this - 1))((int)(this - 1), v3);
  *v3 = *a3;
  v3[1] = a3[1];
  v3[2] = a3[2];
  return result;
}
