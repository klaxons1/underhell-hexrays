void __userpurge sub_101C3040(int a1@<ecx>, int a2@<edi>, float a3)
{
  char v4; // bl
  int v5; // eax
  float v6; // eax
  float v7; // edx
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st7
  float v16; // [esp+4h] [ebp-1Ch]
  float v17; // [esp+10h] [ebp-10h] BYREF
  float v18; // [esp+14h] [ebp-Ch]
  float v19; // [esp+18h] [ebp-8h]
  char v20; // [esp+1Eh] [ebp-2h]
  char v21; // [esp+1Fh] [ebp-1h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  sub_101C4870(a1);
  v4 = *(_BYTE *)(a1 + 256) & 1;
  v20 = sub_101C6E40(a1);
  v21 = 0;
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 256);
    if ( (v5 & 0x400) == 0 && ((v5 & 0x800) == 0 || !*(_BYTE *)(a1 + 447)) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a1);
      if ( !v20 )
      {
        sub_101C2F60(a1, a3);
        v21 = 1;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x200000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    if ( *(float *)(a1 + 476) != flt_106F1CA8
      || *(float *)(a1 + 480) != flt_106F1CAC
      || *(float *)(a1 + 484) != flt_106F1CB0
      || !sub_10018D70((float *)(a1 + 464), &flt_106F1CA8) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a1);
      v6 = *(float *)(a1 + 476);
      v7 = *(float *)(a1 + 484);
      v18 = *(float *)(a1 + 480);
      v17 = v6;
      v19 = v7;
      sub_101C73D0(0);
      if ( !v4 || (v16 = v18 * v18 + v17 * v17 + v19 * v19, v8 = off_10689708(v16), 0.0 == v8) )
      {
        v13 = v18;
        v12 = v17;
      }
      else
      {
        if ( *(float *)(dword_106B6F54 + 44) <= v8 )
          v9 = v8;
        else
          v9 = *(float *)(dword_106B6F54 + 44);
        v10 = v8 - *(float *)(dword_106B7344 + 44) * *(float *)(a1 + 556) * (v9 * a3);
        if ( v10 >= 0.0 )
          v11 = v10 / v8;
        else
          v11 = 0.0 / v8;
        v12 = v17 * v11;
        v13 = v11 * v18;
      }
      v17 = v12 + *(float *)(a1 + 464);
      v18 = v13 + *(float *)(a1 + 468);
      v19 = *(float *)(a1 + 472) + v19;
      sub_100DD660(a1, &v17);
      sub_101C5210(a3);
      sub_101C4870(a1);
      sub_101C23C0((void *)a1, a3, 0);
      sub_101C4870(a1);
      if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a1);
      v14 = *(float *)(a1 + 480);
      v15 = *(float *)(a1 + 484);
      v17 = *(float *)(a1 + 476) - *(float *)(a1 + 464);
      v18 = v14 - *(float *)(a1 + 468);
      v19 = v15 - *(float *)(a1 + 472);
      sub_100DD660(a1, &v17);
      sub_101C4870(a1);
      if ( (*(_BYTE *)(a1 + 256) & 1) == 0 )
        sub_101C2A30(a1, (int)&savedregs, a2, a1);
      sub_100DCB50((void *)a1, 0);
    }
  }
  if ( (*(_BYTE *)(a1 + 256) & 1) == 0 )
  {
    if ( v21 )
      sub_101C2F60(a1, a3);
  }
}
