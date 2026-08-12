__int64 __cdecl sub_100DA3C0(char *Source)
{
  char *v1; // eax
  char *v2; // eax
  char String[128]; // [esp+0h] [ebp-88h] BYREF
  __int64 v5; // [esp+80h] [ebp-8h]

  *(float *)&v5 = 0.0;
  *((float *)&v5 + 1) = 0.0;
  sub_102282F0(String, Source, 0x80u);
  v1 = strtok(String, ",");
  if ( v1 )
  {
    *(float *)&v5 = atof(v1);
    v2 = strtok(0, ",");
    if ( v2 )
      *((float *)&v5 + 1) = atof(v2);
  }
  return v5;
}
