__int64 __cdecl sub_100DA340(char *Source)
{
  char *v1; // eax
  char *v2; // eax
  double v3; // st7
  char String[128]; // [esp+0h] [ebp-88h] BYREF
  __int64 v6; // [esp+80h] [ebp-8h]

  *(float *)&v6 = 0.0;
  *((float *)&v6 + 1) = 0.0;
  sub_102282F0(String, Source, 0x80u);
  v1 = strtok(String, ",");
  if ( v1 )
  {
    *(float *)&v6 = atof(v1);
    v2 = strtok(0, ",");
    if ( v2 )
    {
      v3 = atof(v2);
      *((float *)&v6 + 1) = v3 - *(float *)&v6;
    }
  }
  return v6;
}
