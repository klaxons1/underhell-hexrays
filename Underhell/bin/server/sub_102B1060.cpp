int __thiscall sub_102B1060(int this, float a2, float a3)
{
  int result; // eax

  if ( *(int *)(this + 1200) <= 0 )
    return 4;
  if ( a3 < (double)*(float *)(this + 1212) )
    return 38;
  if ( a3 > (double)*(float *)(this + 1220) )
    return 39;
  result = 40;
  if ( a2 >= 0.5 )
    return 21;
  return result;
}
