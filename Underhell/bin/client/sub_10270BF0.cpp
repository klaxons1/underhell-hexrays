void __thiscall sub_10270BF0(int this, _DWORD *a2)
{
  const char *v3; // eax
  const char *v4; // esi
  int v5; // eax
  const char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al

  *(float *)(this + 216) = sub_1022A940(a2, "progress", 0.0);
  v3 = (const char *)sub_1022B4C0(a2, "variable", (int)Locale);
  v4 = v3;
  if ( v3 && *v3 )
  {
    v5 = sub_100DDA40(strlen(v3) + 1);
    *(_DWORD *)(this + 236) = v5;
    v6 = v4;
    v7 = (_BYTE *)v5;
    do
    {
      v8 = *v6;
      *v7++ = *v6++;
    }
    while ( v8 );
  }
  sub_10241C00((int *)this, a2);
}
