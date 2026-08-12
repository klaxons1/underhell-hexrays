int __cdecl sub_10158540(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  _BYTE v6[12]; // [esp+18h] [ebp-Ch] BYREF

  sub_10265570(a3, a4);
  (*(void (__thiscall **)(int, int, int, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4, a1, a2, v6, a5);
  result = dword_106CE63C;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    return sub_101A0AD0(a5, a5 + 12, 255, 0, 0, 1, -1.0);
  return result;
}
