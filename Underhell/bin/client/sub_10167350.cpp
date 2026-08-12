int __cdecl sub_10167350(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11)
{
  float v12; // [esp+18h] [ebp-20h]
  float v13; // [esp+24h] [ebp-14h]

  v12 = (float)a8;
  ((void (__thiscall *)(void ***, float *, float *, float *, float *, _DWORD, _DWORD, int, int, int))(*off_103E9C2C)[13])(
    off_103E9C2C,
    a3,
    a4,
    a5,
    a6,
    LODWORD(v12),
    LODWORD(a10),
    a9,
    a7,
    a11);
  v13 = (float)a7;
  return sub_10167140(a8, a5, a6, a3, a4, (int)a10, a9, v13, a11);
}
