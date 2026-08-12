int __thiscall sub_100A5030(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[4];
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
    this[4] = 0;
  }
  return result;
}
