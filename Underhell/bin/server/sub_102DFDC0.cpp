int __thiscall sub_102DFDC0(int this, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int *v5; // ecx

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = (_DWORD *)(this + 848);
  if ( *(_DWORD *)(this + 848) != v3 )
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
        result = sub_100194B0(v5, 848);
      *v4 = v3;
    }
  }
  return result;
}
