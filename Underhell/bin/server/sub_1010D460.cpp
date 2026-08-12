const char *__thiscall sub_1010D460(int this)
{
  const char *result; // eax
  int *v3; // eax
  int *v4; // eax
  char *v5; // eax
  double v6; // [esp+0h] [ebp-1Ch]
  double ArgList; // [esp+10h] [ebp-Ch]

  switch ( *(_DWORD *)(this + 16) )
  {
    case 0:
      byte_1069A960 = 0;
      return &byte_1069A960;
    case 1:
      ArgList = *(float *)this;
      sub_10429A00(&byte_1069A960, 0x200u, "%g", SLOBYTE(ArgList));
      return &byte_1069A960;
    case 2:
      result = *(const char **)this;
      if ( !*(_DWORD *)this )
        return String;
      return result;
    case 3:
      v6 = *(float *)this;
      sub_10429A00(&byte_1069A960, 0x200u, "[%g %g %g]", SLOBYTE(v6));
      return &byte_1069A960;
    case 5:
      sub_10429A00(&byte_1069A960, 0x200u, "%i", *(_DWORD *)this);
      return &byte_1069A960;
    case 6:
      if ( *(_BYTE *)this )
        sub_104299C0(&byte_1069A960, "true", 0x200u);
      else
        sub_104299C0(&byte_1069A960, "false", 0x200u);
      return &byte_1069A960;
    case 9:
      sub_10429A00(&byte_1069A960, 0x200u, "%d %d %d %d", *(_BYTE *)this);
      return &byte_1069A960;
    case 0xD:
      v3 = sub_100D80A0((_DWORD *)this);
      if ( sub_1026A890(v3) )
      {
        v4 = sub_100D80A0((_DWORD *)this);
        v5 = *(char **)(sub_1026A890(v4) + 260);
        if ( !v5 )
        {
          sub_104299C0(&byte_1069A960, (char *)String, 0x200u);
          return &byte_1069A960;
        }
      }
      else
      {
        v5 = "<<null entity>>";
      }
      sub_104299C0(&byte_1069A960, v5, 0x200u);
      return &byte_1069A960;
    default:
      return "No conversion to string";
  }
}
