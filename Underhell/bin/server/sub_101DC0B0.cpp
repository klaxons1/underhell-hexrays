int __cdecl sub_101DC0B0(int a1, float *a2, float *a3, int a4, char a5)
{
  int v5; // eax
  int v6; // ebx
  float *v7; // esi
  float *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v18; // edi
  const char *v19; // eax
  int v20; // [esp-4h] [ebp-6F8h]
  int v21[257]; // [esp+Ch] [ebp-6E8h] BYREF
  char Destination[524]; // [esp+410h] [ebp-2E4h] BYREF
  float v23[11]; // [esp+61Ch] [ebp-D8h] BYREF
  _DWORD v24[36]; // [esp+648h] [ebp-ACh] BYREF
  _DWORD v25[3]; // [esp+6D8h] [ebp-1Ch] BYREF
  _DWORD v26[3]; // [esp+6E4h] [ebp-10h] BYREF
  char *Source; // [esp+6F0h] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  qmemcpy(v23, &unk_105046B8, sizeof(v23));
  v23[1] = 85.0;
  v23[2] = 1.0e24;
  v6 = v5;
  Source = "flesh";
  sub_104299C0(Destination, "default", 0x200u);
  v7 = a3;
  v8 = a2;
  v23[8] = (*a3 - *a2) * (a3[1] - a2[1]) * (a3[2] - a2[2]);
  if ( v6 )
  {
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v6);
    if ( v9 )
    {
      v20 = dword_10700AC8;
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0, v9);
      sub_10246610(v10, v20);
      if ( v24[0] )
        Source = (char *)sub_10100E60((int)v24);
      sub_100C4910(v24);
    }
  }
  sub_104299C0(Destination, Source, 0x200u);
  v11 = *(_DWORD *)v8;
  v12 = *((_DWORD *)v8 + 1);
  *(float *)&v26[2] = v8[2];
  v13 = *((_DWORD *)v7 + 2);
  v26[0] = v11;
  v14 = *(_DWORD *)v7;
  v26[1] = v12;
  v15 = *((_DWORD *)v7 + 1);
  v25[2] = v13;
  v25[0] = v14;
  v25[1] = v15;
  v16 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106BAFF0 + 116))(dword_106BAFF0, v26, v25);
  (**(void (__thiscall ***)(void *, _DWORD *, _DWORD *, int))off_1063AC88)(off_1063AC88, v26, v25, v16);
  if ( !v16 )
    return 0;
  v18 = a1;
  v19 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &a1);
  if ( !v19 )
    v19 = String;
  return sub_101DB300(v18, v16, a4, (int)&flt_106F1CB4, (int)v19, a5, v21);
}
