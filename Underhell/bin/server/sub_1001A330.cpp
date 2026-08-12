char __thiscall sub_1001A330(float *this)
{
  float v3; // [esp+Ch] [ebp-4h]

  if ( this[915] <= 0.0 )
    return 0;
  v3 = this[914] / this[915] + this[183];
  this[914] = 0.0;
  this[915] = 0.0;
  if ( !(unsigned __int8)sub_100697A0(62, 1)
    || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
  {
    return 0;
  }
  sub_10078210(v3, -1.0);
  return 1;
}
