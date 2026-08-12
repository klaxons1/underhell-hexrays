void __thiscall sub_101852D0(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // [esp-4h] [ebp-18h]
  _BYTE v4[4]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v5[4]; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  nullsub_4();
  if ( *(_DWORD *)(this + 208) )
  {
    sub_10236250(v4, v5, &v6, &v7);
    v3 = (_DWORD *)(this + 342);
    v2 = *(_DWORD **)(this + 208);
    if ( *(_BYTE *)(this + 340) )
      sub_100B37C0((int)v2, 0, 0, v6, v7, v3);
    else
      sub_100B3BE0(v2, 0, 0, v3);
  }
}
