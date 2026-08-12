__int16 __usercall sub_102C8DA0@<ax>(int a1@<ecx>, int a2@<edi>)
{
  __int16 result; // ax

  if ( *(_DWORD *)(a1 + 1036) )
    sub_100E8220(a2, *(const char **)(a1 + 1036));
  if ( *(_DWORD *)(a1 + 1040) )
    sub_100E8220(a2, *(const char **)(a1 + 1040));
  if ( *(_DWORD *)(a1 + 1048) )
    sub_1023B8B0(*(char **)(a1 + 1048));
  if ( *(_DWORD *)(a1 + 1052) )
    sub_1023B8B0(*(char **)(a1 + 1052));
  if ( *(_DWORD *)(a1 + 1056) )
    sub_1023B8B0(*(char **)(a1 + 1056));
  result = sub_1023B8B0("Func_Tank.BeginUse");
  if ( *(_DWORD *)(a1 + 1392) == 2 )
    return sub_1023B8B0("NPC_Combine_Cannon.FireBullet");
  return result;
}
