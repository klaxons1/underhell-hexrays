void __thiscall sub_10226910(_BYTE *this)
{
  if ( this[1448]
    && (*((_DWORD *)this + 363) == -1
     || off_1061BE18[4 * (*((_DWORD *)this + 363) & 0xFFF) + 2] != *((_DWORD *)this + 363) >> 12
     || !off_1061BE18[4 * (*((_DWORD *)this + 363) & 0xFFF) + 1]
     || this[1457]) )
  {
    this[1448] = 0;
    *((_DWORD *)this + 363) = -1;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 760))(this);
  }
}
