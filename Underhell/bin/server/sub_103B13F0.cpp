int __thiscall sub_103B13F0(int this, int a2, int a3, float a4)
{
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  int (__thiscall *v8)(int, float *); // edx
  float *v9; // eax
  int v10; // eax
  float *v11; // eax
  double v12; // st7
  float *v13; // eax
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // st7
  void (__thiscall *v18)(int, _DWORD, float *, _DWORD); // edx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st7
  float *v23; // eax
  void (__thiscall *v24)(int, _DWORD, float *, _DWORD); // edx
  double v25; // st7
  int (__thiscall *v26)(int, _DWORD, int); // edx
  double v27; // st7
  double v28; // st5
  double v29; // st6
  _BYTE v31[12]; // [esp+3Ch] [ebp-30h] BYREF
  float v32; // [esp+48h] [ebp-24h] BYREF
  float v33; // [esp+4Ch] [ebp-20h]
  float v34; // [esp+50h] [ebp-1Ch]
  float v35; // [esp+54h] [ebp-18h]
  float v36; // [esp+58h] [ebp-14h]
  float v37; // [esp+5Ch] [ebp-10h]
  float v38; // [esp+60h] [ebp-Ch]
  float v39; // [esp+64h] [ebp-8h]
  float v40; // [esp+68h] [ebp-4h]
  int v41; // [esp+7Ch] [ebp+10h]
  float *v42; // [esp+7Ch] [ebp+10h]

  *(_DWORD *)(this + 8) = 1;
  *(float *)(this + 12) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 16) = *(float *)(dword_106B31C8 + 12) + a4;
  *(float *)(this + 60) = a4;
  *(float *)(this + 20) = 3.4028235e38;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3)
    || (v5 = __RTDynamicCast(
               a3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBasePlayer `RTTI Type Descriptor',
               0),
        v41 = *(_DWORD *)v5,
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2),
        (*(unsigned __int8 (__thiscall **)(int, int))(v41 + 876))(v5, v6)) )
  {
    v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3);
    *(float *)(this + 64) = *v23;
    *(float *)(this + 68) = v23[1];
    v24 = *(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)a3 + 528);
    *(float *)(this + 72) = v23[2];
    v24(a3, 0, &v32, 0);
    v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            60.0,
            120.0);
    v26 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
    v38 = v32 * v25;
    v39 = v33 * v25;
    v40 = v25 * v34;
    if ( v26(dword_106B31E4, 0, 1) )
    {
      v27 = v38;
      v28 = v39;
      v29 = v40;
    }
    else
    {
      v27 = v38 * -1.0;
      v28 = v39 * -1.0;
      v29 = -1.0 * v40;
    }
    *(float *)(this + 64) = v27 + *(float *)(this + 64);
    *(float *)(this + 68) = v28 + *(float *)(this + 68);
    *(float *)(this + 72) = v29 + *(float *)(this + 72);
    v16 = *(float *)(this + 72)
        - ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            80.0,
            200.0);
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 504))(v5, &v32);
    *(float *)(this + 64) = *v7;
    *(float *)(this + 68) = v7[1];
    v8 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 924);
    *(float *)(this + 72) = v7[2];
    v9 = (float *)v8(v5, &v32);
    v35 = *v9;
    v36 = v9[1];
    v37 = 0.0;
    off_10689714();
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
    v42 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v10 + 504))(v10, &v32);
    v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 504))(v5, v31);
    v12 = v11[1] - v42[1];
    v38 = *v11 - *v42;
    v39 = v12;
    v40 = 0.0;
    off_10689714();
    if ( v39 * v36 + v38 * v35 + v40 * v37 >= 0.95 )
    {
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              160.0,
              240.0);
      v18 = *(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v5 + 528);
      *(float *)(this + 64) = *(float *)(this + 64);
      *(float *)(this + 68) = *(float *)(this + 68);
      *(float *)(this + 72) = v17 + *(float *)(this + 72);
      v18(v5, 0, &v32, 0);
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -100.0,
              100.0);
      v20 = v32 * v19;
      v21 = v33 * v19;
      v22 = v19 * v34;
      *(float *)(this + 64) = v20 + *(float *)(this + 64);
      *(float *)(this + 68) = v21 + *(float *)(this + 68);
      v16 = v22 + *(float *)(this + 72);
    }
    else
    {
      v13 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 924))(v5, v31);
      v14 = 320.0 * v13[2];
      v15 = v13[1] * 320.0;
      *(float *)(this + 64) = *v13 * 320.0 + *(float *)(this + 64);
      *(float *)(this + 68) = v15 + *(float *)(this + 68);
      v16 = v14 + *(float *)(this + 72);
    }
  }
  *(float *)(this + 72) = v16;
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 16))(a2, a3);
}
