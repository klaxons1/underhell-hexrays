int __thiscall sub_100812E0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  if ( !this[6] )
    return 1;
  result = (*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)this[6] + 140))(this[6], a2, a3, a4);
  if ( result )
    return 1;
  return result;
}
