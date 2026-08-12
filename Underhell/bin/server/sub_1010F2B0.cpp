// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_1010F2B0(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // esi
  const char *v11; // eax
  int v12; // edi
  const char *v13; // eax
  float v15[20]; // [esp+54h] [ebp-10Ch] BYREF
  int v16; // [esp+A4h] [ebp-BCh] BYREF
  float v17[3]; // [esp+B0h] [ebp-B0h] BYREF
  _BYTE v18[12]; // [esp+BCh] [ebp-A4h] BYREF
  float v19[10]; // [esp+C8h] [ebp-98h] BYREF
  char v20; // [esp+F2h] [ebp-6Eh]
  char v21; // [esp+F3h] [ebp-6Dh]
  const char *v22; // [esp+F8h] [ebp-68h]
  __int16 v23; // [esp+FCh] [ebp-64h]
  int v24; // [esp+100h] [ebp-60h]
  __int16 v25; // [esp+104h] [ebp-5Ch]
  int v26; // [esp+108h] [ebp-58h]
  int v27; // [esp+10Ch] [ebp-54h]
  int v28; // [esp+114h] [ebp-4Ch]
  int v29; // [esp+118h] [ebp-48h]
  int v30; // [esp+11Ch] [ebp-44h]
  int v31; // [esp+120h] [ebp-40h]
  float v32[3]; // [esp+124h] [ebp-3Ch] BYREF
  float v33[3]; // [esp+130h] [ebp-30h] BYREF
  float v34; // [esp+13Ch] [ebp-24h] BYREF
  float v35; // [esp+140h] [ebp-20h]
  float v36; // [esp+144h] [ebp-1Ch]
  float v37; // [esp+148h] [ebp-18h] BYREF
  float v38; // [esp+14Ch] [ebp-14h]
  float v39; // [esp+150h] [ebp-10h]
  int v40; // [esp+154h] [ebp-Ch]
  void *v41; // [esp+158h] [ebp-8h]
  void *retaddr; // [esp+160h] [ebp+0h]

  v40 = a1;
  v41 = retaddr;
  v34 = 16.0;
  v3 = (_DWORD *)sub_10153490();
  v35 = 16.0;
  v36 = 16.0;
  sub_100F5A30(v3, (int)v17, 0, 0);
  (*(void (__thiscall **)(_DWORD *, float *, int, int))(*v3 + 504))(v3, v32, a2, a3);
  v33[0] = -v34;
  v33[1] = -v35;
  v33[2] = -v36;
  v37 = v17[0] * 16384.0 + v32[0];
  v38 = v17[1] * 16384.0 + v32[1];
  v39 = 16384.0 * v17[2] + v32[2];
  sub_1001F200(v15, v32, &v37, (float *)LODWORD(v37), (float *)LODWORD(v38));
  sub_10265570(v3, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    33570827,
    &v16,
    v18);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 255, 0, 1, -1.0);
  if ( v19[8] < 1.0 || v20 || v21 )
  {
    v4 = v26;
    v5 = *(_DWORD *)(v26 + 252) >> 11;
    v29 = v26;
    if ( (v5 & 1) != 0 )
    {
      sub_100DAE60(v26);
      v4 = v26;
    }
    v6 = *(_DWORD *)(v4 + 252) >> 11;
    v28 = v4;
    if ( (v6 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v26;
    }
    v7 = *(_DWORD *)(v4 + 252) >> 11;
    v31 = v4;
    if ( (v7 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v26;
    }
    v8 = *(_DWORD *)(v4 + 252) >> 11;
    v30 = v4;
    if ( (v8 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v26;
    }
    v9 = v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v26;
    }
    v10 = v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v26;
    }
    v11 = *(const char **)(v4 + 92);
    if ( !v11 )
      v11 = String;
    DevMsg(
      1,
      "Hit %s\nposition %.2f, %.2f, %.2f\nangles %.2f, %.2f, %.2f\n",
      v11,
      *(float *)(v10 + 580),
      *(float *)(v9 + 584),
      *(float *)(v30 + 588),
      *(float *)(v31 + 704),
      *(float *)(v28 + 708),
      *(float *)(v29 + 712));
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(v26 + 320) + 44))(v26 + 320);
    v13 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 28))(dword_106BAFF8, v23);
    DevMsg(
      1,
      "Hit: hitbox %d, hitgroup %d, physics bone %d, solid %d, surface %s, surfaceprop %s\n",
      v27,
      v24,
      v25,
      v12,
      v22,
      v13);
    v39 = -v36;
    sub_1011BA20((int)v32, (int)v19, (int)&v37, (int)&v34, (int)&flt_106F1CB4, 0, 0, 255, 0, 10.0);
    v39 = 24.0 * v19[5] + v19[2];
    sub_1011BC50((int)v33, (int)&v37, 255, 255, 64, 0, 10.0);
  }
}
