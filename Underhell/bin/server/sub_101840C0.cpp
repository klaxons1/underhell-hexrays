_BYTE *__thiscall sub_101840C0(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  const char *v10; // edi
  const char *v11; // eax
  char String[256]; // [esp+4h] [ebp-108h] BYREF
  float v13; // [esp+104h] [ebp-8h] BYREF
  float v14; // [esp+108h] [ebp-4h] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
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
  if ( v5
    && *v5
    && (*(float *)&a2 = atof(v5), (v6 = strtok(0, " ")) != 0)
    && *v6
    && (v13 = atof(v6), (v7 = strtok(0, " ")) != 0)
    && *v7
    && (v14 = atof(v7), (v8 = strtok(0, " ")) != 0)
    && *v8 )
  {
    atoi(v8);
    sub_10183BE0((float *)(this + 1588), (float *)&a2);
    sub_10183C30((float *)(this + 1592), &v13);
    sub_10183C80((float *)(this + 1596), &v14);
    a2 = 3;
    sub_10183AA0((_DWORD *)(this + 1600), &a2);
    HIBYTE(a2) = *(_BYTE *)(this + 1584) == 0;
    return sub_10183B90((_BYTE *)(this + 1584), (_BYTE *)&a2 + 3);
  }
  else
  {
    v10 = *(const char **)(this + 92);
    if ( !v10 )
      v10 = ::String;
    v11 = sub_100D6390((_DWORD *)this);
    return (_BYTE *)Warning(
                      "%s (%s) received StartFloatLerp input without correct parameters. Syntax: <Start Value> <End Value"
                      "> <Transition Time> <Loop>\n"
                      "<Loop> should be 1 or 0.\n",
                      v10,
                      v11);
  }
}
