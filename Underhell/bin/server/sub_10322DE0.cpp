int __usercall sub_10322DE0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  int *v4; // ecx
  double v5; // st6
  double v6; // st7
  int v8; // [esp+8h] [ebp-2Ch] BYREF
  float v9; // [esp+Ch] [ebp-28h]
  float v10; // [esp+10h] [ebp-24h]
  int v11; // [esp+14h] [ebp-20h] BYREF
  float v12; // [esp+18h] [ebp-1Ch]
  float v13; // [esp+1Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-14h]
  float v15; // [esp+24h] [ebp-10h]
  float v16; // [esp+28h] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-8h]
  float v18; // [esp+30h] [ebp-4h] BYREF
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  sub_103224B0(a1, (int)&savedregs, a2, a1, &v18);
  v3 = *(_DWORD *)(a1 + 248);
  v17 = v18;
  if ( (v3 & 0x20000) == 0 && *(_DWORD *)(a1 + 3668) != LODWORD(v17) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 3668);
    }
    *(float *)(a1 + 3668) = v18;
  }
  sub_100BF1B0((void *)a1, "TongueEnd", (int)&v11, 0, 0, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = v13 - *(float *)(a1 + 588);
  v14 = v11;
  v8 = v11;
  v15 = v12;
  v9 = v12;
  v16 = v13 - v5;
  v10 = v16;
  sub_10322B50((float *)(a1 + 3696), (float *)&v8);
  v6 = *(float *)(a1 + 3668);
  v8 = *(int *)(a1 + 3696);
  v9 = *(float *)(a1 + 3700);
  v10 = *(float *)(a1 + 3704) - v6;
  sub_10322AE0((float *)(a1 + 3708), (float *)&v8);
  return sub_101126F0((int *)(a1 + 320));
}
