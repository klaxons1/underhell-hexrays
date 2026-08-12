int __usercall sub_103AFB10@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  const char **v4; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v6) )
  {
    a1[115] = "models/combine_strider.mdl";
    sub_100D8500(a1);
  }
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v6);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  v4 = (const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v6);
  sub_10213890(*v4);
  sub_1023B8B0("NPC_Strider.StriderBusterExplode");
  sub_1023B8B0("explode_5");
  sub_1023B8B0("NPC_Strider.Charge");
  sub_1023B8B0("NPC_Strider.RagdollDetach");
  sub_1023B8B0("NPC_Strider.Whoosh");
  sub_1023B8B0("NPC_Strider.Creak");
  sub_1023B8B0("NPC_Strider.Alert");
  sub_1023B8B0("NPC_Strider.Pain");
  sub_1023B8B0("NPC_Strider.Death");
  sub_1023B8B0("NPC_Strider.FireMinigun");
  sub_1023B8B0("NPC_Strider.Shoot");
  sub_1023B8B0("NPC_Strider.OpenHatch");
  sub_1023B8B0("NPC_Strider.Footstep");
  sub_1023B8B0("NPC_Strider.Skewer");
  sub_1023B8B0("NPC_Strider.Hunt");
  sub_10154360((int)"effects/water_highlight");
  dword_10679D88 = sub_100E8220(a2, "sprites/physbeam.vmt");
  sub_10154360((int)"sprites/bluelaser1");
  sub_10154360((int)"effects/blueblacklargebeam");
  sub_10154360((int)"effects/strider_pinch_dudv");
  sub_10154360((int)"effects/blueblackflash");
  sub_10154360((int)"effects/strider_bulge_dudv");
  sub_10154360((int)"effects/strider_muzzle");
  sub_100E8220(a2, "models/chefhat.mdl");
  sub_10260680("sparktrail", 0);
  return sub_10021D80((int)a1);
}
