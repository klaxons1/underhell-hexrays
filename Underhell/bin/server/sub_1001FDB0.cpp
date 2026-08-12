bool __thiscall sub_1001FDB0(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  bool result; // al
  int v7; // [esp-8h] [ebp-18h]
  int v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = *this;
  v9 = 0;
  v4 = sub_1023CC80(a2, 16449, &v9);
  result = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int, int, int))(v3 + 544))(this, v4, v7, v8) )
  {
    if ( !v9 )
      return 0;
    v5 = *a2 == -1 || off_1061BE18[4 * (*a2 & 0xFFF) + 2] != *a2 >> 12 ? 0 : off_1061BE18[4 * (*a2 & 0xFFF) + 1];
    if ( v9 != v5 )
      return 0;
  }
  return result;
}
