int __thiscall sub_1003E3A0(char *this, char ArgList)
{
  char *v3; // edi

  v3 = this + 2652;
  memset(this + 2652, 0, 0xFCu);
  sub_10228370(this + 2736, 0x40u, "%s", ArgList);
  this[2800] = 1;
  sub_10228370(v3, 0x40u, "%s_weak", ArgList);
  return sub_10228370(this + 2820, 0x40u, "%s_strong", ArgList);
}
