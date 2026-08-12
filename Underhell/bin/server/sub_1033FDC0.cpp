int __thiscall sub_1033FDC0(float *this, float a2, float a3)
{
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  float v8; // edx
  double v9; // st7
  int (__thiscall *v10)(float *); // eax
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  char v14[76]; // [esp+0h] [ebp-6Ch] BYREF
  int v15; // [esp+4Ch] [ebp-20h]
  float v16[3]; // [esp+54h] [ebp-18h] BYREF
  float v17[3]; // [esp+60h] [ebp-Ch] BYREF
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  if ( a3 > 64.0 || a2 < 0.7 )
    return 0;
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( fabs(*(float *)(v5 + 588) - this[147]) > 64.0 )
      return 0;
  }
  v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( __RTDynamicCast(
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseHeadcrab `RTTI Type Descriptor',
         0) )
  {
    return 0;
  }
  v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v8 = *this;
  v16[0] = *v7;
  v16[1] = v7[1];
  v9 = v7[2];
  v10 = *(int (__thiscall **)(float *))(LODWORD(v8) + 368);
  v16[2] = v9;
  v11 = v10(this);
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
  v17[0] = *v12;
  v17[1] = v12[1];
  v17[2] = v12[2];
  sub_1002A5F0((int)&savedregs, (int)this, v16, v17, 1174421507, (int)this, 0, (int)v14);
  v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  return v15 != v13 ? 0 : 0x17;
}
