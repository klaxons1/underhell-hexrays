bool __thiscall sub_100ECE90(float *this, float *a2)
{
  bool result; // al

  result = sub_100ECDC0(a2, (int)this);
  if ( result )
    this[8] = 0.0;
  else
    this[8] = 1.0;
  return result;
}
