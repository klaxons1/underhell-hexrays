int __thiscall sub_1024A1C0(int this)
{
  int *v1; // esi
  int v2; // edi
  int result; // eax
  int *v4; // ecx

  v1 = (int *)(this + 876);
  v2 = *(_DWORD *)(this + 876) + 1;
  result = this;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
    *v1 = v2;
  }
  else
  {
    v4 = *(int **)(this + 24);
    if ( v4 )
      result = sub_100194B0(v4, 876);
    *v1 = v2;
  }
  return result;
}
