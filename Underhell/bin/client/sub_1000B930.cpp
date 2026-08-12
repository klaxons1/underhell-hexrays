bool __thiscall sub_1000B930(int *this)
{
  if ( this[508] < 0 && this[509] < 0 )
    return 1;
  return (*(unsigned __int8 (__thiscall **)(int *))(*this + 880))(this)
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 884))(this);
}
