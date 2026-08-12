int __thiscall sub_100FA790(int this, float a2)
{
  int result; // eax
  float *v3; // esi
  int *v4; // ecx

  result = *(_DWORD *)(this + 928);
  v3 = (float *)(this + 928);
  if ( result != LODWORD(a2) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v3 = a2;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 928);
      *v3 = a2;
    }
  }
  return result;
}
