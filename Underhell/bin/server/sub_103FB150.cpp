unsigned int __thiscall sub_103FB150(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // esi

  if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
    return sub_100D1F40(this);
  result = sub_100D1940(this);
  v3 = (_DWORD *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      result = sub_101E7EA0(v3, this[282]);
      if ( result )
        return (*(int (__thiscall **)(unsigned int, const char *, _DWORD *))(*(_DWORD *)result + 840))(
                 result,
                 "models/weapons/v_superphyscannon.mdl",
                 this);
    }
  }
  return result;
}
