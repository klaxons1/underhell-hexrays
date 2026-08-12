bool __thiscall sub_1026C030(int *this, int a2, float *a3, float *a4)
{
  void *v5; // eax
  int v6; // ecx
  int (__thiscall *v7)(int); // eax
  int v8; // eax
  float *v10; // eax
  float *v11; // [esp+14h] [ebp-108h]
  float *v12; // [esp+18h] [ebp-104h]
  float *v13; // [esp+20h] [ebp-FCh]
  int v14; // [esp+20h] [ebp-FCh]
  int v15; // [esp+28h] [ebp-F4h]
  _BYTE v16[84]; // [esp+38h] [ebp-E4h] BYREF
  _BYTE v17[12]; // [esp+8Ch] [ebp-90h] BYREF
  float v18; // [esp+98h] [ebp-84h]
  float v19; // [esp+9Ch] [ebp-80h]
  float v20; // [esp+A0h] [ebp-7Ch]
  char v21; // [esp+C3h] [ebp-59h]
  float v22[3]; // [esp+E0h] [ebp-3Ch] BYREF
  float v23[3]; // [esp+ECh] [ebp-30h] BYREF
  int v24[3]; // [esp+F8h] [ebp-24h] BYREF
  float v25[3]; // [esp+104h] [ebp-18h] BYREF
  int v26[3]; // [esp+110h] [ebp-Ch] BYREF
  int savedregs; // [esp+11Ch] [ebp+0h] BYREF

  v5 = (void *)__RTDynamicCast(
                 this[11],
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CBaseAnimating `RTTI Type Descriptor',
                 0);
  if ( !v5 )
    goto LABEL_13;
  if ( !sub_100BEFA0(v5, "vehicle_driver_exit", (int)v26, (int)v24) )
    goto LABEL_13;
  v6 = this[11];
  v23[0] = *(float *)v26;
  v23[1] = *(float *)&v26[1];
  v15 = v6;
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
  v23[2] = *(float *)&v26[2] + 12.0;
  v13 = (float *)(v7(dword_106B3CDC) + 24);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  sub_100231A0((int)&savedregs, (int)this, v23, (float *)v26, (float *)(v8 + 12), v13, 33636363, v15, 0, (int)v17);
  if ( !v21 )
  {
    *a4 = *(float *)v24;
    a4[1] = *(float *)&v24[1];
    a4[2] = *(float *)&v24[2];
    *a3 = v18;
    a3[1] = v19;
    a3[2] = v20;
    return 1;
  }
  else
  {
LABEL_13:
    if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD, int, float *))(*this + 248))(this, 90.0, 90, a3)
      || (*(unsigned __int8 (__thiscall **)(int *, _DWORD, int, float *))(*this + 248))(this, -90.0, 90, a3)
      || (*(unsigned __int8 (__thiscall **)(int *, _DWORD, int, float *))(*this + 248))(this, 0.0, 100, a3)
      || (*(unsigned __int8 (__thiscall **)(int *, _DWORD, int, float *))(*this + 248))(this, 180.0, 170, a3) )
    {
      return 1;
    }
    else
    {
      sub_10111910((_BYTE *)(this[11] + 320), (float *)(this[11] + 328), (float *)(this[11] + 340), v22, v25);
      v14 = this[11];
      *a3 = (v25[0] + v22[0]) * 0.5;
      a3[1] = 0.5 * (v25[1] + v22[1]);
      a3[2] = v25[2] + 50.0;
      v12 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
      v11 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 12);
      v10 = sub_100EA2C0(v14 + 320);
      sub_100231A0((int)&savedregs, v14, v10, a3, v11, v12, 33636363, v14, 0, (int)v16);
      return v16[55] == 0;
    }
  }
}
