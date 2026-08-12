int __thiscall sub_100F7510(_DWORD *this)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int result; // eax

  v2 = 0;
  v3 = 1;
  do
  {
    if ( (v3 & this[283]) != 0 )
    {
      if ( (unsigned int)v2 <= 0x1F )
      {
        v4 = dword_10435FEC[v2];
        if ( v4 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 12))(v4, this);
      }
      result = ~v3;
      this[283] &= ~v3;
    }
    ++v2;
    v3 = __ROL4__(v3, 1);
  }
  while ( v2 < 8 );
  return result;
}
