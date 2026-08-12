int __thiscall sub_101334F0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int result; // eax

  this[14440] = *(_DWORD *)(dword_104398EC + 48);
  if ( *(_DWORD *)(dword_10439934 + 48) )
    v2 = this[14428];
  else
    v2 = this[14429];
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v2);
  v4 = *(_DWORD *)(dword_104398A4 + 48);
  v5 = 3;
  if ( v4 <= 3 )
  {
    if ( v4 > 2 )
      v5 = 4;
  }
  else
  {
    v5 = 5;
  }
  v6 = v3 * v5;
  result = this[14440];
  if ( v6 <= result )
    this[14440] = result;
  else
    this[14440] = v6;
  return result;
}
