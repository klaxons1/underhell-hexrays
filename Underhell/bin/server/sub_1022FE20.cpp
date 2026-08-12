_DWORD *__thiscall sub_1022FE20(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_10425750(a3);
  if ( a2 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    this[320] = *result;
  }
  else
  {
    this[320] = -1;
  }
  return result;
}
