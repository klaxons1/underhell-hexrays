int sub_100698E0()
{
  int result; // eax
  int v1; // esi

  sub_100AB310(&off_1060AFB4);
  sub_10085F50();
  sub_100A7980(&dword_10694898);
  sub_100B1D50(&dword_10695280);
  sub_1007D9F0(&unk_10690E5C);
  sub_1007D9F0(&unk_10690E64);
  sub_1007D9F0(&unk_10690E6C);
  result = sub_1007D9F0(&unk_1069528C);
  v1 = dword_10690174;
  if ( dword_10690174 )
  {
    sub_10244E50();
    result = sub_10184660(v1);
  }
  dword_10690178 = 0;
  dword_10690174 = 0;
  return result;
}
