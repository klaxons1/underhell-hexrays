char __thiscall sub_103D89E0(int this, char *String1, char *String)
{
  double v4; // st7

  if ( String1 == "radius" || !_stricmp(String1, "radius") )
  {
    v4 = atof(String);
    *(float *)(this + 3648) = v4;
    *(_BYTE *)(this + 3646) = 0.0 != v4;
    return 1;
  }
  else if ( String1 == "misses" || !_stricmp(String1, "misses") )
  {
    *(_DWORD *)(this + 3652) = atoi(String);
    return 1;
  }
  else
  {
    return sub_10021EA0((void *)this, String1, String);
  }
}
