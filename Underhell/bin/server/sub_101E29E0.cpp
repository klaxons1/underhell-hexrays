int __cdecl sub_101E29E0(_DWORD *a1, int a2)
{
  float *v2; // eax
  _BYTE v4[12]; // [esp+10h] [ebp-24h] BYREF
  float v5[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+28h] [ebp-Ch] BYREF
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  sub_100F5A30(a1, (int)v5, 0, 0);
  v2 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 504))(a1, v4);
  v6[0] = *v2;
  v6[1] = v2[1];
  v6[2] = v2[2];
  return sub_100881B0((int)&savedregs, v6, v5, 0.89999998, a2);
}
