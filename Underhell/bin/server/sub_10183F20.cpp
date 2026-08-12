_BYTE *__thiscall sub_10183F20(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  const char *v10; // edi
  const char *v11; // eax
  char String[256]; // [esp+8h] [ebp-10Ch] BYREF
  int v13; // [esp+108h] [ebp-Ch] BYREF
  float v14; // [esp+10Ch] [ebp-8h] BYREF
  int v15; // [esp+110h] [ebp-4h] BYREF

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
    && (v13 = atoi(v5), (v6 = strtok(0, " ")) != 0)
    && *v6
    && (v15 = atoi(v6), (v7 = strtok(0, " ")) != 0)
    && *v7
    && (v14 = atof(v7), (v8 = strtok(0, " ")) != 0)
    && *v8 )
  {
    HIBYTE(a2) = atoi(v8) != 0;
    sub_10183A00((_DWORD *)(this + 1568), &v13);
    sub_10183A50((_DWORD *)(this + 1572), &v15);
    sub_10183AF0((float *)(this + 1580), &v14);
    sub_10183B40((_BYTE *)(this + 1576), (_BYTE *)&a2 + 3);
    a2 = 2;
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
                      "%s (%s) received StartAnimSequence input without correct parameters. Syntax: <Frame Start> <Frame "
                      "End> <Frame Rate> <Loop>\n"
                      "Setting <Frame End> to -1 uses the last frame of the texture. <Loop> should be 1 or 0.\n",
                      v10,
                      v11);
  }
}
