int __thiscall sub_1007A640(_DWORD *this, int a2)
{
  int v2; // ecx

  if ( a2 >= 0 && (v2 = this[4 * a2 - 16388]) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 24))(v2);
  else
    return 0;
}
