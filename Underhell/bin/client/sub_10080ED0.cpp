int __thiscall sub_10080ED0(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[3];
  if ( v2 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(v2, 1);
  this[3] = 0;
  return result;
}
