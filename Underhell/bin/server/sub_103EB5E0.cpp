int __thiscall sub_103EB5E0(int this, float *a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // eax
  float *v6; // eax
  double v7; // st5
  int (__thiscall *v8)(int); // eax
  int v9; // eax
  double v10; // st7
  double v11; // st6
  float *v12; // eax
  double v13; // st6
  double v14; // st7
  float *v16; // [esp-14h] [ebp-A4h]
  _BYTE v17[44]; // [esp+Ch] [ebp-84h] BYREF
  float v18; // [esp+38h] [ebp-58h]
  _DWORD v19[3]; // [esp+60h] [ebp-30h] BYREF
  float v20; // [esp+6Ch] [ebp-24h] BYREF
  float v21; // [esp+70h] [ebp-20h]
  float v22; // [esp+74h] [ebp-1Ch]
  float v23; // [esp+78h] [ebp-18h] BYREF
  float v24; // [esp+7Ch] [ebp-14h]
  float v25; // [esp+80h] [ebp-10h]
  float v26; // [esp+84h] [ebp-Ch] BYREF
  float v27; // [esp+88h] [ebp-8h]
  float v28; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  *a3 = 0;
  if ( !*(_BYTE *)(this + 104) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 244))(this);
    *(_BYTE *)(this + 104) = 1;
  }
  v4 = __RTDynamicCast(
         *(_DWORD *)(this + 44),
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseAnimating `RTTI Type Descriptor',
         0);
  if ( !v4 || !*(_BYTE *)(*(_DWORD *)(this + 44) + 1725) )
    return sub_1026C240((int *)this, a2, a3);
  v5 = *(_DWORD *)(this + 84);
  v26 = *(float *)(v5 + 132);
  v27 = *(float *)(v5 + 136);
  v28 = *(float *)(v5 + 140);
  v19[0] = *(_DWORD *)(v5 + 144);
  v19[1] = *(_DWORD *)(v5 + 148);
  v19[2] = *(_DWORD *)(v5 + 152);
  sub_10262790(v4, (int)&v26, (int)v19);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v26 = v26 - *v6;
  v27 = v27 - v6[1];
  v7 = v28 - v6[2];
  v28 = v7;
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
  v23 = v26;
  v24 = v27;
  v25 = v7 + 64.0;
  v20 = v26;
  v21 = v27;
  v22 = v7 - 64.0;
  v16 = (float *)(v8(dword_106B3CDC) + 24);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  sub_100231A0((int)&savedregs, this, &v23, &v20, (float *)(v9 + 12), v16, 33570827, 0, 0, (int)v17);
  v10 = v25 + (v22 - v25) * v18;
  v11 = v24 + (v21 - v24) * v18;
  *(float *)(this + 112) = v23 + (v20 - v23) * v18;
  *(float *)(this + 116) = v11;
  *(float *)(this + 120) = v10;
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v13 = v12[1] + *(float *)(this + 116);
  v14 = v12[2] + *(float *)(this + 120);
  *a2 = *v12 + *(float *)(this + 112);
  a2[1] = v13;
  a2[2] = v14;
  *(_DWORD *)(this + 108) = 0;
  return sub_100BDF40(v4, "exit_tauremoved");
}
