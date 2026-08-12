int __stdcall sub_1015FA70(int a1, int a2, int a3)
{
  int v3; // eax
  _BYTE v5[48]; // [esp+Ch] [ebp-70h] BYREF
  float v6; // [esp+3Ch] [ebp-40h]
  float v7; // [esp+40h] [ebp-3Ch]
  float v8; // [esp+44h] [ebp-38h]
  float v9; // [esp+48h] [ebp-34h]
  _BYTE v10[48]; // [esp+4Ch] [ebp-30h] BYREF

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 28))(a1);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(v3 + 4) + 148))(v3 + 4, 1, a2, a3);
  sub_101F0B70(a3, a2, v10);
  qmemcpy(v5, v10, sizeof(v5));
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 1.0;
  return sub_101F17F0(v5);
}
