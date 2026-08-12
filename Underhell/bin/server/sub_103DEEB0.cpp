float *__thiscall sub_103DEEB0(int this, float a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  const char *v7; // esi
  const char *v9; // esi
  const char *v10; // eax
  const char *v11; // esi
  const char *v12; // eax
  char String[256]; // [esp+8h] [ebp-108h] BYREF
  double v14; // [esp+108h] [ebp-8h] BYREF

  v3 = (char **)(LODWORD(a2) + 8);
  if ( *(_DWORD *)(LODWORD(a2) + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)::String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_104299C0(String, v4, 0xFFu);
  v5 = strtok(String, " ");
  if ( v5 && *v5 )
  {
    a2 = atof(v5);
    v6 = strtok(0, " ");
    v7 = v6;
    if ( v6 && *v6 )
    {
      sub_103DE5C0((float *)(this + 904), &a2);
      v14 = atof(v7);
      return sub_103DE610((float *)(this + 908), &v14);
    }
    else
    {
      v9 = *(const char **)(this + 92);
      if ( !v9 )
        v9 = ::String;
      v10 = sub_100D6390((_DWORD *)this);
      return (float *)Warning(
                        "%s (%s) received FadeTo input without a duration. Syntax: <fade alpha> <fade duration>\n",
                        v9,
                        v10);
    }
  }
  else
  {
    v11 = *(const char **)(this + 92);
    if ( !v11 )
      v11 = ::String;
    v12 = sub_100D6390((_DWORD *)this);
    return (float *)Warning(
                      "%s (%s) received FadeTo input without an alpha. Syntax: <fade alpha> <fade duration>\n",
                      v11,
                      v12);
  }
}
