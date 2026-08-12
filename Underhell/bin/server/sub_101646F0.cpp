int __thiscall sub_101646F0(int this, int a2, int a3, int a4)
{
  _BYTE *v5; // ecx
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v5 = *(_BYTE **)(this + 3624);
  *(_BYTE *)(this + 3648) = 1;
  v7 = 0;
  if ( v5 && sub_101645F0(v5, a2, a3, a4, &v7) )
    return v7;
  else
    return sub_10043EF0((_DWORD *)this, a2, a3, a4);
}
