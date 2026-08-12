int __thiscall sub_101E39A0(_DWORD **this)
{
  int result; // eax

  result = sub_100CF460(this[1]);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 1256))(result);
  return result;
}
