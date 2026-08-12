int __thiscall sub_10076B90(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = (*(int (__thiscall **)(char *, _DWORD))(*((_DWORD *)off_103DCD78 + 16389) + 16))(
         (char *)off_103DCD78 + 65556,
         *v3);
  if ( !v4 )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
  if ( !v5 )
    return 0;
  v6 = this[3];
  if ( v6 )
  {
    if ( (v6 & *(_DWORD *)(v5 + 732)) == 0 )
      return 0;
  }
  v7 = this[4];
  if ( v7 < this[2] )
  {
    *(_DWORD *)(this[1] + 4 * v7) = v5;
    ++this[4];
    return 0;
  }
  return 1;
}
