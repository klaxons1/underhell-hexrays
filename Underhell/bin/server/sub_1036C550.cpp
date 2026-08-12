int __thiscall sub_1036C550(float *this, float a2, float a3)
{
  int result; // eax
  int v5; // eax
  int v6; // edi
  bool v7; // bl
  float *v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  int (__thiscall *v14)(float *); // eax
  int v15; // ebx
  float *v16; // edi
  float *v17; // eax
  float *v18; // eax
  int v19; // edi
  float *v20; // eax
  int v21; // eax
  bool v22; // zf
  int v23; // [esp-20h] [ebp-9Ch]
  float *v24; // [esp-1Ch] [ebp-98h]
  int v25; // [esp-Ch] [ebp-88h]
  _BYTE v26[76]; // [esp+4h] [ebp-78h] BYREF
  int v27; // [esp+50h] [ebp-2Ch]
  _BYTE v28[12]; // [esp+58h] [ebp-24h] BYREF
  float v29[2]; // [esp+64h] [ebp-18h] BYREF
  float v30; // [esp+6Ch] [ebp-10h]
  float v31; // [esp+70h] [ebp-Ch] BYREF
  float v32; // [esp+74h] [ebp-8h]
  float v33; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF
  float v35; // [esp+84h] [ebp+8h]

  if ( this[418] > (double)*(float *)(dword_106B31C8 + 12) || ((_BYTE)this[64] & 1) == 0 )
    return 0;
  if ( !*((_BYTE *)this + 3655) && a2 < 0.65 )
    return 40;
  if ( a3 < 48.0 )
    return 38;
  if ( a3 > 256.0 )
    return 39;
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v6 = v5;
  if ( !v5 )
    return 21;
  v7 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CNPC_Bullseye `RTTI Type Descriptor',
         0) != 0;
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6);
  v8 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 504))(this);
  sub_1002A5F0((int)&savedregs, (int)this, v8, &v31, v23, (int)v29, 33570827, (int)this);
  v9 = (*(int (__thiscall **)(float *, _DWORD, _BYTE *))(*(_DWORD *)this + 368))(this, 0, v26);
  if ( v27 != v9 && (!v7 || v27) )
    return 0;
  v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v35 = *(float *)((*(int (__thiscall **)(int, float *))(*(_DWORD *)v10 + 504))(v10, v29) + 8) - 36.0;
  if ( *((float *)sub_10019640(this) + 2) >= (double)v35 )
    return 21;
  v11 = (float *)sub_10019640(this);
  v12 = *v11;
  v13 = v11[1];
  v30 = v11[2];
  v29[1] = v13;
  v14 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  v29[0] = v12;
  v30 = v30 + 1.0;
  v15 = v14(this);
  v16 = (float *)sub_10019640(this);
  v17 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 504))(v15, v28);
  v31 = *v17 - *v16;
  v32 = v17[1] - v16[1];
  v33 = v17[2] - v16[2];
  off_10689714();
  v31 = v31 * 8.0;
  v32 = v32 * 8.0;
  v33 = 8.0 * v33;
  v18 = (float *)sub_10019640(this);
  v19 = *((_DWORD *)this + 105);
  v31 = *v18 + v31;
  v32 = v18[1] + v32;
  v25 = *((_DWORD *)this + 419);
  v33 = v18[2] + v33;
  v24 = (float *)sub_10073730(v25);
  v20 = (float *)sub_10073710(*((_DWORD *)this + 419));
  sub_100231A0((int)&savedregs, (int)this, v29, &v31, v20, v24, 33701899, (int)this, v19, (int)v26);
  if ( !v27 )
    return 21;
  v21 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v22 = v27 == v21;
  result = 38;
  if ( v22 )
    return 21;
  return result;
}
