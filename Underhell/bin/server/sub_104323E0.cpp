int __thiscall sub_104323E0(int this, float a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  v3 = abs32((int)(a2 * 2047.0));
  if ( v3 > 0x7FF )
    v3 = 2047;
  v4 = *(_DWORD *)(this + 12);
  if ( v4 + 1 > *(_DWORD *)(this + 8) )
    *(_BYTE *)(this + 16) = 1;
  if ( !*(_BYTE *)(this + 16) )
  {
    v5 = (_BYTE *)(*(_DWORD *)this + (v4 >> 3));
    v6 = 1 << (v4 & 7);
    if ( a2 > -0.0004885197850512946 )
      *v5 &= ~v6;
    else
      *v5 |= v6;
    ++*(_DWORD *)(this + 12);
  }
  return sub_101532C0((_DWORD *)this, v3, 11, 1);
}
