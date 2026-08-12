int __thiscall sub_1026F360(_DWORD *this)
{
  int v2; // eax

  if ( !this[93] )
    return this[99];
  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[93] + 928))(this[93]);
  return sub_1026B810((_DWORD *)this[93], v2);
}
