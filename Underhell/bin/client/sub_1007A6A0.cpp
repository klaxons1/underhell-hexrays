int __thiscall sub_1007A6A0(_DWORD *this, int a2)
{
  int v2; // eax

  if ( a2 >= 0 && (v2 = this[4 * a2 + 1]) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 28))(v2);
  else
    return 0;
}
