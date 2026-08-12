int __cdecl sub_1028B670(
        int a1,
        float a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  unsigned int v19; // ecx
  float *v20; // eax

  v19 = 12;
  v20 = a3;
  while ( *(_DWORD *)((char *)v20 + (char *)&flt_106D6360 - (char *)a3) == *(_DWORD *)v20 )
  {
    v19 -= 4;
    ++v20;
    if ( v19 < 4 )
      goto LABEL_6;
  }
  flt_106D6360 = *a3;
  flt_106D6364 = a3[1];
  flt_106D6368 = a3[2];
LABEL_6:
  if ( dword_106D636C != a4 )
    dword_106D636C = a4;
  if ( dword_106D6370 != a5 )
    dword_106D6370 = a5;
  if ( dword_106D6324 != a6 )
    dword_106D6324 = a6;
  if ( dword_106D6328 != a7 )
    dword_106D6328 = a7;
  if ( dword_106D632C != a8 )
    dword_106D632C = a8;
  if ( dword_106D6330 != a9 )
    dword_106D6330 = a9;
  if ( dword_106D6334 != a10 )
    dword_106D6334 = a10;
  if ( dword_106D6338 != a11 )
    dword_106D6338 = a11;
  if ( dword_106D633C != a11 )
    dword_106D633C = a11;
  if ( dword_106D6340 )
    dword_106D6340 = 0;
  if ( dword_106D6344 != a13 )
    dword_106D6344 = a13;
  if ( dword_106D6358 != a18 )
    dword_106D6358 = a18;
  if ( dword_106D6348 != a14 )
    dword_106D6348 = a14;
  if ( dword_106D634C != a15 )
    dword_106D634C = a15;
  if ( dword_106D6350 != a16 )
    dword_106D6350 = a16;
  if ( dword_106D6354 != a17 )
    dword_106D6354 = a17;
  if ( dword_106D635C != a19 )
    dword_106D635C = a19;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D6318, a1, a2);
}
