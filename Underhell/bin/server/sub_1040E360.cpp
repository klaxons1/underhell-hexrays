int __thiscall sub_1040E360(int this, int a2, float a3)
{
  int result; // eax
  int *v5; // ecx

  result = *(_DWORD *)(this + 116);
  if ( result != a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 116);
    }
    result = a2;
    *(_DWORD *)(this + 116) = a2;
  }
  *(float *)(this + 2156) = a3;
  return result;
}
