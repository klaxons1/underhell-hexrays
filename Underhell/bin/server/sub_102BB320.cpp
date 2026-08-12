void __usercall sub_102BB320(int a1@<ecx>, int a2@<edi>)
{
  sub_100BD350();
  sub_100E8220(a2, "models/props_combine/headcrabcannister01a.mdl");
  sub_100E8220(a2, "models/props_combine/headcrabcannister01b.mdl");
  sub_100E8220(a2, "models/props_combine/headcrabcannister01a_skybox.mdl");
  sub_100E8220(a2, "sprites/smoke.vmt");
  sub_1023B8B0("HeadcrabCanister.LaunchSound");
  sub_1023B8B0("HeadcrabCanister.AfterLanding");
  sub_1023B8B0("HeadcrabCanister.Explosion");
  sub_1023B8B0("HeadcrabCanister.IncomingSound");
  sub_1023B8B0("HeadcrabCanister.SkyboxExplosion");
  sub_1023B8B0("HeadcrabCanister.Open");
  sub_10260680(*(&off_106614CC + *(_DWORD *)(a1 + 1252)), 0);
}
