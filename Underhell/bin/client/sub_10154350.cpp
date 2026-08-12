char __cdecl sub_10154350(int a1)
{
  int *v1; // ecx
  float *v2; // eax
  float *v3; // eax

  v1 = (int *)dword_1043CCC8;
  if ( !dword_1043CCC8 )
  {
    v2 = (float *)sub_10034900(0x588u);
    v3 = v2 ? sub_10153FF0(v2) : 0;
    dword_1043CCC8 = (int)v3;
    sub_10151CE0(v3);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1043CCC8 + 324))(dword_1043CCC8, 0, 13);
    v1 = (int *)dword_1043CCC8;
    if ( !dword_1043CCC8 )
      return 0;
  }
  sub_101541A0(v1, a1);
  return 1;
}
