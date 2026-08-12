int __thiscall sub_100D5F70(void *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int result; // eax

  v2 = 0;
  if ( (dword_1043270C & 3) != 0 )
    v2 = 0x20000;
  v3 = -3;
  if ( (dword_10432710 & 0x20000) != 0 )
    v3 = -4;
  if ( a2 )
    dword_1043270C &= v3;
  if ( (dword_10432700 & 3) != 0 )
    v2 |= 0x40000u;
  v4 = -3;
  if ( (dword_10432710 & 0x40000) != 0 )
    v4 = -4;
  if ( a2 )
    dword_10432700 &= v4;
  if ( (dword_10432634 & 3) != 0 )
    v2 |= 1u;
  v5 = -3;
  if ( (dword_10432710 & 1) != 0 )
    v5 = -4;
  if ( a2 )
    dword_10432634 &= v5;
  if ( (dword_10432604 & 3) != 0 )
    v2 |= 4u;
  v6 = -3;
  if ( (dword_10432710 & 4) != 0 )
    v6 = -4;
  if ( a2 )
    dword_10432604 &= v6;
  if ( (dword_10432640 & 3) != 0 )
    v2 |= 2u;
  v7 = -3;
  if ( (dword_10432710 & 2) != 0 )
    v7 = -4;
  if ( a2 )
    dword_10432640 &= v7;
  if ( (dword_104326D0 & 3) != 0 )
    v2 |= 8u;
  v8 = -3;
  if ( (dword_10432710 & 8) != 0 )
    v8 = -4;
  if ( a2 )
    dword_104326D0 &= v8;
  if ( (dword_104326C4 & 3) != 0 )
    v2 |= 0x10u;
  v9 = -3;
  if ( (dword_10432710 & 0x10) != 0 )
    v9 = -4;
  if ( a2 )
    dword_104326C4 &= v9;
  if ( (dword_1043264C & 3) != 0 )
    v2 |= 0x20u;
  v10 = -3;
  if ( (dword_10432710 & 0x20) != 0 )
    v10 = -4;
  if ( a2 )
    dword_1043264C &= v10;
  if ( (dword_1043267C & 3) != 0 )
    v2 |= 0x80u;
  v11 = -3;
  if ( (dword_10432710 & 0x80u) != 0 )
    v11 = -4;
  if ( a2 )
    dword_1043267C &= v11;
  if ( (dword_10432670 & 3) != 0 )
    v2 |= 0x100u;
  v12 = -3;
  if ( (dword_10432710 & 0x100) != 0 )
    v12 = -4;
  if ( a2 )
    dword_10432670 &= v12;
  if ( (dword_104326B8 & 3) != 0 )
    v2 |= 0x200u;
  v13 = -3;
  if ( (dword_10432710 & 0x200) != 0 )
    v13 = -4;
  if ( a2 )
    dword_104326B8 &= v13;
  if ( (dword_104326AC & 3) != 0 )
    v2 |= 0x400u;
  v14 = -3;
  if ( (dword_10432710 & 0x400) != 0 )
    v14 = -4;
  if ( a2 )
    dword_104326AC &= v14;
  if ( (dword_10432628 & 3) != 0 )
    v2 |= 0x800u;
  v15 = -3;
  if ( (dword_10432710 & 0x800) != 0 )
    v15 = -4;
  if ( a2 )
    dword_10432628 &= v15;
  if ( (dword_104325F8 & 3) != 0 )
    v2 |= 0x2000u;
  v16 = -3;
  if ( (dword_10432710 & 0x2000) != 0 )
    v16 = -4;
  if ( a2 )
    dword_104325F8 &= v16;
  if ( (dword_104325EC & 3) != 0 )
    v2 |= 0x4000u;
  v17 = -3;
  if ( (dword_10432710 & 0x4000) != 0 )
    v17 = -4;
  if ( a2 )
    dword_104325EC &= v17;
  if ( (dword_104325E0 & 3) != 0 )
    v2 |= 0x8000u;
  v18 = -3;
  if ( (dword_10432710 & 0x8000) != 0 )
    v18 = -4;
  if ( a2 )
    dword_104325E0 &= v18;
  if ( (dword_104325D4 & 3) != 0 )
    v2 |= 0x10000u;
  v19 = -3;
  if ( (dword_10432710 & 0x10000) != 0 )
    v19 = -4;
  if ( a2 )
    dword_104325D4 &= v19;
  if ( (dword_104325BC & 3) != 0 )
    v2 |= 0x80000u;
  v20 = -3;
  if ( (dword_10432710 & 0x80000) != 0 )
    v20 = -4;
  if ( a2 )
    dword_104325BC &= v20;
  if ( (dword_104325B0 & 3) != 0 )
    v2 |= 0x800000u;
  v21 = -3;
  if ( (dword_10432710 & 0x800000) != 0 )
    v21 = -4;
  if ( a2 )
    dword_104325B0 &= v21;
  if ( (dword_104325A4 & 3) != 0 )
    v2 |= 0x1000000u;
  v22 = -3;
  if ( (dword_10432710 & 0x1000000) != 0 )
    v22 = -4;
  if ( a2 )
    dword_104325A4 &= v22;
  if ( 0.0 != ((double (__thiscall *)(void *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_10432590) )
    v2 |= 4u;
  if ( dword_10432718 )
    v2 |= 0x40u;
  if ( (dword_1042FB78 & 0x100000) != 0 )
    v2 |= 0x100000u;
  if ( (dword_1042FB78 & 0x200000) != 0 )
    v2 |= 0x200000u;
  result = ~dword_10432710 & v2;
  if ( a2 )
    dword_10432710 = 0;
  return result;
}
