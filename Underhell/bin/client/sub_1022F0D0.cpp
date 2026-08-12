bool __thiscall sub_1022F0D0(int this, int a2)
{
  int (__thiscall ***v3)(_DWORD, int, int *); // edi
  char v4; // bl
  bool result; // al
  int v6; // eax
  int v7; // ecx
  char v8; // [esp+Fh] [ebp-1h] BYREF

  if ( (*(_BYTE *)(this + 21) & 1) != 0 )
  {
    v8 = 0;
    sub_1022F5B0(this, "%c", &v8);
  }
  else
  {
    sub_1011C500((_DWORD *)this, &v8);
  }
  v3 = (int (__thiscall ***)(_DWORD, int, int *))a2;
  v4 = v8;
  if ( v8 == *(_BYTE *)(a2 + 4) )
  {
    a2 = *(_DWORD *)(a2 + 20);
    result = sub_1022E3E0(this, 0, &a2);
    if ( !result )
      return result;
    v4 = (**v3)(v3, *(_DWORD *)this + *(_DWORD *)(this + 12) - *(_DWORD *)(this + 32), &a2);
    *(_DWORD *)(this + 12) += a2;
    v6 = *(_DWORD *)(this + 12);
    if ( v6 > *(_DWORD *)(this + 28) )
    {
      *(_BYTE *)(this + 20) |= 2u;
      return v4;
    }
    v7 = *(_DWORD *)(this + 32);
    *(_BYTE *)(this + 20) &= ~2u;
    if ( v6 < v7 || v6 >= v7 + *(_DWORD *)(this + 4) )
      (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
  }
  return v4;
}
