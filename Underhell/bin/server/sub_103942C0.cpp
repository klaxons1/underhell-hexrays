int __thiscall sub_103942C0(int this)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 5600) )
    return 0;
  if ( -2.0 == *(float *)(this + 5592) )
    return -2;
  if ( -1.0 == *(float *)(this + 5592) )
    return -1;
  if ( *(float *)(this + 5592) <= 0.1 )
    return 0;
  result = 1;
  if ( *(float *)(this + 5592) > 0.94999999 )
    return 2;
  return result;
}
