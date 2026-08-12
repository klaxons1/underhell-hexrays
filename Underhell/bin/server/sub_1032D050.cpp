int __thiscall sub_1032D050(int this, int a2, int a3, float a4)
{
  int result; // eax
  void (__thiscall *v6)(int, _BYTE *, int); // edx
  int v7; // edi
  int v8; // ebx
  double v9; // st7
  _BYTE v10[8]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-10h]
  float v12; // [esp+1Ch] [ebp-4h]

  if ( sub_100697A0((_DWORD *)this, 23, 1) || sub_10295590((_BYTE *)(this + 3652)) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = *(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)this + 524);
    v7 = *(_DWORD *)(this + 580);
    v8 = *(_DWORD *)(this + 584);
    v12 = *(float *)(this + 588);
    v6(this, v10, a3);
    v9 = v11 + v12;
    result = a2;
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8;
    v12 = v9 * 0.5;
    *(float *)(a2 + 8) = v12;
  }
  else
  {
    sub_10021390((float *)this, (float *)a2, a3, a4);
    return a2;
  }
  return result;
}
