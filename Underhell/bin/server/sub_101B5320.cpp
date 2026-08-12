int __cdecl sub_101B5320(int a1)
{
  _BYTE v2[12]; // [esp+4h] [ebp-24h] BYREF
  float v3[3]; // [esp+10h] [ebp-18h] BYREF
  float v4[3]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 28) + 4))(*(_DWORD *)(a1 + 28), v3);
  (***(void (__thiscall ****)(_DWORD, _BYTE *))(a1 + 28))(*(_DWORD *)(a1 + 28), v2);
  sub_10422540(v2, v4);
  return sub_101AB000("warp_shield_impact", v3[0], v3[1], v3[2], v4[0], v4[1], v4[2], 0);
}
