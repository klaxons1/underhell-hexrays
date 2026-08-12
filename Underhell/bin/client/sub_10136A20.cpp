int __userpurge sub_10136A20@<eax>(float *a1@<ecx>, int a2@<edi>, char ArgList, int a4, int a5)
{
  int (__thiscall *v6)(int); // edx
  int v7; // ebx
  void (__stdcall *v9)(_DWORD *, int, _DWORD); // edx
  long double v10; // st7
  long double v11; // st7
  int v12; // esi
  int v13; // esi
  int v14; // eax
  char Buffer[260]; // [esp+8h] [ebp-1ACh] BYREF
  _DWORD v17[29]; // [esp+10Ch] [ebp-A8h] BYREF
  _DWORD v18[12]; // [esp+180h] [ebp-34h] BYREF
  float *v19; // [esp+1B0h] [ebp-4h]
  void *v20; // [esp+1C4h] [ebp+10h]

  v6 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
  v19 = a1;
  v7 = v6(dword_1047C96C);
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 80))(v7, 1, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
  byte_1043BD0A = 1;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)v7 + 424))(v7, 0, 0, 0, a4, a5);
  qmemcpy(v17, a1 + 1, sizeof(v17));
  v9 = *(void (__stdcall **)(_DWORD *, int, _DWORD))(*(_DWORD *)v19 + 24);
  v10 = tan(v19[10] * 0.008726646259971648);
  v17[0] = 0;
  v17[1] = 0;
  v17[2] = a4;
  v17[3] = a5;
  LOBYTE(v17[21]) = 1;
  v11 = atan2(v10 * ((double)a4 / (double)a5 * 0.75), 1.0);
  *(float *)&v17[9] = v11 * 57.29577951308232 + v11 * 57.29577951308232;
  v9(v17, 3, 0);
  v12 = a5 * a4;
  v20 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 3 * a5 * a4);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, void *, int))(*(_DWORD *)v7 + 52))(v7, 0, 0, a4, a5, v20, 2);
  v13 = 4 * v12 + 1024;
  v14 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v13);
  sub_1022EE70(v14, v13, 0);
  if ( !(unsigned __int8)sub_101BD560(v20, v18, a4, a5, 2, 2) )
    Error("Couldn't write bitmap data snapshot.\n");
  (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v20);
  sub_10228370(Buffer, 0x104u, "//MOD/%s", ArgList);
  (*(void (__thiscall **)(int, char *, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)dword_10413188 + 308))(
    dword_10413188,
    Buffer,
    v18[0],
    v18[4],
    1,
    0,
    0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 436))(v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
  byte_1043BD0A = 0;
  if ( v18[2] >= 0 )
  {
    if ( v18[0] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v18[0]);
      v18[0] = 0;
    }
    v18[1] = 0;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
}
