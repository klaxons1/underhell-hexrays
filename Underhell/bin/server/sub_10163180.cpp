int __thiscall sub_10163180(_DWORD *this)
{
  int v1; // eax

  v1 = this[19];
  if ( v1 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v1 + 24));
  else
    return -1;
}
