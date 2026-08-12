float *__thiscall sub_101EE850(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx

  v2 = *(_DWORD *)(this + 4268);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4268) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(this + 24);
          if ( v4 )
            sub_100194B0(v4, 4268);
        }
        *(_DWORD *)(this + 4268) = -1;
      }
    }
  }
  if ( *(_DWORD *)(this + 4284) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 4284);
    }
    *(float *)(this + 4284) = 0.0;
  }
  return sub_101E7C30((float *)(this + 4272), &flt_106F1CA8);
}
