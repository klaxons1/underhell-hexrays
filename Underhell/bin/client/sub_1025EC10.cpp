void __thiscall sub_1025EC10(int *this, _DWORD *a2)
{
  _BYTE *v3; // eax
  const char *v4; // eax
  char *v5; // eax
  int v6; // edx
  const char *v7; // eax
  const char *v8; // edi
  int v9; // eax
  const char *v10; // eax
  const char *v11; // eax

  if ( this[55] )
  {
    sub_10034930(this[55]);
    this[55] = 0;
  }
  if ( this[56] )
  {
    sub_10034930(this[56]);
    this[56] = 0;
  }
  v3 = (_BYTE *)sub_1022B4C0(a2, "image", (int)Locale);
  if ( *v3 )
    (*(void (__thiscall **)(int *, _BYTE *, int))(*this + 768))(this, v3, 1);
  v4 = (const char *)sub_1022B4C0(a2, "imagecolor", (int)Locale);
  if ( *v4 )
  {
    v5 = sub_1025E6A0(v4);
    v6 = *this;
    this[56] = (int)v5;
    (*(void (__thiscall **)(int *, _DWORD, int))(v6 + 244))(this, 0, 1);
  }
  v7 = (const char *)sub_1022B4C0(a2, "imageAlignment", (int)Locale);
  v8 = v7;
  if ( v7 && *v7 )
  {
    v9 = _stricmp(v7, "north-west");
    if ( !v9 )
    {
LABEL_28:
      (*(void (__thiscall **)(int *, int))(*this + 772))(this, v9);
      goto LABEL_29;
    }
    if ( !_stricmp(v8, "north") )
    {
      v9 = 1;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "north-east") )
    {
      v9 = 2;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "west") )
    {
      v9 = 3;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "center") )
    {
      v9 = 4;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "east") )
    {
      v9 = 5;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "south-west") )
    {
      v9 = 6;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "south") )
    {
      v9 = 7;
      goto LABEL_28;
    }
    if ( !_stricmp(v8, "south-east") )
    {
      v9 = 8;
      goto LABEL_28;
    }
  }
LABEL_29:
  v10 = (const char *)sub_1022B4C0(a2, "preserveAspectRatio", (int)Locale);
  if ( v10 && *v10 )
    *((_BYTE *)this + 208) = atoi(v10) != 0;
  v11 = (const char *)sub_1022B4C0(a2, "filtered", (int)Locale);
  if ( v11 && *v11 )
    *((_BYTE *)this + 209) = atoi(v11) != 0;
  sub_10241C00(this, a2);
}
