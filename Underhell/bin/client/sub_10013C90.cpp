int __thiscall sub_10013C90(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 )
    result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    result = -1;
  if ( this[1069] != result )
    this[1069] = result;
  return result;
}
