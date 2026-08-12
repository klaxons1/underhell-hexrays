int __thiscall sub_100752B0(_DWORD *this, int a2, float a3)
{
  int v3; // edi
  bool v5; // al
  int result; // eax
  double v7; // st7
  bool v8; // c0
  double v9; // st7
  int v10; // [esp+54h] [ebp-4h] BYREF

  v3 = a2;
  v10 = 0;
  HIBYTE(a3) = sub_10074BF0((int)this, a2, a3, (float *)&a2, &v10);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int *))(this[2] + 4))(this + 2, v3, a2, &v10) )
    return v10;
  v5 = (*(_BYTE *)(v3 + 56) & 8) == 0 && (!HIBYTE(a3) || *(_DWORD *)(this[51] + 68));
  if ( HIBYTE(a3) )
  {
    if ( !v5 )
      return v10;
  }
  else
  {
    if ( !v5 )
      goto LABEL_13;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int *))(this[2] + 8))(this + 2, v3, a2, &v10) )
      return v10;
  }
  if ( sub_100751A0(this, v3, *(float *)&a2, &v10) )
    return v10;
LABEL_13:
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int *))(this[2] + 12))(this + 2, v3, a2, &v10)
    || (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int *))(this[2] + 16))(this + 2, v3, a2, &v10) )
  {
    return v10;
  }
  v7 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this[1] + 2604) + 92))(10.0);
  v8 = *(float *)&a2 < v7;
  v9 = *(float *)&a2;
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int *))(this[2] + 20))(this + 2, v3, a2, &v10)
      || sub_100748D0(v3, *(float *)&a2, &v10) )
    {
      return v10;
    }
    v9 = *(float *)&a2;
  }
  if ( v9 > *(float *)(v3 + 44) )
    return 0;
  result = *(_DWORD *)(v3 + 68);
  if ( result >= 0 )
    return -4;
  return result;
}
