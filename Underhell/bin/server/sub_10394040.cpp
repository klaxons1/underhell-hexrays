int __thiscall sub_10394040(int this, int a2)
{
  _DWORD *v3; // esi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v3 = (_DWORD *)sub_100AAD20(*(_DWORD **)(this + 2404), &v5);
  if ( !v3 )
    return sub_1001FCE0((_DWORD *)this, a2);
  while ( !sub_1023C660(v3) || (v3[4] & 0x400000) == 0 )
  {
    v3 = (_DWORD *)sub_100AAD50(&v5);
    if ( !v3 )
      return sub_1001FCE0((_DWORD *)this, a2);
  }
  return (int)v3;
}
