int __thiscall sub_101532C0(_DWORD *this, unsigned int a2, int a3, int a4)
{
  int v5; // ecx
  int result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int *v10; // edx
  int v11; // ebx

  v5 = this[3];
  result = this[2];
  if ( v5 + a3 <= result )
  {
    v7 = v5;
    v8 = v5 & 0x1F;
    v9 = v7 >> 5;
    *(_DWORD *)(*this + 4 * v9) = (a2 << v8) | *(_DWORD *)(*this + 4 * v9) & dword_106FF918[32 * v8 + v8 + a3];
    result = 32 - v8;
    if ( 32 - v8 < a3 )
    {
      v10 = (int *)(*this + 4 * v9 + 4);
      v11 = *v10 & dword_106FF918[a3 - result];
      result = a2 >> result;
      *v10 = result | v11;
    }
    this[3] += a3;
  }
  else
  {
    this[3] = result;
    *((_BYTE *)this + 16) = 1;
  }
  return result;
}
