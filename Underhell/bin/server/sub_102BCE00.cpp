void __usercall sub_102BCE00(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st3
  double v6; // st5
  double v7; // st3
  double v8; // st4
  double v9; // st5
  double v10; // st5
  double v11; // st3
  double v12; // st6
  double v13; // st3
  float v14; // [esp+8h] [ebp-38h]
  int v15[3]; // [esp+18h] [ebp-28h] BYREF
  _DWORD v16[3]; // [esp+24h] [ebp-1Ch] BYREF
  int v17; // [esp+30h] [ebp-10h] BYREF
  float v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  v20 = *(float *)(dword_106B31C8 + 12);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v3 = *(_DWORD *)(a1 + 584);
  v4 = *(_DWORD *)(a1 + 588);
  v16[0] = *(_DWORD *)(a1 + 580);
  v16[1] = v3;
  v16[2] = v4;
  sub_102BE0F0(v20, (int)&v17, (int)v15);
  if ( !*(_BYTE *)(a1 + 1280) && (*(_BYTE *)(a1 + 248) & 1) == 0 )
  {
    v5 = v18 - *(float *)(a1 + 1264);
    v6 = v5 * v5;
    v7 = *(float *)&v17 - *(float *)(a1 + 1260);
    v8 = v6;
    v9 = v19 - *(float *)(a1 + 1268);
    if ( v7 * v7 + v8 + v9 * v9 <= *(float *)(a1 + 1180) * *(float *)(a1 + 1180) )
    {
      sub_1023C380((_DWORD *)a1, (int)"HeadcrabCanister.IncomingSound", 0.0, 0);
      *(_BYTE *)(a1 + 1280) = 1;
    }
  }
  sub_102BC290(a1, (int)&savedregs, a2, a1, (float *)&v17);
  if ( (unsigned __int8)sub_102BE0C0(v20) )
  {
    if ( !*(_BYTE *)(a1 + 1281) )
    {
      sub_102BBEA0(a1);
      *(_BYTE *)(a1 + 1281) = 1;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x40000) == 0 )
      sub_102BC790(a1);
  }
  else
  {
    sub_100E0D20(a1, (float *)&v17);
    sub_100DCB50((void *)a1, (int)v16);
    v14 = *(float *)(dword_106B31C8 + 12) + 0.2;
    sub_100EC4A0((int *)a1, v14, 0);
    sub_100E0EA0(a1, (float *)v15);
    if ( !*(_BYTE *)(a1 + 1281) )
    {
      v10 = v19 - *(float *)(a1 + 1268);
      v11 = v18 - *(float *)(a1 + 1264);
      v12 = v11 * v11;
      v13 = *(float *)&v17 - *(float *)(a1 + 1260);
      if ( *(float *)(a1 + 352) * *(float *)(a1 + 352) > v13 * v13 + v12 + v10 * v10 )
      {
        sub_102BBEA0(a1);
        *(_BYTE *)(a1 + 1281) = 1;
      }
    }
  }
}
