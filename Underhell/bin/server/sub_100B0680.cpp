bool __thiscall sub_100B0680(_DWORD *this, char *a2, char *Source, __int64 Destination, int a5)
{
  int v7; // eax
  bool v8; // bl
  char *Sourcea; // [esp+20h] [ebp+Ch]

  Sourcea = (char *)sub_100AD3C0(this, (int)this, a2, Source);
  if ( !Sourcea )
    return 0;
  if ( this[16] == -1 || off_1061BE18[4 * (this[16] & 0xFFF) + 2] != this[16] >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (this[16] & 0xFFF) + 1];
  sub_100ACB00((int)this, v7, (int)"%s (%x) spoke %s (%f)\n");
  v8 = sub_100B0150((int)this, a2, (int)Sourcea, a5);
  if ( (_DWORD)Destination )
    sub_10065130(Sourcea, (char *)Destination, HIDWORD(Destination));
  return v8;
}
