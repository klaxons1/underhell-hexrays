_DWORD *__cdecl sub_10254F80(char *String2)
{
  _DWORD *v1; // esi

  v1 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( v1 )
  {
    while ( (char *)v1[23] != "info_landmark" && !sub_100D6240(v1, "info_landmark") )
    {
      v1 = sub_1012BF20(&dword_1069E3E0, (int)v1, String2, 0, 0, 0, 0);
      if ( !v1 )
        goto LABEL_5;
    }
    return v1;
  }
  else
  {
LABEL_5:
    Warning("Can't find landmark %s\n", String2);
    return 0;
  }
}
