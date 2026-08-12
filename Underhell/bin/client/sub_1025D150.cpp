_DWORD *__thiscall sub_1025D150(char *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 932))(this) )
  {
    result = a2;
    *a2 = *(_DWORD *)(this + 367);
  }
  else
  {
    sub_1025B9F0((int)this, a2);
    return a2;
  }
  return result;
}
