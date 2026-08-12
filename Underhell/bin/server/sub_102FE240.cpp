int __thiscall sub_102FE240(int this, int a2)
{
  int v3; // eax

  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 && a2 == 21 && !*(_BYTE *)(this + 4124) )
    return dword_106E2958;
  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 136))(v3, a2);
  else
    return sub_1002CC40((_DWORD *)this, a2);
}
