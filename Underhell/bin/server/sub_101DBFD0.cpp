void __stdcall sub_101DBFD0(int a1, int a2, int a3)
{
  _BYTE v3[12]; // [esp+18h] [ebp-Ch] BYREF

  sub_10265570(a2, 0);
  (*(void (__thiscall **)(int, int, int, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    a1,
    33570827,
    v3,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0(a3, a3 + 12, 255, 0, 0, 1, -1.0);
}
