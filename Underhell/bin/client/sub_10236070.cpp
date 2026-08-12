void __thiscall sub_10236070(_DWORD *this, char *Source)
{
  const char *v3; // esi
  unsigned int v4; // kr00_4
  char *v5; // eax

  v3 = (const char *)this[18];
  if ( !v3 )
    goto LABEL_5;
  if ( !Source || strcmp(v3, Source) )
  {
    sub_10034930((int)v3);
    this[18] = 0;
LABEL_5:
    if ( Source )
    {
      v4 = strlen(Source);
      v5 = (char *)sub_100DDA40(v4 + 1);
      this[18] = v5;
      sub_102282F0(v5, Source, v4 + 1);
    }
  }
}
