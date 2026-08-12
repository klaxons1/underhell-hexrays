char __thiscall sub_10116A20(int this, char *String1, char *Buffer)
{
  _DWORD *v4; // ecx

  if ( String1 == "filename" || !_stricmp(String1, "filename") )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(_DWORD **)(this + 24);
      if ( v4 )
      {
        *v4 |= 0x101u;
        *(_WORD *)(sub_10153460(v4) + 2) = 0;
      }
    }
    sub_104299C0((char *)(this + 1104), Buffer, 0x104u);
    return 1;
  }
  else if ( String1 == "maxweight" || !_stricmp(String1, "maxweight") )
  {
    sscanf(Buffer, "%f", &Buffer);
    sub_101169D0((float *)(this + 1100), (float *)&Buffer);
    return 1;
  }
  else
  {
    return sub_10246890(this, String1, Buffer);
  }
}
