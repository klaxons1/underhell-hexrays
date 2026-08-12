int __stdcall sub_101896F0(int a1)
{
  int v1; // esi

  if ( sub_1042A310(32) )
    v1 = sub_1042A330("sv_gravity");
  else
    v1 = 0;
  sub_1042AF60("convar", "sv_gravity");
  sub_1042AF60("tag", "gravity");
  return sub_1042ADD0(v1);
}
