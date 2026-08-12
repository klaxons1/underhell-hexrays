char __thiscall sub_100D16A0(int *this)
{
  if ( this[314] < 1 )
  {
    if ( this[299] < 0 )
      goto LABEL_10;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 976))(this) )
      return 1;
    if ( this[299] < 0 )
    {
LABEL_10:
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 972))(this) )
        return 1;
    }
  }
  return 0;
}
