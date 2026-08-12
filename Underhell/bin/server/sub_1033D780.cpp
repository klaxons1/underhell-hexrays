void __thiscall sub_1033D780(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char **v5; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  v5 = (char **)sub_10162BE0(&a2, v4);
  sub_1004F650((void *)(this + 4272), *v5, 3, 0);
}
