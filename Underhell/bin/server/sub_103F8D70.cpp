int __thiscall sub_103F8D70(int this, int *a2)
{
  void (__thiscall *v4)(int *, int *, _DWORD); // edx
  void (__thiscall *v5)(int, int, _DWORD); // edx
  const char *v6; // esi
  int v8[3]; // [esp+24h] [ebp-48h] BYREF
  float v9[3]; // [esp+30h] [ebp-3Ch] BYREF
  int v10[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v11[3]; // [esp+48h] [ebp-24h] BYREF
  int v12; // [esp+54h] [ebp-18h] BYREF
  float v13; // [esp+58h] [ebp-14h]
  float v14; // [esp+5Ch] [ebp-10h]
  float v15; // [esp+60h] [ebp-Ch] BYREF
  float v16; // [esp+64h] [ebp-8h]
  float v17; // [esp+68h] [ebp-4h]
  int v18; // [esp+74h] [ebp+8h]

  (*(void (__thiscall **)(int *, float *))(*a2 + 504))(a2, v11);
  sub_100F5A30(a2, (int)&v15, (int)v9, 0);
  *(float *)v10 = v9[0] * 8.0 + v15 * 18.0 + v11[0];
  *(float *)&v10[1] = v9[1] * 8.0 + v16 * 18.0 + v11[1];
  *(float *)&v10[2] = 18.0 * v17 + v11[2] + 8.0 * v9[2];
  sub_103F8CE0(this, a2, v11, (float *)v10);
  v4 = *(void (__thiscall **)(int *, int *, _DWORD))(*a2 + 540);
  v17 = v17 + 0.1;
  v4(a2, &v12, 0);
  *(float *)&v12 = v15 * 1200.0 + *(float *)&v12;
  v13 = v16 * 1200.0 + v13;
  v14 = 1200.0 * v17 + v14;
  v18 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1200, 1200);
  *(float *)v8 = 600.0;
  *(float *)&v8[1] = (float)v18;
  *(float *)&v8[2] = 0.0;
  sub_102D5F00((float *)v10, &flt_106F1CB4, (int)&v12, (int)v8, (int)a2, 3.0, 0);
  v5 = *(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132);
  *(_BYTE *)(this + 1392) = 1;
  v5(this, 1, 0.0);
  ++*(_DWORD *)(this + 1372);
  v6 = *(const char **)(this + 92);
  if ( !v6 )
    v6 = String;
  return (*(int (__thiscall **)(int, int *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, a2, 1, v6);
}
