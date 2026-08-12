char __thiscall sub_10178EA0(void *this, char *String1, char *String)
{
  if ( String1 == "_light" || !_stricmp(String1, "_light") )
    return 1;
  else
    return sub_10178C90((int)this, String1, String);
}
