_DWORD *__thiscall sub_10101540(_WORD *this, int a2, int a3)
{
  int v3; // esi
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  _DWORD *result; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  v3 = (int)(this + 30);
  v8 = a2;
  v9 = a3;
  sub_100FD090(this + 30, (int)&v8, (unsigned __int16 *)&a3, &a2);
  v4 = sub_100E3A00(v3);
  v5 = v4;
  sub_101003C0(v3, v4, a3, a2);
  v6 = *(_DWORD *)(v3 + 4);
  ++*(_WORD *)(v3 + 18);
  result = (_DWORD *)(v6 + 16 * v5 + 8);
  if ( v6 + 16 * v5 != -8 )
  {
    *result = v8;
    *(_DWORD *)(v6 + 16 * v5 + 12) = v9;
  }
  return result;
}
