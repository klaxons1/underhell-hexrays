char __thiscall sub_100E81E0(_WORD *this, int a2, int a3, __int16 a4)
{
  int v4; // ebx
  const char *v5; // esi
  _BYTE *v6; // eax
  _BYTE *v7; // edi
  __int16 v8; // ax
  const char *v9; // eax
  const char *v11; // [esp+4h] [ebp-20h] BYREF
  _BYTE *v12; // [esp+10h] [ebp-14h] BYREF
  int v13[2]; // [esp+18h] [ebp-Ch] BYREF
  _WORD *v14; // [esp+20h] [ebp-4h]

  v14 = this;
  v4 = sub_10229C90(a3);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (const char *)sub_10229A00(v4);
      if ( v5 )
      {
        v11 = v5;
        if ( sub_100E4E20(v14 + 16, (int)&v11) != -1 )
          break;
      }
      v6 = (_BYTE *)sub_1022B4C0("type", (int)Locale);
      v7 = v6;
      if ( !v6 || !*v6 )
      {
        Warning("Unable to find type of meta class %s in file %s\n", v5, a2);
        goto LABEL_11;
      }
      v12 = v6;
      v8 = sub_100E4D20(v14 + 2, (int)&v12);
      if ( v8 == -1 )
      {
        Warning("Type %s of meta class %s undefined!\n", v7, v5);
        goto LABEL_11;
      }
      HIWORD(v13[0]) = v8;
      LOWORD(v13[0]) = a4;
      v13[1] = v4;
      sub_100E7F00(v14 + 16, v5, v13);
LABEL_12:
      v4 = sub_1021F0F0(v4);
      if ( !v4 )
        return 1;
    }
    Warning("Meta class %s duplicately defined (file %s)\n", v5, a2);
LABEL_11:
    v9 = (const char *)sub_10229A00(v4);
    Warning("MetaClass missing for %s\n", v9);
    goto LABEL_12;
  }
  return 1;
}
