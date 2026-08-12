int __stdcall sub_101299B0(int a1, int *a2, int a3)
{
  int v3; // edi
  int v4; // eax
  char Buffer[256]; // [esp+8h] [ebp-200h] BYREF
  char v7[256]; // [esp+108h] [ebp-100h] BYREF

  strcpy(v7, "_rt_CustomCamera_");
  memset(&v7[18], 0, 0xEEu);
  sprintf(Buffer, "%s%i", v7, a1 + 1);
  v3 = *a2;
  v4 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, int))(*a2 + 124))(a2, 0, 0, 1);
  return (*(int (__thiscall **)(int *, char *, int, int, int, int))(v3 + 336))(a2, Buffer, a3, a3, 5, v4);
}
