int __thiscall sub_102B0DB0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = sub_100D1940(this);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 432))(v3, a2);
  }
  return result;
}
