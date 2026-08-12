double __stdcall sub_100D5EA0(int a1)
{
  double result; // st7
  int v2; // eax
  int v3; // ecx

  result = 0.0;
  v2 = *(_DWORD *)(a1 + 8) & 4;
  v3 = *(_DWORD *)(a1 + 8) & 1;
  if ( (*(_DWORD *)(a1 + 8) & 2) != 0 )
  {
    if ( !v2 )
    {
      if ( v3 )
      {
        result = 0.5;
        *(_DWORD *)(a1 + 8) = v3;
        return result;
      }
LABEL_8:
      result = 0.0;
      *(_DWORD *)(a1 + 8) = v3;
      return result;
    }
    if ( v3 )
    {
      result = 0.75;
      *(_DWORD *)(a1 + 8) = v3;
      return result;
    }
    result = 0.25;
  }
  else if ( !v2 )
  {
    if ( v3 )
    {
      result = 1.0;
      *(_DWORD *)(a1 + 8) = v3;
      return result;
    }
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 8) = v3;
  return result;
}
