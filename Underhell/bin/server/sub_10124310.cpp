int __usercall sub_10124310@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  result = sub_100E8220(a2, "sprites/bubble.vmt");
  *(_DWORD *)(a1 + 808) = result;
  return result;
}
