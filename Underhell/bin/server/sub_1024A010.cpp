int __thiscall sub_1024A010(int this, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // edi
  int *v5; // ecx

  result = *(_DWORD *)(this + 872);
  v3 = (_DWORD *)(this + 872);
  v4 = result + a2;
  if ( result != result + a2 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v3 = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 872);
      *v3 = v4;
    }
  }
  return result;
}
