// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_101107D0(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
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
  float v15[21]; // [esp+54h] [ebp-FCh] BYREF
  int v16; // [esp+A8h] [ebp-A8h] BYREF
  _BYTE v17[12]; // [esp+B4h] [ebp-9Ch] BYREF
  float v18[10]; // [esp+C0h] [ebp-90h] BYREF
  char v19; // [esp+EAh] [ebp-66h]
  char v20; // [esp+EBh] [ebp-65h]
  const char *v21; // [esp+F0h] [ebp-60h]
  __int16 v22; // [esp+F4h] [ebp-5Ch]
  int v23; // [esp+F8h] [ebp-58h]
  __int16 v24; // [esp+FCh] [ebp-54h]
  int v25; // [esp+100h] [ebp-50h]
  int v26; // [esp+104h] [ebp-4Ch]
  float v27[3]; // [esp+110h] [ebp-40h] BYREF
  int v28; // [esp+11Ch] [ebp-34h]
  int v29; // [esp+120h] [ebp-30h]
  int v30; // [esp+124h] [ebp-2Ch]
  int v31; // [esp+128h] [ebp-28h]
  float v32[3]; // [esp+12Ch] [ebp-24h] BYREF
  float v33; // [esp+138h] [ebp-18h] BYREF
  float v34; // [esp+13Ch] [ebp-14h]
  float v35; // [esp+140h] [ebp-10h]
  int v36; // [esp+144h] [ebp-Ch]
  void *v37; // [esp+148h] [ebp-8h]
  void *retaddr; // [esp+150h] [ebp+0h]

  v36 = a1;
  v37 = retaddr;
  v3 = (_DWORD *)sub_10153490();
  sub_100F5A30(v3, (int)v27, 0, 0);
  (*(void (__thiscall **)(_DWORD *, float *, int, int))(*v3 + 504))(v3, v32, a2, a3);
  v33 = v27[0] * 16384.0 + v32[0];
  v34 = v27[1] * 16384.0 + v32[1];
  v35 = 16384.0 * v27[2] + v32[2];
  sub_1001F180(v15, (float *)LODWORD(v33), (float *)LODWORD(v34));
  sub_10265570(v3, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    33570827,
    &v16,
    v17);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v17, (int)v18, 255, 0, 0, 1, 5.0);
  if ( v18[8] < 1.0 || v19 || v20 )
  {
    v4 = v25;
    v5 = *(_DWORD *)(v25 + 252) >> 11;
    v30 = v25;
    if ( (v5 & 1) != 0 )
    {
      sub_100DAE60(v25);
      v4 = v25;
    }
    v6 = *(_DWORD *)(v4 + 252) >> 11;
    v29 = v4;
    if ( (v6 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v25;
    }
    v7 = *(_DWORD *)(v4 + 252) >> 11;
    v28 = v4;
    if ( (v7 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v25;
    }
    v8 = *(_DWORD *)(v4 + 252) >> 11;
    v31 = v4;
    if ( (v8 & 1) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v25;
    }
    v9 = v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v25;
    }
    v10 = v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v4);
      v4 = v25;
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
      *(float *)(v31 + 588),
      *(float *)(v28 + 704),
      *(float *)(v29 + 708),
      *(float *)(v30 + 712));
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(v25 + 320) + 44))(v25 + 320);
    v13 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 28))(dword_106BAFF8, v22);
    DevMsg(
      1,
      "Hit: hitbox %d, hitgroup %d, physics bone %d, solid %d, surface %s, surfaceprop %s\n",
      v26,
      v23,
      v24,
      v12,
      v21,
      v13);
    sub_1011BC50((int)v32, (int)v18, 0, 255, 0, 0, 10.0);
    v35 = 12.0 * v18[5] + v18[2];
    sub_1011BC50((int)v18, (int)&v33, 255, 255, 0, 0, 10.0);
  }
}
