void __cdecl sub_101C08A0(int a1, int a2, float a3, char a4, _DWORD *a5, const char *a6, char a7)
{
  int v7; // esi

  if ( a6 )
  {
    v7 = 0;
    while ( strcmp((&off_106385FC)[2 * v7], a6) )
    {
      if ( (unsigned int)++v7 >= 4 )
      {
        Warning("Failed to find custom physics damage table name: %s\n", a6);
        goto LABEL_6;
      }
    }
    sub_101C01F0(a1, a2, *(&off_10638600 + 2 * v7), a3, a4, a5, a7);
  }
  else
  {
LABEL_6:
    sub_101C01F0(a1, a2, (int)&off_1063861C, a3, a4, a5, a7);
  }
}
