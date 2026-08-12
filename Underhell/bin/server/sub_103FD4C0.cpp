void __cdecl sub_103FD4C0(_DWORD *a1, int a2)
{
  char *v2; // eax

  if ( *(_DWORD *)(a2 + 424) )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v2 = sub_100E3960((int)"player_pickup", (float *)(a2 + 580), &flt_106F1CB4, (int)a1);
    if ( v2 )
      sub_103FD370((int)v2, a1, (_DWORD *)a2);
  }
}
