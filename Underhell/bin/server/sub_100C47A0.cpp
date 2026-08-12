int __thiscall sub_100C47A0(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7[1023]; // [esp+20h] [ebp-1060h] BYREF
  _BYTE v8[20]; // [esp+101Ch] [ebp-64h] BYREF
  _BYTE v9[80]; // [esp+1030h] [ebp-50h] BYREF

  if ( a2 )
  {
    sub_101027A0(a2, a3, a4, a5);
    sub_10107490(
      a2,
      *(_DWORD *)(this + 888),
      a3,
      a4,
      *(_DWORD *)(this + 908),
      *(float *)(this + 904),
      this + 912,
      a5,
      1.0,
      *(float *)(dword_106B31C8 + 12));
    if ( *(_DWORD *)(this + 888) )
    {
      sub_10106F20(v7);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_101073B0(v7, a2, this + 704, this + 580, *(float *)(dword_106B31C8 + 12), 0, a5);
      sub_101076A0(a2, (int)v7, a3, a4, this + 912, a5, *(float *)(dword_106B31C8 + 12));
      sub_102375F0(v9);
      sub_101C8650(v8);
    }
    else
    {
      sub_101076A0(a2, 0, a3, a4, this + 912, a5, *(float *)(dword_106B31C8 + 12));
    }
    return sub_10102900(a2, a3, a4, this + 1008, a5);
  }
  return result;
}
