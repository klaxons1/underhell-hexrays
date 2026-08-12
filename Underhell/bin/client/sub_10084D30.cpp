char __cdecl sub_10084D30(int a1)
{
  int v1; // eax
  unsigned __int8 v2; // bl
  const char *v3; // eax
  unsigned __int8 v4; // di
  const char *v5; // esi
  unsigned __int8 v6; // al

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    LOBYTE(v1) = Msg(
                   "Shadow color %d %d %d\n",
                   (unsigned __int8)byte_1042C4D8,
                   (unsigned __int8)byte_1042C4D9,
                   (unsigned __int8)byte_1042C4DA);
  }
  else if ( v1 == 4 )
  {
    v2 = atoi(*(const char **)(a1 + 1036));
    v3 = Locale;
    if ( *(int *)a1 > 2 )
      v3 = *(const char **)(a1 + 1040);
    v4 = atoi(v3);
    if ( *(int *)a1 > 3 )
      v5 = *(const char **)(a1 + 1044);
    else
      v5 = Locale;
    v6 = atoi(v5);
    LOBYTE(v1) = sub_10083EB0((int)&unk_1042C4C8, v2, v4, v6);
  }
  return v1;
}
