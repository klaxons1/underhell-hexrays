int __thiscall sub_101C3B60(float *this, float a2)
{
  int result; // eax

  this[141] = a2 + this[141];
  if ( this[122] == flt_106F1CB4 && this[123] == flt_106F1CB8 && this[124] == flt_106F1CBC )
    return 0;
  result = sub_101C38F0((int)off_10638654, (int)this, a2);
  if ( result )
    this[141] = this[141] - a2;
  return result;
}
