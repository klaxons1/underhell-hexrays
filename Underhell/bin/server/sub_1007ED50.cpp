BOOL __userpurge sub_1007ED50@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10)
{
  char *v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // eax
  int v16; // edi
  _DWORD *v17; // esi
  char v19; // [esp+18h] [ebp-110h]
  float Buffer; // [esp+28h] [ebp-100h] BYREF
  float v21; // [esp+2Ch] [ebp-FCh]
  int v22; // [esp+30h] [ebp-F8h]
  float v23; // [esp+34h] [ebp-F4h]
  int v24; // [esp+38h] [ebp-F0h]
  int v25; // [esp+3Ch] [ebp-ECh]

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v11 = sub_1001E280((char *)&Buffer, "[Nav] %s", "Set radial goal\n");
    sub_10029660(*(_DWORD **)(a1 + 4), (int)v11);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 44))(a1, a3, a2);
  sub_100A6150(4);
  v12 = *(_DWORD *)(a1 + 4);
  v13 = *(float *)(*(_DWORD *)(a1 + 36) + 4);
  v14 = **(_DWORD **)(v12 + 2596);
  v25 = 1;
  v24 = a10;
  v23 = v13;
  v22 = a9;
  v21 = a8;
  Buffer = a7;
  v19 = v12 - 52;
  v15 = (*(int (**)(void))(v14 + 24))();
  sub_100A61F0(v15, v19);
  v16 = *(_DWORD *)(a1 + 36);
  *(float *)(v16 + 4) = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 4) + 2044))(*(_DWORD *)(a1 + 4));
  v17 = *(_DWORD **)(a1 + 36);
  return v17 && *v17;
}
