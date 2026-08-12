int __thiscall sub_102661B0(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_10269E90(a2);
  if ( a2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
    this[104] = result;
  }
  return result;
}
