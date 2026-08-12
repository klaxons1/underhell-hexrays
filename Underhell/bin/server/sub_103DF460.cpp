char __thiscall sub_103DF460(float *this)
{
  char result; // al

  if ( *(float *)(dword_106B31C8 + 12) <= (double)this[470] )
    return 0;
  result = 1;
  this[470] = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  return result;
}
