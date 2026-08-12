bool __thiscall sub_100D1750(int *this)
{
  if ( this[298] < 0 && this[299] < 0 )
    return 1;
  return (*(unsigned __int8 (__thiscall **)(int *))(*this + 972))(this)
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 976))(this);
}
