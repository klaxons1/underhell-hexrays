int __cdecl sub_10020230(float *a1, _DWORD *a2)
{
  int result; // eax

  result = *((_DWORD *)a1 + 1) - a2[1];
  if ( !result )
  {
    if ( *((_BYTE *)a1 + 8) )
    {
      if ( !*((_BYTE *)a2 + 8) )
        return -1;
      if ( a1[3] < 0.0 && *((float *)a2 + 3) < 0.0 )
        return 0;
      if ( a1[3] < 0.0 )
        return 1;
      if ( *((float *)a2 + 3) < 0.0 || a1[4] < 600.0 && *((float *)a2 + 4) >= 600.0 )
        return -1;
      if ( *((float *)a2 + 4) < 600.0 && a1[4] >= 600.0 )
        return 1;
      if ( *((float *)a2 + 3) < (double)a1[3] )
        return -1;
      if ( *((float *)a2 + 3) > (double)a1[3] )
        return 1;
    }
    else if ( *((_BYTE *)a2 + 8) )
    {
      return 1;
    }
    return 0;
  }
  return result;
}
