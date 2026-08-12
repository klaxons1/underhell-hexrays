int __stdcall sub_1021D860(char *String2, int a2, int a3, int *a4)
{
  int v5; // esi
  int v6; // eax
  int v8; // [esp+20h] [ebp+14h]

  if ( String2 && (v8 = 0, a3 > 0) )
  {
    while ( 1 )
    {
      v5 = a2 + 52 * *a4;
      v6 = *a4 + 1;
      *a4 = v6;
      if ( v6 == a3 )
        *a4 = 0;
      if ( !_stricmp(*(const char **)(v5 + 4), String2) )
        return v5;
      if ( ++v8 >= a3 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    *a4 = 0;
    return 0;
  }
}
