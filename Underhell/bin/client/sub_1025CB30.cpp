_DWORD *__thiscall sub_1025CB30(char *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 932))(this) )
  {
    result = a2;
    *a2 = *(_DWORD *)(this + 381);
  }
  else
  {
    sub_1025D150(a2);
    return a2;
  }
  return result;
}
