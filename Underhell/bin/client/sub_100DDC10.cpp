char __thiscall sub_100DDC10(int this)
{
  if ( !sub_100B68D0((int *)this) || !*(_BYTE *)(this + 280) )
    return 0;
  if ( *(float *)(this + 288) > 0.0 && *(float *)off_103DC81C >= (double)*(float *)(this + 288) )
  {
    *(_BYTE *)(this + 280) = 0;
    return 0;
  }
  return 1;
}
