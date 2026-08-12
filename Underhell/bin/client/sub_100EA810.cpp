int __thiscall sub_100EA810(int *this, char *String2, int a3, int a4)
{
  int v5; // eax

  v5 = sub_100E9780(this[1], a4, (int)String2);
  if ( v5 == -1 )
    return 0;
  else
    return sub_100EA350(this, String2, a3, v5, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
}
