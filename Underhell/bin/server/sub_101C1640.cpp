BOOL __stdcall sub_101C1640(_DWORD *a1)
{
  int v1; // ecx
  int v2; // eax
  _BYTE v4[84]; // [esp+8h] [ebp-60h] BYREF
  void **v5; // [esp+5Ch] [ebp-Ch] BYREF

  sub_10265570(a1, a1[105]);
  v1 = a1[63] >> 11;
  v5 = &CTraceFilterPushFinal::`vftable';
  if ( (v1 & 1) != 0 )
    sub_100DAE60((int)a1);
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 636))(a1);
  sub_10264DF0(a1, a1 + 145, a1 + 145, v2, &v5, v4);
  return v4[55] == 0;
}
