int __thiscall sub_103DE3A0(_DWORD *this, float a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  _DWORD *v8; // esi
  const char *v10; // edi
  const char *v11; // eax
  char String[256]; // [esp+8h] [ebp-108h] BYREF
  float v13; // [esp+108h] [ebp-8h] BYREF
  float v14; // [esp+10Ch] [ebp-4h] BYREF

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
  if ( v5
    && *v5
    && (a2 = atof(v5), (v6 = strtok(0, " ")) != 0)
    && *v6
    && (v13 = atof(v6), (v7 = strtok(0, " ")) != 0)
    && *v7 )
  {
    v14 = atof(v7);
    v8 = this + 223;
    sub_103DDF40(v8, 0, &a2);
    sub_103DDF40(v8, 1, &v13);
    return sub_103DDF40(v8, 2, &v14);
  }
  else
  {
    v10 = (const char *)this[23];
    if ( !v10 )
      v10 = ::String;
    v11 = sub_100D6390(this);
    return Warning(
             "%s (%s) received SetFadeColor input without correct parameters. Syntax: <Red> <Green> <Blue>>\n",
             v10,
             v11);
  }
}
