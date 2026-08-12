int __thiscall sub_10254A70(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int result; // eax

  v4 = this[58];
  v5 = a4;
  v6 = a4;
  if ( a4 >= v4 - a3 )
    v6 = this[58] - a3;
  if ( v6 >= 0 )
  {
    if ( a4 >= v4 - a3 )
      v5 = this[58] - a3;
  }
  else
  {
    v5 = 0;
  }
  v7 = this[58];
  if ( v4 >= a3 )
    v7 = a3;
  if ( v7 >= 0 )
  {
    if ( v4 >= a3 )
      v4 = a3;
  }
  else
  {
    v4 = 0;
  }
  result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
             dword_1047CA78,
             this[55] + 2 * v4,
             a2,
             v5 + 1);
  *(_BYTE *)(v5 + a2) = 0;
  return result;
}
