void __thiscall sub_102115C0(void *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_1020FD00((int)this, v4, *a2, a2[1]);
}
