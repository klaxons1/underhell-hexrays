int __thiscall sub_10129C40(char *this)
{
  char *v2; // esi
  int i; // edi

  v2 = this + 44;
  for ( i = 3; i >= 0; --i )
  {
    v2 -= 4;
    sub_10233380(v2);
  }
  sub_10233380(this + 24);
  sub_10233380(this + 20);
  sub_10233380(this + 16);
  sub_10233380(this + 12);
  sub_10233380(this + 8);
  return sub_10233380(this + 4);
}
