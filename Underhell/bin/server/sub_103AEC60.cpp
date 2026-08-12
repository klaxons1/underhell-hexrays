bool __thiscall sub_103AEC60(void *this, float *a2, int a3, int a4)
{
  if ( a3 )
  {
    if ( !a4 )
      return 0;
  }
  else if ( !a4 )
  {
    return sub_1004B040((int)this, a2, a3, a4);
  }
  if ( *(_WORD *)(a4 + 816) != 904 )
    return 0;
  return sub_1004B040((int)this, a2, a3, a4);
}
