int __userpurge sub_10313630@<eax>(int a1@<ecx>, int a2@<ebx>, float *a3)
{
  int v3; // eax
  float v5[18]; // [esp+0h] [ebp-60h] BYREF
  int v6; // [esp+48h] [ebp-18h]
  int v7; // [esp+58h] [ebp-8h]

  v5[0] = 0.0;
  LOWORD(v6) = 0;
  v3 = *(_DWORD *)(a1 + 24);
  LOBYTE(v7) = 0;
  LODWORD(v5[13]) = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(
                      dword_106B31D0,
                      v3,
                      a2,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0.0,
                      0,
                      0,
                      1.0,
                      0.0,
                      0.0,
                      0,
                      v6,
                      0,
                      0,
                      0,
                      v7);
  v5[0] = *a3;
  v5[1] = a3[1];
  v5[17] = 0.0;
  v5[2] = a3[2];
  v5[14] = 5.0;
  return sub_1028E890((int)"TeslaZap", (int)v5);
}
