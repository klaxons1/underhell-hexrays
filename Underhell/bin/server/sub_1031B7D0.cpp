void __userpurge sub_1031B7D0(int a1@<ecx>, int a2@<edi>, char a3, float *a4, char a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st4
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st7
  double v16; // st5
  double v17; // st4
  double v18; // st7
  int v19; // eax
  int v20; // edx
  float v21[3]; // [esp+14h] [ebp-24h] BYREF
  float v22; // [esp+20h] [ebp-18h]
  float v23; // [esp+24h] [ebp-14h]
  float v24; // [esp+28h] [ebp-10h]
  float v25; // [esp+2Ch] [ebp-Ch] BYREF
  float v26; // [esp+30h] [ebp-8h]
  float v27; // [esp+34h] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 4245) )
  {
    sub_100BD6D0((void *)a1, *(_DWORD *)(a1 + 4200), (int)v21, 0, 0, 0);
    if ( sub_10318DC0(v21) )
    {
      v6 = 0.0;
      if ( a4 )
      {
        v25 = *a4;
        v26 = a4[1];
        v18 = a4[2];
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        {
          sub_100DAFD0(a1);
          v6 = 0.0;
        }
        v7 = *(float *)(a1 + 476);
        v25 = *(float *)(a1 + 476);
        v8 = *(float *)(a1 + 480);
        v26 = *(float *)(a1 + 480);
        v9 = *(float *)(a1 + 484);
        v27 = *(float *)(a1 + 484);
        v10 = v9 * v6;
        v22 = v8 - v10;
        v23 = v10 - v7;
        v24 = v7 * v6 - v6 * v8;
        off_10689714();
        v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                10.0,
                30.0);
        v22 = v22 * v11;
        v23 = v23 * v11;
        v24 = v11 * v24;
        if ( ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               0.0,
               1.0) >= 0.5 )
          v12 = -1.0;
        else
          v12 = 1.0;
        v13 = v22 * v12;
        v14 = v12;
        v15 = v12 * v23;
        v16 = v14 * v24;
        v17 = 0.0;
        if ( v27 <= 0.0 )
          v17 = v27;
        v25 = v13 + v25;
        v26 = v15 + v26;
        v18 = v16 + v17;
      }
      v27 = v18;
      if ( !a3 || sub_10315590((_DWORD *)a1, a2, v21, &v25) )
      {
        sub_100C74B0((volatile signed __int32 *)a1, dword_106E348C, 1);
        sub_1023C380((_DWORD *)a1, (int)"NPC_AttackHelicopter.DropMine", 0.0, 0);
        v19 = sub_10317730(a1, v21, &v25);
        if ( v19 )
        {
          if ( a5 )
            sub_10035270(v19, v20, 1);
        }
      }
    }
  }
}
