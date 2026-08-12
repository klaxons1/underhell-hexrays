int __cdecl sub_101DC250(int a1, float *a2, float *a3, int a4, int a5, char a6)
{
  int v6; // eax
  int v7; // ebx
  float *v8; // esi
  float *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // esi
  int v19; // edi
  const char *v20; // eax
  int v21; // [esp-4h] [ebp-6F8h]
  int v22[257]; // [esp+Ch] [ebp-6E8h] BYREF
  char Destination[524]; // [esp+410h] [ebp-2E4h] BYREF
  float v24[11]; // [esp+61Ch] [ebp-D8h] BYREF
  _DWORD v25[36]; // [esp+648h] [ebp-ACh] BYREF
  _DWORD v26[3]; // [esp+6D8h] [ebp-1Ch] BYREF
  _DWORD v27[3]; // [esp+6E4h] [ebp-10h] BYREF
  char *Source; // [esp+6F0h] [ebp-4h]

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  qmemcpy(v24, &unk_105046B8, sizeof(v24));
  v24[1] = 85.0;
  v24[2] = 1.0e24;
  v7 = v6;
  Source = "flesh";
  sub_104299C0(Destination, "default", 0x200u);
  v8 = a3;
  v9 = a2;
  v24[8] = (*a3 - *a2) * (a3[1] - a2[1]) * (a3[2] - a2[2]);
  if ( v7 )
  {
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v7);
    if ( v10 )
    {
      v21 = dword_10700AC8;
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0, v10);
      sub_10246610(v11, v21);
      if ( v25[0] )
        Source = (char *)sub_10100E60((int)v25);
      sub_100C4910(v25);
    }
  }
  sub_104299C0(Destination, Source, 0x200u);
  v12 = *(_DWORD *)v9;
  v13 = *((_DWORD *)v9 + 1);
  *(float *)&v27[2] = v9[2];
  v14 = *((_DWORD *)v8 + 2);
  v27[0] = v12;
  v15 = *(_DWORD *)v8;
  v27[1] = v13;
  v16 = *((_DWORD *)v8 + 1);
  v26[2] = v14;
  v26[0] = v15;
  v26[1] = v16;
  v17 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106BAFF0 + 116))(dword_106BAFF0, v27, v26);
  (**(void (__thiscall ***)(void *, _DWORD *, _DWORD *, int))off_1063AC88)(off_1063AC88, v27, v26, v17);
  if ( !v17 )
    return 0;
  v19 = a1;
  v20 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &a1);
  if ( !v20 )
    v20 = String;
  return sub_101DB300(v19, v17, a4, a5, (int)v20, a6, v22);
}
