char __thiscall sub_10132390(int this, char *String1, char *Source)
{
  _DWORD *v5; // ecx
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( String1 == "lightcolor" || !_stricmp(String1, "lightcolor") )
  {
    sub_10131F50((float *)v6, Source);
    sub_103DE4C0(v6);
    return 1;
  }
  else if ( String1 == "texturename" || !_stricmp(String1, "texturename") )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(_DWORD **)(this + 24);
      if ( v5 )
      {
        *v5 |= 0x101u;
        *(_WORD *)(sub_10153460(v5) + 2) = 0;
      }
    }
    strcpy((char *)(this + 840), Source);
    return 1;
  }
  else
  {
    return sub_100D7750((_DWORD *)this, String1, Source);
  }
}
