__int16 __usercall sub_102E5B20@<ax>(int a1@<ecx>, int a2@<edi>)
{
  *(_DWORD *)(a1 + 1208) = sub_100E8220(a2, "sprites/lgtning.vmt");
  sub_1023B8B0("WeaponDissolve.Dissolve");
  sub_1023B8B0("WeaponDissolve.Charge");
  return sub_1023B8B0("WeaponDissolve.Beam");
}
