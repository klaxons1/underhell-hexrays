bool __cdecl sub_101BF900(void *Src, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  _DWORD v10[5]; // [esp+4h] [ebp-38h] BYREF
  size_t Size; // [esp+18h] [ebp-24h]
  void *v12; // [esp+1Ch] [ebp-20h]
  _DWORD v13[7]; // [esp+20h] [ebp-1Ch] BYREF

  if ( a7 || a8 || a2 != 11 )
    return 0;
  v10[0] = 28;
  v10[1] = a5;
  v10[2] = a6;
  v10[3] = 0;
  v10[4] = 0;
  Size = sub_101C4CE0(v10);
  v12 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, Size);
  memcpy_0(v12, Src, Size);
  v13[0] = 28;
  v13[1] = a5;
  v13[2] = a6;
  v13[3] = 0;
  v13[4] = (a4 == 37) + 14;
  v13[5] = sub_101C4CE0(v13);
  v13[6] = a3;
  v8 = sub_101C4DA0(v10, v13, 0, 0, 0, 0);
  (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v12);
  return v8 == 0;
}
