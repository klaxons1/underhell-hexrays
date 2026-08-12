int __thiscall sub_10078750(float *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax
  _BYTE v6[56]; // [esp+8h] [ebp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  v3 = a2;
  if ( *(_DWORD *)(a2 + 48) )
    v4 = (*(int (__thiscall **)(float *, int, _BYTE *))(*(_DWORD *)this + 108))(this, a2, v6);
  else
    v4 = (*(int (__thiscall **)(float *, int, _BYTE *))(*(_DWORD *)this + 104))(this, a2, v6);
  a2 = dword_1060837C[v4];
  if ( !a2 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, _BYTE *, int, int *))(*((_DWORD *)this + 2) + 32))(
    (_DWORD *)this + 2,
    v3,
    v6,
    v4,
    &a2);
  result = a2;
  this[4] = 0.0;
  return result;
}
