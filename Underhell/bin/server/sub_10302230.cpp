int __thiscall sub_10302230(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = this[906];
  if ( !v3 )
    return sub_10069720(this, a2);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 124))(v3, a2);
  if ( !result )
    return sub_10069720(this, a2);
  return result;
}
