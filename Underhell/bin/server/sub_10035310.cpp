int __thiscall sub_10035310(int this, float a2)
{
  int result; // eax
  float *v3; // esi
  int *v4; // ecx

  result = *(_DWORD *)(this + 128);
  v3 = (float *)(this + 128);
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
        result = sub_100194B0(v4, 128);
      *v3 = a2;
    }
  }
  return result;
}
