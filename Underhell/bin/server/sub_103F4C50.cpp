int __thiscall sub_103F4C50(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  _DWORD *v4; // eax

  if ( !sub_100D1940(this)
    || (v2 = sub_100D1940(this), result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2), (_BYTE)result) )
  {
    v4 = (_DWORD *)sub_100D1940(this);
    return sub_100CF460(v4);
  }
  return result;
}
