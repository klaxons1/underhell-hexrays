// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_1040C130(int a1@<ecx>, float a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // edx
  int v6; // edx
  float v7; // [esp+10h] [ebp-E4h]
  float v9[3]; // [esp+20h] [ebp-D4h] BYREF
  float v10[19]; // [esp+2Ch] [ebp-C8h] BYREF
  float v11[22]; // [esp+78h] [ebp-7Ch] BYREF
  _DWORD v12[3]; // [esp+D0h] [ebp-24h] BYREF
  float v13[6]; // [esp+DCh] [ebp-18h] BYREF
  float retaddr; // [esp+F4h] [ebp+0h]

  v13[3] = a2;
  v13[4] = retaddr;
  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v7, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 252);
  v13[0] = *(float *)(a1 + 580);
  v13[1] = *(float *)(a1 + 584);
  v13[2] = *(float *)(a1 + 588) - 1200.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v11, (float *)(a1 + 580), v13);
  sub_10265570(v12, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    16395,
    v12,
    v9,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 0, 0, 1, 5.0);
  if ( fabs(v9[2] - v10[2]) < 240.0 )
  {
    sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
    sub_1023C380((_DWORD *)a1, (int)"Weapon_StriderBuster.Dud_Detonate", 0.0, 0);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_101AB000(
      "striderbuster_break_flechette",
      *(float *)(a1 + 580),
      *(float *)(a1 + 584),
      *(float *)(a1 + 588),
      *(float *)(a1 + 704),
      *(float *)(a1 + 708),
      *(float *)(a1 + 712),
      0);
    if ( *(_DWORD *)(a1 + 220) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
      *(_DWORD *)(a1 + 220) = 0;
    }
    sub_10247EC0(v11);
    v6 = *(_DWORD *)a1;
    v11[13] = 1.0;
    (*(int (__thiscall **)(int))(v6 + 8))(a1);
    (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    sub_1040BF40(a1, a1);
  }
}
