void __usercall sub_10196380(int a1@<edi>, float *a2)
{
  float v2; // [esp+10h] [ebp-44h]
  float v3; // [esp+14h] [ebp-40h]
  float v4; // [esp+18h] [ebp-3Ch]
  float v5; // [esp+28h] [ebp-2Ch]
  float v6; // [esp+30h] [ebp-24h]
  int v7; // [esp+44h] [ebp-10h]
  int v8; // [esp+48h] [ebp-Ch] BYREF
  float v9; // [esp+4Ch] [ebp-8h]
  float v10; // [esp+50h] [ebp-4h]

  *(float *)&v8 = 1.0;
  v9 = 1.0;
  v10 = 1.0;
  v6 = (float)(*(int (__thiscall **)(int, _DWORD, int, _DWORD, int *))(*(_DWORD *)dword_10413198 + 8))(
                dword_10413198,
                0,
                360,
                0.0,
                &v8);
  v4 = a2[16] * 10.0;
  sub_1008DCF0(
    a2,
    a2 + 6,
    v4,
    0.0,
    0.75,
    1.0,
    0.0,
    0.40000001,
    v6,
    0.25,
    (float *)"effects/combinemuzzle1_nocull",
    COERCE_FLOAT(3),
    a1,
    v7);
  *(float *)&v8 = 1.0;
  v9 = 1.0;
  v10 = 1.0;
  v5 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  v3 = a2[16] * 4.0;
  v2 = a2[16] + a2[16];
  sub_1008DCF0(a2, a2 + 6, v2, v3, 0.75, 1.0, 0.0, 0.40000001, v5, 0.0, (float *)0x168, 0.0, (int)&v8, COERCE_INT(0.5));
  sub_1017ADB0((int)(a2 + 6), a2, 2, 1, a2 + 6);
}
