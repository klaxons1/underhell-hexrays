int __thiscall sub_100775F0(int this, int a2)
{
  int v2; // eax
  unsigned __int8 v4; // al
  float *v5; // eax
  double v6; // st7
  int result; // eax
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  if ( a2 == 800 )
    v2 = 0;
  v9 = v2;
  v4 = sub_10076390((_BYTE *)this, (int)&v9);
  if ( v4 == 0xFF && (v8 = 0, v4 = sub_10076390((_BYTE *)this, (int)&v8), v4 == 0xFF)
    || (v5 = *(float **)(*(_DWORD *)(this + 4) + 12 * v4 + 8)) == 0 )
  {
    DevWarning(2, "Asking LastSeenPosition for enemy that's not in my memory!!\n");
    return this + 44;
  }
  else
  {
    *(float *)(this + 44) = v5[4];
    *(float *)(this + 48) = v5[5];
    v6 = v5[6];
    result = this + 44;
    *(float *)(this + 52) = v6;
  }
  return result;
}
