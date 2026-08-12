char __thiscall sub_1014E5B0(int *this, char *String1, int String)
{
  int *v5; // ecx

  if ( !_stricmp(String1, "StartDisabled") )
  {
    if ( *(_BYTE *)String == 49 )
    {
      String = -2;
      sub_1014E4C0(this + 209, &String);
    }
    else
    {
      String = 1;
      sub_1014E470(this + 209, &String);
    }
    return 1;
  }
  else if ( !_stricmp(String1, "Alpha") )
  {
    this[210] = atoi((const char *)String);
    return 1;
  }
  else if ( !_stricmp(String1, "Frozen") )
  {
    v5 = this + 209;
    if ( *(_BYTE *)String == 49 )
    {
      String = 4;
      sub_1014E470(v5, &String);
    }
    else
    {
      String = -5;
      sub_1014E4C0(v5, &String);
    }
    return 1;
  }
  else
  {
    return sub_100EBE90((int)this, String1, (char *)String);
  }
}
