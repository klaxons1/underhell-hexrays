bool __thiscall sub_1032DEC0(_DWORD *this)
{
  if ( (this[62] & 2) != 0 || (this[64] & 0x8000000) != 0 )
    return 0;
  if ( dword_106E570C > 4 )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
             dword_106B31E4,
             1,
             *(_DWORD *)(dword_106E5934 + 48) * (dword_106E570C / 2)) == 1;
  return 1;
}
