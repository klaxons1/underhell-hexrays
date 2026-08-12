int __thiscall sub_1025AB30(int *this, LPCCH lpMultiByteStr)
{
  bool v2; // zf
  unsigned int v5; // esi
  void *v6; // esp
  __int16 v7[6]; // [esp+0h] [ebp-810h] BYREF
  wchar_t Destination[1024]; // [esp+Ch] [ebp-804h] BYREF
  int *v9; // [esp+80Ch] [ebp-4h]

  v2 = *lpMultiByteStr == 35;
  v9 = this;
  if ( v2 )
  {
    sub_10257410(lpMultiByteStr, Destination, 0x800u);
    return sub_1025A7B0(this, (__int16 *)Destination);
  }
  else
  {
    v5 = 2 * strlen(lpMultiByteStr) + 2;
    v6 = alloca(v5);
    sub_10228590(lpMultiByteStr, (LPWSTR)v7, v5);
    return sub_1025A7B0(v9, v7);
  }
}
