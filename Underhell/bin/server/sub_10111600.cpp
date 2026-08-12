int __thiscall sub_10111600(int this)
{
  _DWORD *v1; // eax

  if ( (*(_BYTE *)(this + 37) & 1) != 0 && (v1 = sub_100E99F0(*(_DWORD **)(this + 4))) != 0 )
    return (*(int (__thiscall **)(_DWORD *))(v1[80] + 40))(v1 + 80);
  else
    return 0;
}
