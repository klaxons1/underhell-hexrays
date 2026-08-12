char __userpurge sub_101581D0@<al>(int a1@<ecx>, int a2@<edi>, int *a3, int a4)
{
  int v5; // eax
  int v6; // eax
  float *v7; // esi
  int v8; // eax
  int v9; // eax
  float *v10; // eax
  bool v11; // zf
  float v13; // [esp+4h] [ebp-14h]
  float v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  if ( a1 == 1424 )
    v5 = 0;
  else
    v5 = a1 - 232;
  LOBYTE(v6) = sub_100F0010(a3, a1 - 228, v5);
  if ( (_BYTE)v6 )
  {
    v7 = (float *)(a1 + 24);
    v16 = 50;
    do
    {
      v8 = sub_10115FB0();
      v13 = (double)v8 * 0.000030518509 + (double)v8 * 0.000030518509 - 1.0;
      v9 = sub_10115FB0();
      v14 = (double)v9 * 0.000030518509 + (double)v9 * 0.000030518509 - 1.0;
      v15 = sub_10115FB0();
      *(v7 - 2) = v13 * 200.0;
      *(v7 - 1) = v14 * 200.0;
      *v7 = 200.0 * ((double)v15 * 0.000030518509 + (double)v15 * 0.000030518509 - 1.0);
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1424) + 36))(a1 - 1424);
      *(v7 - 5) = *v10;
      v7 += 9;
      v11 = v16-- == 1;
      *(v7 - 13) = v10[1];
      *(v7 - 12) = v10[2];
      *(v7 - 8) = 0.0;
      *(v7 - 7) = 0.06666667;
      *(v7 - 6) = 0.0;
    }
    while ( !v11 );
    *(float *)(a1 + 1804) = 0.0;
    v6 = sub_100F0C50(a1 - 228, a2, (int)v7, "particle/particle_sphere");
    *(_DWORD *)(a1 + 1812) = v6;
    *(_DWORD *)(a1 + 1808) = a3;
  }
  return v6;
}
