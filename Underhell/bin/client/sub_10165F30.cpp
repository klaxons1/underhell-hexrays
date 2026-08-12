int __cdecl sub_10165F30(
        int a1,
        int a2,
        int a3,
        float a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        int a12,
        float a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  float v20; // [esp+1Ch] [ebp-2Ch]
  float v21; // [esp+28h] [ebp-20h]
  float v22; // [esp+2Ch] [ebp-1Ch]
  float v23; // [esp+34h] [ebp-14h]
  float v24; // [esp+38h] [ebp-10h]
  float v25; // [esp+3Ch] [ebp-Ch]
  float v26; // [esp+40h] [ebp-8h]

  v26 = (float)a16;
  v25 = (float)a15;
  v24 = (float)a14;
  v23 = (double)a9 * 0.1;
  v22 = (double)a18 * 0.1;
  v21 = (float)a17;
  v20 = 0.1 * (double)a12;
  return (*((int (__thiscall **)(void ***, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int))*off_103E773C[0]
          + 15))(
           off_103E773C[0],
           a3,
           LODWORD(a4),
           LODWORD(a5),
           a6,
           a7,
           0.0,
           LODWORD(a10),
           LODWORD(a11),
           LODWORD(v20),
           0.0,
           LODWORD(a13),
           LODWORD(v21),
           LODWORD(v22),
           a8,
           LODWORD(v23),
           LODWORD(v24),
           LODWORD(v25),
           LODWORD(v26),
           a19);
}
