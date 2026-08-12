int __usercall sub_10380F00@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  char *v4; // eax
  char *v5; // eax

  sub_100E8220(a2, "models/player.mdl");
  v3 = (const char *)a1[906];
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  v4 = (char *)a1[907];
  if ( !v4 )
    v4 = (char *)String;
  sub_1023B8B0(v4);
  v5 = (char *)a1[908];
  if ( !v5 )
    v5 = (char *)String;
  sub_1023B8B0(v5);
  sub_10260680("grenade_homer", 0);
  return sub_10021D80((int)a1);
}
