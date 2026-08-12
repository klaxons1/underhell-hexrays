void __thiscall sub_1022BBA0(int this)
{
  unsigned int v2; // eax

  if ( !*(_BYTE *)(this + 1532)
    || (v2 = *(_DWORD *)(this + 1528), v2 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(this + 1528) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 1528) & 0xFFF) + 1] )
  {
    if ( *(_DWORD *)(this + 976) )
      sub_1041CB00(*(_BYTE *)(this + 1672));
    sub_1022B200((void *)this);
  }
  else
  {
    sub_1025FAC0(this);
  }
}
