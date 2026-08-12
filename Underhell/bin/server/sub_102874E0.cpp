int __thiscall sub_102874E0(int this, float a2)
{
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx
  float v6; // [esp+10h] [ebp+8h]

  if ( *(_DWORD *)(this + 896) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 896);
    }
    *(float *)(this + 896) = a2;
  }
  result = *(int *)(this + 896);
  v6 = *(float *)(this + 916) * *(float *)&result;
  if ( result != LODWORD(v6) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 896) = v6;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        *(float *)&result = COERCE_FLOAT(sub_100194B0(v5, 896));
      *(float *)(this + 896) = v6;
    }
  }
  return result;
}
