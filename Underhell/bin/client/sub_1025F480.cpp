int __thiscall sub_1025F480(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = this[238];
  if ( v3 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 300))(v3);
  this[238] = a2;
  if ( a2 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 156))(a2, this);
  return result;
}
