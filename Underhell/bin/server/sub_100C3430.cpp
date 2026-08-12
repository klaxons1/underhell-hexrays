int __thiscall sub_100C3430(int this, float a2, float a3)
{
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  if ( *(_DWORD *)(this + 1064) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 1064);
    }
    *(float *)(this + 1064) = a2;
  }
  result = *(_DWORD *)(this + 1068);
  if ( result != LODWORD(a3) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1068) = a3;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 1068);
      *(float *)(this + 1068) = a3;
    }
  }
  return result;
}
