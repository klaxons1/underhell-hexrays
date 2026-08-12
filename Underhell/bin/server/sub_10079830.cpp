int __thiscall sub_10079830(_DWORD *this, float a2)
{
  int v2; // esi
  int result; // eax
  int *v4; // ecx

  v2 = this[1];
  result = *(_DWORD *)(v2 + 864);
  if ( result != LODWORD(a2) )
  {
    result = this[1];
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
      *(float *)(v2 + 864) = a2;
    }
    else
    {
      v4 = *(int **)(v2 + 24);
      if ( v4 )
        result = sub_100194B0(v4, 864);
      *(float *)(v2 + 864) = a2;
    }
  }
  return result;
}
