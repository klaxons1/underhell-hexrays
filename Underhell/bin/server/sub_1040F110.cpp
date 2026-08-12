__int16 __usercall sub_1040F110@<ax>(int a1@<ecx>, int a2@<edi>)
{
  __int16 result; // ax
  char *v4; // esi

  *(_DWORD *)(a1 + 2200) = sub_100E8220(a2, "sprites/lgtning.vmt");
  result = sub_1023B8B0("GrenadeHomer.StopSounds");
  if ( *(_DWORD *)(a1 + 2156) )
  {
    v4 = *(char **)(a1 + 2156);
    if ( !v4 )
      v4 = (char *)String;
    return sub_1023B8B0(v4);
  }
  return result;
}
