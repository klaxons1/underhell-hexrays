int __thiscall sub_100DD800(int this, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int *v5; // ecx

  result = a2;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = (_DWORD *)(this + 771);
  if ( *(_DWORD *)(this + 771) != v3 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v4 = v3;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 771);
      *v4 = v3;
    }
  }
  return result;
}
