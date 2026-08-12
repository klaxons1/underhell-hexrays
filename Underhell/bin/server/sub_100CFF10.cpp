int __thiscall sub_100CFF10(void *this, int a2)
{
  int result; // eax
  int v4; // esi

  result = sub_100D1940(this);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 1392))(this, a2, v4);
  }
  return result;
}
