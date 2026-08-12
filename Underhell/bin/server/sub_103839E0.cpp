int __thiscall sub_103839E0(int this, int a2)
{
  int v2; // edi
  float *v4; // eax
  double v5; // st7
  double v6; // st5
  int (__thiscall *v7)(int, float *, float *); // eax
  float v9[3]; // [esp+8h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+14h] [ebp-30h] BYREF
  float v11; // [esp+20h] [ebp-24h]
  float v12; // [esp+24h] [ebp-20h]
  float v13; // [esp+28h] [ebp-1Ch]
  float v14; // [esp+2Ch] [ebp-18h]
  float v15; // [esp+30h] [ebp-14h]
  float v16; // [esp+34h] [ebp-10h]
  float v17; // [esp+38h] [ebp-Ch] BYREF
  float v18; // [esp+3Ch] [ebp-8h]
  float v19; // [esp+40h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 424);
  (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 188))(*(_DWORD *)(this + 424), &v17, 0);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v2 + 188))(v2, v10, 0);
  v14 = v10[0] - v17;
  v15 = v10[1] - v18;
  v16 = v10[2] - v19;
  off_10689714();
  v4 = (float *)sub_10022D70();
  *v4 = *(float *)(this + 340) - *(float *)(this + 328);
  v4[1] = *(float *)(this + 344) - *(float *)(this + 332);
  v4[2] = *(float *)(this + 348) - *(float *)(this + 336);
  v5 = *v4;
  v17 = v14 * v5 * 0.5 + v17;
  v18 = v15 * v5 * 0.5 + v18;
  v19 = v5 * v16 * 0.5 + v19;
  v6 = v16 * 0.0;
  v11 = v15 - v6;
  v12 = v6 - v14;
  v13 = v14 * 0.0 - v15 * 0.0;
  off_10689714();
  v7 = *(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v2 + 240);
  v9[0] = v11 * 30.0 * 100.0;
  v9[1] = v12 * 30.0 * 100.0;
  v9[2] = 100.0 * (30.0 * v13);
  return v7(v2, v9, &v17);
}
