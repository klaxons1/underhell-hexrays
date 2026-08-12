char __thiscall sub_1042C5B0(int this, float *a2)
{
  char result; // al

  if ( *(_BYTE *)(this + 52) && *(float *)(this + 56) > (double)*a2 )
  {
    result = 1;
    *a2 = *(float *)(this + 56);
  }
  else if ( *(_BYTE *)(this + 60) && *(float *)(this + 64) < (double)*a2 )
  {
    result = 1;
    *a2 = *(float *)(this + 64);
  }
  else
  {
    return 0;
  }
  return result;
}
