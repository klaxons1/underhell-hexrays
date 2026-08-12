__int16 __usercall sub_103E36E0@<ax>(int a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax

  sub_102074B0(a1, a2);
  v3 = *(char **)(a1 + 1124);
  if ( !v3 )
    v3 = (char *)String;
  sub_10269E50((int *)(a1 + 1260), v3);
  sub_100E8220(a2, "models/props_combine/headcrabcannister01a.mdl");
  sub_1023B8B0("HeadcrabCanister.LaunchSound");
  sub_1023B8B0("HeadcrabCanister.Explosion");
  return sub_1023B8B0("Weapon_Mortar.Incomming");
}
