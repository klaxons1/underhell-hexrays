int __cdecl sub_100FEC10(int a1, int a2, int a3, int a4)
{
  _BYTE v5[48]; // [esp+4h] [ebp-30h] BYREF

  sub_10424F80(216 * a2 + *(_DWORD *)(*(_DWORD *)a1 + 160) + *(_DWORD *)a1 + 96, v5);
  return sub_10421E30(216 * a3 + *(_DWORD *)(*(_DWORD *)a1 + 160) + *(_DWORD *)a1 + 96, v5, a4);
}
