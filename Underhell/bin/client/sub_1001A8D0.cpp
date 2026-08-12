char __thiscall sub_1001A8D0(int this, int a2, int a3)
{
  unsigned __int16 *v4; // eax
  int v5; // edi
  _BYTE v7[48]; // [esp+Ch] [ebp-90h] BYREF
  _BYTE v8[48]; // [esp+3Ch] [ebp-60h] BYREF
  _BYTE v9[48]; // [esp+6Ch] [ebp-30h] BYREF

  sub_1001A5F0((const void **)this);
  if ( !*(_DWORD *)(this + 12) || !*(_DWORD *)(this + 32) )
    return 0;
  (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(this + 4) + 4) + 64))(
    0,
    -1,
    *(_DWORD *)(this + 16),
    *((float *)off_103DC81C + 3));
  v4 = *(unsigned __int16 **)(this + 20);
  v5 = *(_DWORD *)(*(_DWORD *)(this + 4) + 1284) + 48 * v4[1];
  sub_1001E670(*(_DWORD *)(this + 12), *(_DWORD *)(*(_DWORD *)this + 1808), 0, *v4, v8);
  sub_101F0AB0(v8, v7);
  sub_101EDC00(v5, v7, v9);
  sub_101ED7B0(v9, a3);
  sub_101EDA00(v9, 3, a2);
  return 1;
}
