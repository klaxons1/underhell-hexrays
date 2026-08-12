char __thiscall sub_102E48F0(int this)
{
  int v2; // edi
  char v3; // al
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  v2 = *(_DWORD *)(this + 3296) | *(_DWORD *)(this + 3300);
  v3 = sub_102DC370((_BYTE *)this) && *(_BYTE *)(this + 2329) && (*(_DWORD *)(this + 3292) & 0x20000) != 0;
  if ( *(_BYTE *)(this + 5216) != v3 && (v2 & 0x20000) != 0 )
  {
    if ( v3 )
    {
      if ( *(_DWORD *)(dword_106E0974 + 48) )
        sub_102E35E0(this, v2);
      else
        sub_102E0B40(this, v2);
    }
    else
    {
      if ( !*(_DWORD *)(dword_106E0974 + 48) )
        sub_102E0CB0(this);
      *(_DWORD *)(this + 3292) &= ~0x20000u;
    }
  }
  LOBYTE(v5) = !*(_BYTE *)(this + 2329)
            || (v4 = *(_DWORD *)(this + 3292), (v4 & 0x40000) != 0) && !*(_BYTE *)(this + 5216) && (v4 & 4) == 0;
  if ( *(_BYTE *)(this + 5217) != (_BYTE)v5 )
  {
    if ( (_BYTE)v5 )
    {
      LOBYTE(v5) = sub_102DECC0((void *)this);
    }
    else
    {
      v6 = *(_DWORD *)(this + 2180);
      if ( v6 == -1
        || (v5 = v6 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 2180) & 0xFFF) + 2] != v5)
        || !off_1061BE18[4 * (*(_DWORD *)(this + 2180) & 0xFFF) + 1] )
      {
        LOBYTE(v5) = sub_102DED70((void *)this);
      }
    }
  }
  return v5;
}
