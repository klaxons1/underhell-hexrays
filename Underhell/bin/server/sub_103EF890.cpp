void __thiscall sub_103EF890(_DWORD *this, int a2)
{
  int v2; // edx

  if ( this[201] == -1 || off_1061BE18[4 * (this[201] & 0xFFF) + 2] != this[201] >> 12 )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (this[201] & 0xFFF) + 1];
  if ( a2 == v2 )
    this[201] = -1;
  sub_100DA380(this, a2);
}
