int __cdecl sub_101DB5F0(int a1, const void *a2)
{
  int i; // ebx
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  unsigned __int16 v7; // ax
  char Buffer[2576]; // [esp+Ch] [ebp-A40h] BYREF
  _DWORD v9[11]; // [esp+A1Ch] [ebp-30h] BYREF
  int v10; // [esp+A48h] [ebp-4h]

  for ( i = 0; i < 2048; ++i )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 148))(dword_106B31F0, i);
    v10 = result;
    if ( result )
    {
      qmemcpy(v9, a2, sizeof(v9));
      LOBYTE(v9[10]) = 1;
      v9[7] = a1;
      sub_10429A00(Buffer, 0x400u, "vdisp_%04d", i);
      v9[6] = Buffer;
      v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "default");
      v5 = (*(int (__thiscall **)(int, int, int, float *, float *, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 32))(
             dword_106BAFF4,
             v10,
             v4,
             &flt_106F1CA8,
             &flt_106F1CB4,
             v9);
      v6 = *(_DWORD *)v5;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 92))(v5);
      result = (*(int (__thiscall **)(int, int))(v6 + 88))(v5, v7 | 0x200);
    }
  }
  return result;
}
