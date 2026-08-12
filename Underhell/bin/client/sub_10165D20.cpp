int __cdecl sub_10165D20(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        int a11,
        float a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  float v19; // [esp+Ch] [ebp-2Ch]
  float v20; // [esp+18h] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-1Ch]
  float v22; // [esp+24h] [ebp-14h]
  float v23; // [esp+28h] [ebp-10h]
  float v24; // [esp+2Ch] [ebp-Ch]
  float v25; // [esp+30h] [ebp-8h]

  v25 = (float)a15;
  v24 = (float)a14;
  v23 = (float)a13;
  v22 = (double)a8 * 0.1;
  v21 = (double)a17 * 0.1;
  v20 = (float)a16;
  v19 = 0.1 * (double)a11;
  return (*((int (__thiscall **)(void ***, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int))*off_103E773C[0]
          + 13))(
           off_103E773C[0],
           a3,
           a4,
           a5,
           a6,
           0.0,
           LODWORD(a9),
           LODWORD(a10),
           LODWORD(v19),
           0.0,
           LODWORD(a12),
           LODWORD(v20),
           LODWORD(v21),
           a7,
           LODWORD(v22),
           LODWORD(v23),
           LODWORD(v24),
           LODWORD(v25),
           a18);
}
