int __usercall sub_10049350@<eax>(float *a1@<eax>, float *a2@<ecx>, int a3)
{
  double v3; // st7
  double v4; // st7
  _DWORD v6[28]; // [esp+14h] [ebp-90h] BYREF
  char v7; // [esp+84h] [ebp-20h]
  int v8; // [esp+88h] [ebp-1Ch]
  int v9; // [esp+8Ch] [ebp-18h]

  *(float *)&v6[5] = *a2;
  v8 = -1;
  v3 = a2[1];
  v6[11] = -1;
  *(float *)&v6[6] = v3;
  v6[13] = -1;
  *(float *)&v6[7] = a2[2];
  *(float *)&v6[8] = *a1;
  *(float *)&v6[9] = a1[1];
  v6[1] = a3;
  v4 = a1[2];
  v6[14] = 0;
  *(float *)&v6[10] = v4;
  v7 = 1;
  v9 = 0;
  *(float *)&v6[15] = 0.0;
  memset(&v6[2], 0, 12);
  v6[0] = 9;
  v6[12] = "sprites/lgtning.vmt";
  *(float *)&v6[16] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        0.25,
                        1.0);
  *(float *)&v6[17] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        8.0,
                        14.0);
  v6[23] = 0;
  *(float *)&v6[18] = 1.0;
  v8 = 18;
  v7 = 1;
  *(float *)&v6[19] = 0.5;
  v9 = 0;
  *(float *)&v6[20] = 24.0;
  *(float *)&v6[21] = 255.0;
  *(float *)&v6[22] = 150.0;
  *(float *)&v6[24] = 30.0;
  *(float *)&v6[25] = 255.0;
  *(float *)&v6[26] = 255.0;
  *(float *)&v6[27] = 255.0;
  return (*((int (__thiscall **)(void ***, _DWORD *))*off_103E773C[0] + 10))(off_103E773C[0], v6);
}
