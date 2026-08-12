__int16 *__cdecl sub_101E2A40(_DWORD *a1)
{
  int *v1; // eax
  _BYTE v3[12]; // [esp+Ch] [ebp-24h] BYREF
  int v4[3]; // [esp+18h] [ebp-18h] BYREF
  int v5[3]; // [esp+24h] [ebp-Ch] BYREF

  sub_100F5A30(a1, (int)v4, 0, 0);
  v1 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 504))(a1, v3);
  v5[0] = *v1;
  v5[1] = v1[1];
  v5[2] = v1[2];
  return sub_100883B0((float *)v5, (float *)v4, 0.89999998);
}
