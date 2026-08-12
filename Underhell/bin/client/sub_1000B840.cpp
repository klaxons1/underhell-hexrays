char __thiscall sub_1000B840(int *this)
{
  if ( this[524] < 1 )
  {
    if ( this[509] < 0 )
      goto LABEL_10;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 884))(this) )
      return 1;
    if ( this[509] < 0 )
    {
LABEL_10:
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 880))(this) )
        return 1;
    }
  }
  return 0;
}
