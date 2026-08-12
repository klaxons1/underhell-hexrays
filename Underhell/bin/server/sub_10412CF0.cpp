__int16 __usercall sub_10412CF0@<ax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char **v2; // esi
  const char **v3; // esi

  sub_102664C0(a1, a2);
  v2 = (const char **)off_10688A80;
  do
    sub_100E8220(a2, *v2++);
  while ( (int)v2 < (int)off_10688A8C );
  v3 = (const char **)off_10688A8C;
  do
    sub_100E8220(a2, *v3++);
  while ( (int)v3 < (int)&dword_10688AA4 );
  sub_1023B8B0("Weapon_AR2.Single");
  sub_1023B8B0("PropAPC.FireRocket");
  return sub_1023B8B0("combine.door_lock");
}
