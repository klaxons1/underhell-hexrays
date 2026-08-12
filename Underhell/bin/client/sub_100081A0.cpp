char __thiscall sub_100081A0(
        _DWORD *this,
        char *Source,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax

  LOBYTE(v12) = sub_10007FD0(this, Source, a3, a4, a9, a10, a11);
  if ( (_BYTE)v12 )
  {
    this[13 * this[1] + 9] = a5;
    this[13 * this[1] + 10] = a6;
    this[13 * this[1] + 11] = a7;
    v12 = 52 * this[1];
    *(float *)&this[v12 / 4u + 5] = a8;
    ++this[1];
  }
  return v12;
}
