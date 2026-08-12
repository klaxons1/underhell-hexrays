int __thiscall sub_100DCCE0(int this, float a2)
{
  int v3; // edi
  int result; // eax

  if ( *(_BYTE *)(this + 306) != 6 )
  {
    v3 = *(_DWORD *)(this + 424);
    if ( v3 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      return (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 272))(
               v3,
               this + 580,
               this + 704,
               0,
               LODWORD(a2));
    }
  }
  return result;
}
