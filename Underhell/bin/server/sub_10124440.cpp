int __usercall sub_10124440@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  result = sub_100E8220(a2, "sprites/flare6.vmt");
  *(_DWORD *)(a1 + 800) = result;
  return result;
}
