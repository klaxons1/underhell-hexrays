int __usercall sub_10124890@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  if ( *(_DWORD *)(dword_106B3D0C + 48) == 1 )
    result = sub_100E8220(a2, "models/germanygibs.mdl");
  else
    result = sub_100E8220(a2, "models/gibs/hgibs.mdl");
  *(_DWORD *)(a1 + 812) = result;
  return result;
}
