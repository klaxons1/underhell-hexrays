char *__thiscall sub_10334D80(int this)
{
  char *result; // eax

  sub_10393F60(this);
  if ( sub_100697A0((_DWORD *)this, 1, 1) || sub_100697A0((_DWORD *)this, 9, 1) )
    sub_10024230((char *)this, 82);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this) && sub_100241C0((_DWORD *)this, 58) )
  {
    if ( !sub_100697A0((_DWORD *)this, 51, 0) )
      sub_10024230((char *)this, 79);
    sub_10024230((char *)this, 80);
  }
  if ( !sub_100697A0((_DWORD *)this, 63, 1) )
    sub_10024230((char *)this, 64);
  if ( (*(_DWORD *)(*(_DWORD *)(this + 2124) + 12) & 4) != 0 )
    sub_10024230((char *)this, 46);
  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1532))(this);
  if ( (_BYTE)result )
  {
    result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4460) + 1364))(*(_DWORD *)(this + 4460));
    if ( result == (char *)(this + 4456) )
    {
      if ( !sub_100697A0((_DWORD *)this, 51, 0) )
        sub_10024230((char *)this, 79);
      return sub_10024230((char *)this, 80);
    }
  }
  return result;
}
