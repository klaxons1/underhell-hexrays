int __usercall sub_101EA860@<eax>(
        int a1@<ebp>,
        void (**a2)(_DWORD, const char *, ...)@<edi>,
        char *Source,
        int a4,
        int a5,
        int a6)
{
  char *v6; // eax
  int v7; // esi

  v6 = (char *)sub_100DDA40(536);
  if ( v6 )
    v7 = sub_101E99B0(v6, a4);
  else
    v7 = 0;
  sub_101EA610(v7, a1, a2, Source, a5);
  *(_DWORD *)(v7 + 156) = a6;
  return v7;
}
