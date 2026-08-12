int sub_10333B40()
{
  int v0; // eax
  int v2; // eax

  v0 = sub_101679A0((int)"gordon_precriminal");
  if ( sub_10167A00(v0) == 1 )
    return 7;
  v2 = sub_101679A0((int)"citizens_passive");
  return sub_10167A00(v2) != 1 ? 2 : 7;
}
