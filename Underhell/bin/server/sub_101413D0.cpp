char __thiscall sub_101413D0(int this, char *String1, char *String)
{
  double v5; // st7
  double v6; // st7
  bool v7; // c0
  char *v8; // ebx

  if ( String1 == "fish_count" || !_stricmp(String1, "fish_count") )
  {
    *(_DWORD *)(this + 808) = atoi(String);
    return 1;
  }
  if ( String1 == "max_range" || !_stricmp(String1, "max_range") )
  {
    v5 = atof(String);
    *(float *)(this + 812) = v5;
    if ( v5 <= 1.0 )
    {
      v6 = 1.0;
LABEL_8:
      *(float *)(this + 812) = v6;
      return 1;
    }
    v7 = v5 > 255.0;
    v6 = 255.0;
    if ( v7 )
      goto LABEL_8;
    return 1;
  }
  else
  {
    v8 = String;
    if ( String1 == "model" || !_stricmp(String1, "model") )
    {
      sub_100E8220(this, v8);
      *(_DWORD *)(this + 460) = *(_DWORD *)sub_10162BE0(&String, v8);
      sub_100D8500((_DWORD *)this);
    }
    return sub_100EBE90(this, String1, v8);
  }
}
