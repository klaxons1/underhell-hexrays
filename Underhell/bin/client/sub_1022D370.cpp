int __thiscall sub_1022D370(int this, int a2)
{
  char *v3; // edx

  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v3 = (char *)Locale;
LABEL_4:
    sub_1022CF40((char **)this, v3, strlen(v3) + 1);
    return this;
  }
  v3 = *(char **)a2;
  if ( *(_DWORD *)a2 )
    goto LABEL_4;
  sub_1022CF40((char **)this, 0, 0);
  return this;
}
