int __thiscall sub_10178610(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[3];
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
    this[3] = 0;
  }
  return result;
}
