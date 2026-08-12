double __thiscall sub_1007E6E0(_DWORD *this)
{
  int v2; // edi
  double result; // st7
  int v4; // eax
  float v5; // [esp+Ch] [ebp-4h]

  v2 = this[1];
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  result = sub_100A67C0(v2 + 580);
  if ( result < 0.0 )
  {
    v4 = sub_1007DE50((int)this, -1);
    if ( v4 == -1 )
    {
      return 0.0;
    }
    else
    {
      v5 = sub_100BF9E0(v4);
      sub_100A6000(v5);
      return v5;
    }
  }
  return result;
}
