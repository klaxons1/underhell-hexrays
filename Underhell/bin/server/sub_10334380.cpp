int __cdecl sub_10334380(float *a1, float *a2)
{
  if ( *((_BYTE *)a1 + 4) )
  {
    if ( !*((_BYTE *)a2 + 4) )
      return -1;
  }
  else if ( *((_BYTE *)a2 + 4) )
  {
    return 1;
  }
  return (int)(a1[2] - a2[2]);
}
