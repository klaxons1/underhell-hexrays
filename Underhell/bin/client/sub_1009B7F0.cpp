int __thiscall sub_1009B7F0(int *this)
{
  int v1; // eax

  v1 = sub_1007A770(off_103DCD78, this[13]);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)(v1 + 8) + 36))(v1 + 8);
  else
    return -1;
}
