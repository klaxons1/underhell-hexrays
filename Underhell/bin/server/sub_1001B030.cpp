int __thiscall sub_1001B030(_DWORD *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  result = sub_10021D80();
  for ( i = 0; i < this[910]; ++i )
  {
    v4 = *(_DWORD *)(this[907] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 68))(v4);
  }
  return result;
}
