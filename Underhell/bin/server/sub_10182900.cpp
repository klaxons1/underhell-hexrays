char __thiscall sub_10182900(_BYTE *this, char *String1, char *Source)
{
  char v4; // al
  char v5; // cl
  char v6; // dl
  char v8; // al
  char v9; // cl
  char v10; // dl
  int v11; // [esp+8h] [ebp-10h] BYREF
  char v12; // [esp+Ch] [ebp-Ch]
  char v13; // [esp+10h] [ebp-8h]
  char v14; // [esp+14h] [ebp-4h]

  if ( String1 == "color" || !_stricmp(String1, "color") )
  {
    sub_10264F30((int)&v11, 4, Source);
    v4 = v12;
    v5 = v13;
    this[824] = v11;
    v6 = v14;
    this[825] = v4;
    this[826] = v5;
    this[827] = v6;
    return 1;
  }
  else if ( String1 == "color2" || !_stricmp(String1, "color2") )
  {
    sub_10264F30((int)&v11, 4, Source);
    v8 = v12;
    v9 = v13;
    this[828] = v11;
    v10 = v14;
    this[829] = v8;
    this[830] = v9;
    this[831] = v10;
    return 1;
  }
  else
  {
    return sub_100EBE90((int)this, String1, Source);
  }
}
