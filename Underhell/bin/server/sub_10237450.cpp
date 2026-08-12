int __thiscall sub_10237450(int this, int a2)
{
  double v2; // st7
  int result; // eax
  float *v4; // esi
  int *v5; // ecx
  float v6; // [esp+8h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  result = *(_DWORD *)(this + 1100);
  v6 = v2;
  v4 = (float *)(this + 1100);
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
        result = sub_100194B0(v5, 1100);
      *v4 = v6;
    }
  }
  return result;
}
