double __thiscall sub_10036640(float *this, char a2)
{
  double result; // st7

  if ( *((_BYTE *)this + 323) || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 428))(this) )
    return *((float *)off_103DC81C + 3);
  if ( (a2 & 1) != 0 )
    return this[24];
  if ( (a2 & 2) == 0 )
    return *((float *)off_103DC81C + 3);
  result = this[26];
  if ( 0.0 == result )
    return *((float *)off_103DC81C + 3);
  return result;
}
