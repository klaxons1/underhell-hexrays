char __thiscall sub_10138110(_DWORD *this, char *String1, char *String)
{
  int v5; // eax
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+0h] [ebp-Ch]

  if ( String1 == "width" || !_stricmp(String1, "width") )
  {
    v6 = atof(String);
    sub_1005C3A0((int)this, v6);
    return 1;
  }
  else if ( String1 == "NoiseAmplitude" || !_stricmp(String1, "NoiseAmplitude") )
  {
    String = (char *)atoi(String);
    v7 = (float)(int)String;
    sub_100FA790((int)this, v7);
    return 1;
  }
  else if ( String1 == "TextureScroll" || !_stricmp(String1, "TextureScroll") )
  {
    v5 = atoi(String);
    sub_100FA830((int)this, v5);
    return 1;
  }
  else if ( String1 == "texture" || !_stricmp(String1, "texture") )
  {
    this[115] = *(_DWORD *)sub_10162BE0(&String, String);
    sub_100D8500(this);
    return 1;
  }
  else
  {
    sub_100EBE90((int)this, String1, String);
    return 1;
  }
}
