int __cdecl sub_1028A0C0(
        int a1,
        float a2,
        int a3,
        float *a4,
        int a5,
        float *a6,
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
        int a19,
        int a20)
{
  int v20; // eax
  int v21; // eax
  float *v22; // edx
  unsigned int v23; // ecx
  float *v24; // eax
  float *v25; // edx
  unsigned int v26; // ecx
  float *v27; // eax

  if ( a3 <= 0 )
    v20 = 0;
  else
    v20 = a3 & 0xFFF | 0x1000;
  if ( dword_106D58F0 != v20 )
    dword_106D58F0 = v20;
  if ( a5 <= 0 )
    v21 = 0;
  else
    v21 = a5 & 0xFFF | 0x1000;
  if ( dword_106D5900 != v21 )
    dword_106D5900 = v21;
  v22 = a4;
  if ( !a4 )
    v22 = &flt_106F1CA8;
  v23 = 12;
  v24 = v22;
  while ( *(_DWORD *)((char *)v24 + (char *)&flt_106D58F4 - (char *)v22) == *(_DWORD *)v24 )
  {
    v23 -= 4;
    ++v24;
    if ( v23 < 4 )
      goto LABEL_18;
  }
  flt_106D58F4 = *v22;
  flt_106D58F8 = v22[1];
  flt_106D58FC = v22[2];
LABEL_18:
  v25 = a6;
  if ( !a6 )
    v25 = &flt_106F1CA8;
  v26 = 12;
  v27 = v25;
  while ( *(_DWORD *)((char *)v27 + (char *)&flt_106D5904 - (char *)v25) == *(_DWORD *)v27 )
  {
    v26 -= 4;
    ++v27;
    if ( v26 < 4 )
      goto LABEL_25;
  }
  flt_106D5904 = *v25;
  flt_106D5908 = v25[1];
  flt_106D590C = v25[2];
LABEL_25:
  if ( dword_106D58B4 != a7 )
    dword_106D58B4 = a7;
  if ( dword_106D58B8 != a8 )
    dword_106D58B8 = a8;
  if ( dword_106D58BC != a9 )
    dword_106D58BC = a9;
  if ( dword_106D58C0 != a10 )
    dword_106D58C0 = a10;
  if ( dword_106D58C4 != a11 )
    dword_106D58C4 = a11;
  if ( dword_106D58C8 != a12 )
    dword_106D58C8 = a12;
  if ( dword_106D58CC != a13 )
    dword_106D58CC = a13;
  if ( dword_106D58D0 != a14 )
    dword_106D58D0 = a14;
  if ( dword_106D58D4 != a15 )
    dword_106D58D4 = a15;
  if ( dword_106D58E8 != a20 )
    dword_106D58E8 = a20;
  if ( dword_106D58D8 != a16 )
    dword_106D58D8 = a16;
  if ( dword_106D58DC != a17 )
    dword_106D58DC = a17;
  if ( dword_106D58E0 != a18 )
    dword_106D58E0 = a18;
  if ( dword_106D58E4 != a19 )
    dword_106D58E4 = a19;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D58A8, a1, a2);
}
