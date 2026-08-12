char __thiscall sub_1039A7E0(_DWORD *this, int a2, float *a3)
{
  char result; // al
  bool v6; // [esp+17h] [ebp+Bh]

  v6 = (*(_DWORD *)(a2 + 16) & 0xFFF00000) == 0x400000;
  sub_1039A510(this, 0);
  if ( !byte_106EA248
    || (!v6 ? (result = sub_10043A70(this, a2, (int)a3)) : (result = sub_10394530((_DWORD **)this, a2, a3)),
        byte_106EA248 = 0,
        !result) )
  {
    if ( v6 )
      result = sub_10394530((_DWORD **)this, a2, a3);
    else
      result = sub_10043A70(this, a2, (int)a3);
  }
  dword_106EA24C = 0;
  dword_106EA38C = 0;
  return result;
}
