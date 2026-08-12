void __thiscall sub_103CFAE0(float *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx

  sub_1032DDF0(this, a2, a3, a4);
  v5 = *(_DWORD *)(a2 + 44);
  if ( v5 == -1
    || (v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1],
        v7 = v5 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7)
    || !*v6
    || (off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7 ? (v8 = 0) : (v8 = *v6),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 284))(v8)) )
  {
    if ( (*(_BYTE *)(a2 + 64) & 0x82) != 0 && *(_DWORD *)(a4 + 68) == 4 && sub_103CF380(this) )
    {
      sub_103CF7A0(this, *(float *)(a2 + 4), *(float *)(a2 + 8), *(float *)(a2 + 12));
      sub_103CF190(this);
    }
  }
}
