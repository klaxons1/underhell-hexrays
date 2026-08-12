int __usercall sub_1013B5B0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  *(_DWORD *)(a1 + 804) = sub_100E8220(a2, "sprites/glow01.vmt");
  return sub_1023B8B0("DoSpark");
}
