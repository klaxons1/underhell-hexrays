int __thiscall sub_10232E40(int this, float a2)
{
  char v2; // fps^1
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  double v7; // st7
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // ecx
  int result; // eax
  int v12; // ecx
  _BYTE *v13; // eax
  char v14; // dl
  int v15; // [esp+10h] [ebp+8h]

  v3 = a2 < -0.03125;
  v4 = 0;
  v5 = a2 == -0.03125;
  v7 = a2 * 32.0;
  v15 = (int)fabs(a2);
  v8 = *(_DWORD *)(this + 12);
  v9 = abs32((int)v7) & 0x1F;
  if ( v8 + 1 > *(_DWORD *)(this + 8) )
    *(_BYTE *)(this + 16) = 1;
  if ( !*(_BYTE *)(this + 16) )
  {
    if ( v15 )
      *(_BYTE *)((v8 >> 3) + *(_DWORD *)this) |= 1 << (v8 & 7);
    else
      *(_BYTE *)(*(_DWORD *)this + (v8 >> 3)) &= ~(1 << (v8 & 7));
    ++*(_DWORD *)(this + 12);
  }
  v10 = *(_DWORD *)(this + 12);
  if ( v10 + 1 > *(_DWORD *)(this + 8) )
    *(_BYTE *)(this + 16) = 1;
  if ( !*(_BYTE *)(this + 16) )
  {
    if ( v9 )
      *(_BYTE *)((v10 >> 3) + *(_DWORD *)this) |= 1 << (v10 & 7);
    else
      *(_BYTE *)(*(_DWORD *)this + (v10 >> 3)) &= ~(1 << (v10 & 7));
    ++*(_DWORD *)(this + 12);
  }
  result = v15;
  if ( v15 || v9 )
  {
    v12 = *(_DWORD *)(this + 12);
    if ( v12 + 1 > *(_DWORD *)(this + 8) )
      *(_BYTE *)(this + 16) = 1;
    if ( !*(_BYTE *)(this + 16) )
    {
      v13 = (_BYTE *)(*(_DWORD *)this + (v12 >> 3));
      v14 = 1 << (v12 & 7);
      if ( __SETP__(v2 & 0x41, 0) )
        *v13 &= ~v14;
      else
        *v13 |= v14;
      ++*(_DWORD *)(this + 12);
      result = v15;
    }
    if ( result )
      result = sub_1012A1E0((_DWORD *)this, result - 1, 14, 1);
    if ( v9 )
      return sub_1012A1E0((_DWORD *)this, v9, 5, 1);
  }
  return result;
}
