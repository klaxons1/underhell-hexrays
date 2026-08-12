int __usercall sub_102074B0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  const char *v4; // eax
  int v6; // [esp+20h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &v6) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v3 = *(const char **)(a1 + 92);
    if ( !v3 )
      v3 = String;
    Msg(
      "%s at (%.3f, %.3f, %.3f) has no model name!\n",
      v3,
      *(float *)(a1 + 580),
      *(float *)(a1 + 584),
      *(float *)(a1 + 588));
    *(_DWORD *)(a1 + 460) = *sub_10162BE0(&v6, "models/error.mdl");
    sub_100D8500((_DWORD *)a1);
  }
  v4 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &v6);
  if ( !v4 )
    v4 = String;
  sub_100E8220(a2, v4);
  sub_1023B8B0("Metal.SawbladeStick");
  sub_1023B8B0("PropaneTank.Burst");
  sub_10260680("env_flare", 0);
  return sub_100BD350();
}
