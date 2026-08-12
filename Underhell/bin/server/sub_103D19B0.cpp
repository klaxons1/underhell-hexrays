int __thiscall sub_103D19B0(int this, int a2)
{
  unsigned int v3; // edi
  int *v5; // ecx

  v3 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v3;
      return sub_103D17E0((_DWORD *)this);
    }
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 248);
    *(_DWORD *)(this + 248) = v3;
  }
  return sub_103D17E0((_DWORD *)this);
}
