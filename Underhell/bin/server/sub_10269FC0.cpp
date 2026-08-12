char __thiscall sub_10269FC0(_DWORD **this, int a2, float *a3, float *a4)
{
  int v5; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  float v9[3]; // [esp+8h] [ebp-18h] BYREF
  float v10[3]; // [esp+14h] [ebp-Ch] BYREF

  v5 = ((int (__thiscall *)(_DWORD **, int))(*this)[32])(this, a2);
  if ( v5 == -1 )
    return 0;
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this[11] + 208))(this[11]);
  v8 = v7;
  if ( !v7 )
    return 0;
  sub_100BCCF0(v7);
  sub_100BF1E0(v8, v5, (int)v10, (int)v9);
  if ( a3 )
  {
    *a3 = v10[0];
    a3[1] = v10[1];
    a3[2] = v10[2];
  }
  if ( a4 )
  {
    *a4 = v9[0];
    a4[1] = v9[1];
    a4[2] = v9[2];
  }
  return 1;
}
