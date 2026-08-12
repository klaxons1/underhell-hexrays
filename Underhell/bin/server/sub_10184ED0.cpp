char __thiscall sub_10184ED0(unsigned __int16 *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 720))(this);
  if ( result )
  {
    if ( *((_DWORD *)this + 200) != 2 )
      sub_101129A0(this + 160, this[178] | 4);
    result = sub_100EAB80(this, 32);
    *((_DWORD *)this + 201) = 1;
  }
  return result;
}
