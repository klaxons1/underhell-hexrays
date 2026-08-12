int __thiscall sub_101FFAA0(int this, float a2)
{
  double v2; // st7
  int result; // eax
  float *v4; // esi
  int *v5; // ecx
  float v6; // [esp+8h] [ebp+8h]

  v2 = 10.0;
  if ( a2 <= 10.0 )
  {
    v2 = a2;
    if ( a2 < 0.0 )
      v2 = 0.0;
  }
  result = *(_DWORD *)(this + 860);
  v6 = v2;
  v4 = (float *)(this + 860);
  if ( result != LODWORD(v6) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v4 = v6;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 860);
      *v4 = v6;
    }
  }
  return result;
}
