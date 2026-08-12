int __usercall sub_101B2920@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ebx
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float v9; // [esp+10h] [ebp-38h]
  float v10[3]; // [esp+24h] [ebp-24h] BYREF
  float v11[3]; // [esp+30h] [ebp-18h] BYREF
  int v12; // [esp+3Ch] [ebp-Ch] BYREF
  float v13; // [esp+40h] [ebp-8h]
  float v14; // [esp+44h] [ebp-4h]

  sub_100E38F0((float *)a1);
  if ( (*(_DWORD *)(a1 + 248) & 0x10) == 0 && !sub_101B1470(a1, a2) )
    sub_1025FAC0(a1);
  sub_101B0CE0(a1 + 884, (_DWORD *)a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *(float *)&v12 = *(float *)(a1 + 864) - *(float *)(a1 + 580);
  v13 = *(float *)(a1 + 868) - *(float *)(a1 + 584);
  v14 = *(float *)(a1 + 872) - *(float *)(a1 + 588);
  off_10689714();
  sub_1025F3D0((int)&v12, 0.0020000001);
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 20))(*(_DWORD *)(a1 + 800));
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 24))(*(_DWORD *)(a1 + 800));
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 216))(v4, v11, 0);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v3 + 216))(v3, v10, 0);
  v5 = v11[0] - v10[0];
  v6 = v11[1] - v10[1];
  v7 = v11[2] - v10[2];
  *(float *)(a1 + 928) = *(float *)&v12;
  *(float *)(a1 + 932) = v13;
  *(float *)(a1 + 936) = v14;
  *(float *)(a1 + 884) = v5;
  *(float *)(a1 + 888) = v6;
  *(float *)(a1 + 892) = v7;
  *(float *)(a1 + 896) = *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)a1, (int)sub_101B2810, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
  return sub_100EC4A0((int *)a1, v9, 0);
}
