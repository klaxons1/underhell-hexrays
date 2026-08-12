int __thiscall sub_100CFB00(float *this, float a2, float a3)
{
  int result; // eax

  if ( (unsigned __int8)sub_100D1400(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 972))(this) )
  {
    return 4;
  }
  if ( a3 < (double)this[303] )
    return 38;
  if ( a3 > (double)this[305] )
    return 39;
  result = 40;
  if ( a2 >= 0.5 )
    return 21;
  return result;
}
