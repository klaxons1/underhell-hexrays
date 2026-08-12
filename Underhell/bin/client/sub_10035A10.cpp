int __thiscall sub_10035A10(int this)
{
  if ( (*(_BYTE *)(this + 108) & 0x30) != 0 )
    return 0;
  else
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *(_DWORD *)(this + 88)) != 3
         ? 0
         : 2;
}
