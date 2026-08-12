void __cdecl sub_10140010(float *a1, float a2, float a3)
{
  int v3; // edi
  int i; // esi
  int v5[32]; // [esp+24h] [ebp-A4h] BYREF
  _DWORD v6[7]; // [esp+A4h] [ebp-24h] BYREF
  int v7; // [esp+C0h] [ebp-8h]
  char v8; // [esp+C4h] [ebp-4h]

  v6[5] = v5;
  *(float *)&v6[1] = *a1;
  *(float *)&v6[2] = a1[1];
  *(float *)&v6[3] = a1[2];
  v6[0] = &CFireSphere::`vftable';
  v6[6] = 32;
  v7 = 0;
  v8 = 0;
  *(float *)&v6[4] = a2 * a2;
  (*(void (__thiscall **)(int, int, float *, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 52))(
    dword_106B31EC,
    16,
    a1,
    LODWORD(a2),
    0,
    v6);
  v3 = v7;
  for ( i = 0; i < v3; ++i )
    sub_1013FE10(v5[i], a3, 0);
}
