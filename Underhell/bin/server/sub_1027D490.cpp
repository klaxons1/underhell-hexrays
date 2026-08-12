int __thiscall sub_1027D490(_DWORD *this)
{
  int result; // eax

  result = sub_100D1940(this);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
  return result;
}
