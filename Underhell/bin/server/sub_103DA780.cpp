char __thiscall sub_103DA780(int this, float *a2, float *a3, int a4, char a5)
{
  bool v6; // zf
  int *v7; // eax
  int *v8; // eax
  double v10; // st6
  double v11; // st7
  int v12; // eax
  double v13; // st7
  int v14; // ecx
  int v15; // edx
  float v16; // [esp+10h] [ebp-7Ch]
  float v17; // [esp+20h] [ebp-6Ch] BYREF
  float v18; // [esp+24h] [ebp-68h]
  float v19; // [esp+28h] [ebp-64h]
  int v20; // [esp+2Ch] [ebp-60h] BYREF
  float v21; // [esp+30h] [ebp-5Ch]
  float v22; // [esp+34h] [ebp-58h]
  float v23[3]; // [esp+74h] [ebp-18h] BYREF
  float v24; // [esp+80h] [ebp-Ch]
  float v25; // [esp+84h] [ebp-8h]
  float v26; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  v6 = *(_DWORD *)(this + 844) == -1;
  *(float *)(this + 836) = *(float *)(dword_106B31C8 + 12);
  if ( v6 )
  {
    v7 = sub_102D9B20();
    *(_DWORD *)(this + 844) = sub_100B9D10(v7, "SniperRound");
    v8 = sub_102D9B20();
    *(_DWORD *)(this + 848) = sub_100B9D10(v8, "SniperPenetratedRound");
  }
  if ( *(_BYTE *)(this + 857) )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, a4);
  sub_1025F370((void *)this, a2, 0);
  v10 = a3[1] - a2[1];
  v11 = a3[2] - a2[2];
  *(float *)(this + 800) = *a3 - *a2;
  *(float *)(this + 804) = v10;
  *(float *)(this + 808) = v11;
  off_10689714();
  v12 = __RTDynamicCast(
          a4,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CProtoSniper `RTTI Type Descriptor',
          0);
  if ( v12 )
  {
    v13 = *(float *)(dword_106ED1BC + 44);
    if ( (*(_DWORD *)(v12 + 248) & 0x100000) != 0 )
      v13 = v13 * 2.5;
  }
  else
  {
    v13 = *(float *)(dword_106ED1BC + 44);
  }
  v14 = *(_DWORD *)(this + 252);
  *(float *)(this + 852) = v13;
  v24 = *(float *)(this + 800) * 8192.0;
  v25 = *(float *)(this + 804) * 8192.0;
  v26 = 8192.0 * *(float *)(this + 808);
  if ( (v14 & 0x800) != 0 )
    sub_100DAE60(this);
  v15 = *(_DWORD *)(this + 252) >> 11;
  v23[0] = *(float *)(this + 580) + v24;
  v23[1] = *(float *)(this + 584) + v25;
  v23[2] = *(float *)(this + 588) + v26;
  if ( (v15 & 1) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v23, 16395, this, 0, (int)&v17);
  sub_102651C0(a2, (float *)&v20, 0, -1, *(float *)(this + 852), 1, (int)"StriderTracer", 0);
  v16 = (v17 - *(float *)&v20) * (v17 - *(float *)&v20) + (v18 - v21) * (v18 - v21) + (v19 - v22) * (v19 - v22);
  *(float *)(this + 840) = off_10689708(v16) / *(float *)(this + 852) * 0.5 + *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_103DA1D0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(_BYTE *)(this + 857) = 1;
  *(_BYTE *)(this + 856) = a5;
  return 1;
}
