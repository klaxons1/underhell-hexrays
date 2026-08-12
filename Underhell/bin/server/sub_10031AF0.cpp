int __thiscall sub_10031AF0(int this)
{
  int result; // eax
  float *v2; // esi
  int *v3; // ecx

  result = *(_DWORD *)(this + 864);
  v2 = (float *)(this + 864);
  if ( result != COERCE_INT(0.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = 0.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 864);
      *v2 = 0.0;
    }
  }
  return result;
}
