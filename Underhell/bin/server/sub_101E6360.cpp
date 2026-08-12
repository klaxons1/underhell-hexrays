int __thiscall sub_101E6360(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax

  v3 = *this;
  if ( *this == -1 || (v4 = &off_1061BE18[4 * (*this & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( v5 != a2 )
  {
    (*(void (__thiscall **)(unsigned int *, unsigned int *))*(this - 1))(this - 1, this);
    if ( a2 )
    {
      *this = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      return a2;
    }
    *this = -1;
  }
  return a2;
}
