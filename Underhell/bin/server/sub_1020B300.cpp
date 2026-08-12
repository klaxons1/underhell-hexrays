int __thiscall sub_1020B300(int this)
{
  double v1; // st7
  int result; // eax
  int *v4; // ecx

  v1 = 0.0;
  result = *(_DWORD *)(this + 1072);
  if ( result != COERCE_INT(0.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1072) = 0.0;
      *(float *)(this + 1420) = 0.0;
      return result;
    }
    v4 = *(int **)(this + 24);
    if ( v4 )
    {
      result = sub_100194B0(v4, 1072);
      v1 = 0.0;
    }
    *(float *)(this + 1072) = v1;
  }
  *(float *)(this + 1420) = v1;
  return result;
}
