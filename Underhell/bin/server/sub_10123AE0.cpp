char __thiscall sub_10123AE0(int this, char *String1, float String)
{
  double v5; // st7
  int v6; // edx
  int v7; // eax
  float v8; // [esp+8h] [ebp-Ch] BYREF
  int v9[2]; // [esp+Ch] [ebp-8h] BYREF

  if ( String1 == "_light" || !_stricmp(String1, "_light") )
  {
    sub_10264FB0((int)v9, (char *)LODWORD(String));
    sub_100C35E0((_BYTE *)(this + 116), v9[0], SBYTE1(v9[0]), SBYTE2(v9[0]));
    return 1;
  }
  else if ( String1 == "pitch" || !_stricmp(String1, "pitch") )
  {
    v5 = atof((const char *)LODWORD(String));
    String = v5;
    if ( 0.0 == v5 )
    {
      return 1;
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      {
        sub_100DAE60(this);
        v5 = String;
      }
      v6 = *(_DWORD *)(this + 708);
      v7 = *(_DWORD *)(this + 712);
      v8 = -v5;
      v9[0] = v6;
      v9[1] = v7;
      sub_100E0EA0(this, &v8);
      return 1;
    }
  }
  else if ( String1 == "spawnflags" || !_stricmp(String1, "spawnflags") )
  {
    String = COERCE_FLOAT(atoi((const char *)LODWORD(String)));
    *(_BYTE *)(this + 800) = *sub_10123390((_BYTE *)(this + 801), (char *)&String);
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, (char *)LODWORD(String));
  }
}
