int __cdecl sub_10165300(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        float a13,
        int a14,
        float a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  float v21; // [esp+10h] [ebp-24h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23; // [esp+1Ch] [ebp-18h]
  float v24; // [esp+24h] [ebp-10h]
  float v25; // [esp+28h] [ebp-Ch]
  float v26; // [esp+2Ch] [ebp-8h]
  float v27; // [esp+30h] [ebp-4h]

  v27 = (float)a18;
  v26 = (float)a17;
  v25 = (float)a16;
  v24 = (double)a10 * 0.1;
  v23 = (double)a20 * 0.1;
  v22 = (float)a19;
  v21 = (float)a14;
  return (*((int (__thiscall **)(void ***, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))*off_103E773C[0]
          + 9))(
           off_103E773C[0],
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0.0,
           LODWORD(a11),
           LODWORD(a12),
           LODWORD(a13),
           LODWORD(v21),
           LODWORD(a15),
           LODWORD(v22),
           LODWORD(v23),
           a9,
           LODWORD(v24),
           LODWORD(v25),
           LODWORD(v26),
           LODWORD(v27));
}
