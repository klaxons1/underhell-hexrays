void __thiscall sub_100D2670(int *this, char ArgList, int a3, int a4, char a5, char a6, char a7, char a8, int a9)
{
  char *v9; // esi

  if ( a3 )
  {
    v9 = (char *)(this[63] + 260 * sub_100D2350(this + 63));
    sub_10228370(v9, 0x80u, "%s", ArgList);
    v9[128] = a5;
    sub_10228370(v9 + 129, 0x80u, "%s %s", a3);
    v9[257] = a7;
    v9[258] = a8;
    v9[259] = a6;
  }
}
