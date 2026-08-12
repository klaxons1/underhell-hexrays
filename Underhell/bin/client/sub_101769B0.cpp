int __cdecl sub_101769B0(int a1)
{
  int result; // eax
  int v2; // eax
  double v3; // st7
  double v4; // st5
  _DWORD v5[28]; // [esp+4h] [ebp-90h] BYREF
  char v6; // [esp+74h] [ebp-20h]
  int v7; // [esp+78h] [ebp-1Ch]
  int v8; // [esp+7Ch] [ebp-18h]

  result = sub_1009B7D0((int *)a1);
  if ( result )
  {
    *(float *)&v5[8] = *(float *)a1;
    v5[1] = result;
    v2 = *(_DWORD *)(a1 + 68);
    *(float *)&v5[9] = *(float *)(a1 + 4);
    v5[14] = 0;
    v3 = *(float *)(a1 + 8);
    v5[3] = 0;
    *(float *)&v5[10] = v3;
    v5[23] = 0;
    v8 = 0;
    *(float *)&v5[15] = 0.0;
    v5[11] = -1;
    *(float *)&v5[16] = 0.30000001;
    v5[13] = -1;
    v4 = *(float *)(a1 + 56);
    v5[2] = v2;
    *(float *)&v5[17] = v4;
    v5[0] = 9;
    v5[12] = "sprites/physbeam.vmt";
    *(float *)&v5[18] = 1.0;
    v7 = 20;
    v6 = 1;
    *(float *)&v5[19] = 0.30000001;
    *(float *)&v5[20] = 16.0;
    *(float *)&v5[21] = 200.0;
    *(float *)&v5[22] = 0.0;
    *(float *)&v5[24] = 1.0;
    *(float *)&v5[25] = 255.0;
    *(float *)&v5[26] = 255.0;
    *(float *)&v5[27] = 255.0;
    return (*((int (__thiscall **)(void ***, _DWORD *))*off_103E773C[0] + 10))(off_103E773C[0], v5);
  }
  return result;
}
