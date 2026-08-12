int __cdecl sub_101029B0(__int16 *a1, float *a2, float *a3, int a4, char a5)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  float v9; // ecx
  int v10; // edx
  int v11; // eax
  float v12; // ecx
  int v13; // edx
  int v14; // esi
  int v16; // eax
  int v17; // [esp-4h] [ebp-6F8h]
  int v18[257]; // [esp+Ch] [ebp-6E8h] BYREF
  char Destination[524]; // [esp+410h] [ebp-2E4h] BYREF
  float v20[11]; // [esp+61Ch] [ebp-D8h] BYREF
  _DWORD v21[36]; // [esp+648h] [ebp-ACh] BYREF
  _DWORD v22[3]; // [esp+6D8h] [ebp-1Ch] BYREF
  _DWORD v23[3]; // [esp+6E4h] [ebp-10h] BYREF
  char *Source; // [esp+6F0h] [ebp-4h]

  v5 = sub_10034480(a1);
  qmemcpy(v20, &unk_1030E968, sizeof(v20));
  v20[1] = 85.0;
  v20[2] = 1.0e24;
  v6 = v5;
  Source = "flesh";
  sub_102282F0(Destination, "default", 0x200u);
  v20[8] = (*a3 - *a2) * (a3[1] - a2[1]) * (a3[2] - a2[2]);
  if ( v6 )
  {
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v6);
    if ( v7 )
    {
      v17 = dword_1047CA8C;
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v7);
      sub_101288D0(v8, v17);
      if ( v21[0] )
        Source = (char *)sub_1001E1E0((int)v21);
      sub_10030220(v21);
    }
  }
  sub_102282F0(Destination, Source, 0x200u);
  v9 = *a2;
  v10 = *((_DWORD *)a2 + 1);
  *(float *)&v23[2] = a2[2];
  v11 = *((_DWORD *)a3 + 2);
  *(float *)v23 = v9;
  v12 = *a3;
  v23[1] = v10;
  v13 = *((_DWORD *)a3 + 1);
  v22[2] = v11;
  *(float *)v22 = v12;
  v22[1] = v13;
  v14 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_10436250 + 116))(dword_10436250, v23, v22);
  (**(void (__thiscall ***)(void *, _DWORD *, _DWORD *, int))off_103E1DD0)(off_103E1DD0, v23, v22, v14);
  if ( !v14 )
    return 0;
  v16 = sub_10034E90(a1);
  return sub_10101D80((int)a1, v14, a4, (int)&flt_1045924C, v16, a5, v18);
}
