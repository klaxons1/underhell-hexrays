int __cdecl sub_101632D0(float *a1, float *a2)
{
  int v2; // edi
  double v3; // st6
  double v4; // st7
  double v6; // st6
  double v7; // st7
  _BYTE v8[12]; // [esp+18h] [ebp-24h] BYREF
  float v9; // [esp+24h] [ebp-18h] BYREF
  float v10; // [esp+28h] [ebp-14h]
  float v11; // [esp+2Ch] [ebp-10h]
  float v12; // [esp+30h] [ebp-Ch] BYREF
  float v13; // [esp+34h] [ebp-8h]
  float v14; // [esp+38h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
         dword_1041315C,
         "models/crossbow_bolt.mdl",
         0);
  sub_101EE190(a2, v8);
  if ( *((int *)off_103DC81C + 5) <= 1 )
  {
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    v6 = 8.0 * a2[2];
    v7 = a2[1] * 8.0;
    v12 = *a1 - *a2 * 8.0;
    v13 = a1[1] - v7;
    v14 = a1[2] - v6;
    return ((int (__thiscall *)(void ***, int, float *, _BYTE *, float *, _DWORD, int))(*off_103E9C2C)[12])(
             off_103E9C2C,
             v2,
             &v12,
             v8,
             &v9,
             1.0,
             0x400000);
  }
  else
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    v3 = 8.0 * a2[2];
    v4 = a2[1] * 8.0;
    v9 = *a1 - *a2 * 8.0;
    v10 = a1[1] - v4;
    v11 = a1[2] - v3;
    return ((int (__thiscall *)(void ***, int, float *, _BYTE *, float *, _DWORD, _DWORD))(*off_103E9C2C)[12])(
             off_103E9C2C,
             v2,
             &v9,
             v8,
             &v12,
             30.0,
             0);
  }
}
