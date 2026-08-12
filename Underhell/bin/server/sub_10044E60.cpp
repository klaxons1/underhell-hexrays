char __thiscall sub_10044E60(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax

  if ( this[581] == 4
    && (v2 = this[672], v2 != -1)
    && (v3 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1], v4 = v2 >> 12, off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v4)
    && *v3
    && (off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v3),
        !(unsigned __int8)sub_1022FC90(v5)
     || (this[64] & 0x400) != 0 && (*(_DWORD *)(sub_1026A890(this + 672) + 868) & 0x400) == 0) )
  {
    return 0;
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD *))(*this + 264))(this);
  }
}
