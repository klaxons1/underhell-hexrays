int __thiscall sub_10092C40(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = sub_10041D00(this);
  v3 = this[906];
  if ( v3 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 88))(v3);
  return result;
}
