char __thiscall sub_10108010(float *this, int a2)
{
  char result; // al

  sub_1011FE20(this, this + 233, 1, 1);
  if ( this[246] >= (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  sub_1010DD80(a2, (int)this, 0.0);
  result = 1;
  this[246] = *(float *)(dword_106B31C8 + 12) + 0.5;
  return result;
}
