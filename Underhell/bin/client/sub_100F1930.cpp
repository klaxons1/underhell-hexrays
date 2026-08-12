char __thiscall sub_100F1930(float *this)
{
  float *v2; // eax
  double v3; // st7
  char result; // al

  sub_101FA2F0(this + 4);
  if ( this[1508] <= (double)this[1511] )
    return 1;
  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  this[1508] = *v2;
  this[1509] = v2[1];
  v3 = v2[2];
  result = 0;
  this[1510] = v3;
  this[1511] = this[1508];
  this[1512] = this[1509];
  this[1513] = this[1510];
  return result;
}
