__int16 __usercall sub_102C97E0@<ax>(int a1@<ecx>, int a2@<edi>)
{
  __int16 result; // ax
  char *v4; // esi

  *(_DWORD *)(a1 + 820) = sub_100E8220(a2, "sprites/physbeam.vmt");
  sub_1023B8B0("Weapon_Mortar.Impact");
  result = sub_10154360((int)"effects/ar2ground2");
  if ( *(_DWORD *)(a1 + 816) )
  {
    v4 = *(char **)(a1 + 816);
    if ( !v4 )
      v4 = (char *)String;
    return sub_1023B8B0(v4);
  }
  return result;
}
