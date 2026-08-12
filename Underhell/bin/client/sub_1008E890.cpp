int __thiscall sub_1008E890(int this)
{
  _DWORD *v1; // eax

  if ( (*(_BYTE *)(this + 37) & 1) != 0 && (v1 = sub_1000F870(*(_DWORD **)(this + 4))) != 0 )
    return (*(int (__thiscall **)(_DWORD *))(v1[88] + 40))(v1 + 88);
  else
    return 0;
}
