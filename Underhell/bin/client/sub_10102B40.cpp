int __cdecl sub_10102B40(__int16 *a1, float *a2, float *a3, int a4, int a5, char a6)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  float v10; // ecx
  int v11; // edx
  int v12; // eax
  float v13; // ecx
  int v14; // edx
  int v15; // esi
  int v17; // eax
  int v18; // [esp-4h] [ebp-6F8h]
  int v19[257]; // [esp+Ch] [ebp-6E8h] BYREF
  char Destination[524]; // [esp+410h] [ebp-2E4h] BYREF
  float v21[11]; // [esp+61Ch] [ebp-D8h] BYREF
  _DWORD v22[36]; // [esp+648h] [ebp-ACh] BYREF
  _DWORD v23[3]; // [esp+6D8h] [ebp-1Ch] BYREF
  _DWORD v24[3]; // [esp+6E4h] [ebp-10h] BYREF
  char *Source; // [esp+6F0h] [ebp-4h]

  v6 = sub_10034480(a1);
  qmemcpy(v21, &unk_1030E968, sizeof(v21));
  v21[1] = 85.0;
  v21[2] = 1.0e24;
  v7 = v6;
  Source = "flesh";
  sub_102282F0(Destination, "default", 0x200u);
  v21[8] = (*a3 - *a2) * (a3[1] - a2[1]) * (a3[2] - a2[2]);
  if ( v7 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v7);
    if ( v8 )
    {
      v18 = dword_1047CA8C;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v8);
      sub_101288D0(v9, v18);
      if ( v22[0] )
        Source = (char *)sub_1001E1E0((int)v22);
      sub_10030220(v22);
    }
  }
  sub_102282F0(Destination, Source, 0x200u);
  v10 = *a2;
  v11 = *((_DWORD *)a2 + 1);
  *(float *)&v24[2] = a2[2];
  v12 = *((_DWORD *)a3 + 2);
  *(float *)v24 = v10;
  v13 = *a3;
  v24[1] = v11;
  v14 = *((_DWORD *)a3 + 1);
  v23[2] = v12;
  *(float *)v23 = v13;
  v23[1] = v14;
  v15 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_10436250 + 116))(dword_10436250, v24, v23);
  (**(void (__thiscall ***)(void *, _DWORD *, _DWORD *, int))off_103E1DD0)(off_103E1DD0, v24, v23, v15);
  if ( !v15 )
    return 0;
  v17 = sub_10034E90(a1);
  return sub_10101D80((int)a1, v15, a4, a5, v17, a6, v19);
}
