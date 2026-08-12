_DWORD *__thiscall sub_10001EA0(_DWORD *this)
{
  _DWORD *result; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520(this);
  result = (_DWORD *)this[485];
  if ( !result || !*result )
    return 0;
  return result;
}
