int __thiscall sub_10287580(int this, float a2)
{
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx
  float v6; // [esp+10h] [ebp+8h]

  if ( *(_DWORD *)(this + 900) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 900);
    }
    *(float *)(this + 900) = a2;
  }
  result = *(int *)(this + 900);
  v6 = *(float *)&result / *(float *)(this + 916);
  if ( result != LODWORD(v6) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 900) = v6;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        *(float *)&result = COERCE_FLOAT(sub_100194B0(v5, 900));
      *(float *)(this + 900) = v6;
    }
  }
  return result;
}
