void __cdecl sub_1006B680(int *a1)
{
  int v1; // eax
  int v2; // ecx
  const char *v3; // eax
  char *v4; // esi
  float v5; // [esp+0h] [ebp-8h]

  v1 = *a1;
  if ( *a1 >= 2 )
  {
    v4 = (char *)Locale;
    if ( v1 > 1 )
      v4 = (char *)a1[259];
    if ( v1 <= 2 )
    {
      sub_1006B420((int)&dword_10411158, v4, 36.0);
    }
    else
    {
      v5 = atof((const char *)a1[260]);
      sub_1006B420((int)&dword_10411158, v4, v5);
    }
  }
  else
  {
    v2 = dword_10411228;
    if ( dword_10411228 < 0 )
      v2 = dword_104111EC;
    v3 = "none";
    if ( v2 >= 0 && v2 < dword_10411180 )
      v3 = (const char *)sub_10229A00(*(_DWORD *)(dword_10411174 + 4 * v2));
    DevMsg(1, "Soundscape: %s\n", v3);
  }
}
