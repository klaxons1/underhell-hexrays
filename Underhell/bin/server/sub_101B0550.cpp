int __usercall sub_101B0550@<eax>(int a1@<esi>, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v7[3]; // [esp+24h] [ebp-30h] BYREF
  int v8[3]; // [esp+30h] [ebp-24h] BYREF
  int v9; // [esp+3Ch] [ebp-18h] BYREF
  float v10; // [esp+40h] [ebp-14h]
  float v11; // [esp+44h] [ebp-10h]
  int v12; // [esp+48h] [ebp-Ch] BYREF
  float v13; // [esp+4Ch] [ebp-8h]
  float v14; // [esp+50h] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 292))(a1);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a1 + 188))(a1, v7, v8);
  (*(void (__thiscall **)(int, int *, int *, int, float *, float *))(*(_DWORD *)dword_106BAFF0 + 92))(
    dword_106BAFF0,
    &v9,
    &v12,
    v5,
    &flt_106F1CA8,
    &flt_106F1CB4);
  *(float *)&v9 = *(float *)&v9 - 1.0;
  v10 = v10 - 1.0;
  v11 = v11 - 1.0;
  *(float *)&v12 = *(float *)&v12 + 1.0;
  v13 = v13 + 1.0;
  v14 = v14 + 1.0;
  return sub_1011B9E0((int)v7, (int)&v9, (int)&v12, (int)v8, a2, a3, a4, a5, 0.0);
}
