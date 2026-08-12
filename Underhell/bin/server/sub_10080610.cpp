bool __thiscall sub_10080610(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  bool result; // al
  int v6; // ebx
  double v7; // st7
  float v8[2]; // [esp+4h] [ebp-Ch] BYREF
  float v9; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v4 = this[8];
  if ( v4 )
  {
    if ( a2 < 0 || a2 >= *(_DWORD *)(v4 + 4) )
    {
      ++dword_10691DE0;
      v6 = 0;
    }
    else
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * a2);
    }
    sub_1008D160(v8, *(_DWORD *)(this[1] + 1676));
    result = 0;
    if ( (*(_DWORD *)(v6 + 60) != 2 || sub_1007A470(this[6], v8, a3))
      && (*(_DWORD *)(v6 + 60) != 4 || (*(_BYTE *)(v6 + 64) & 0x1D) == 0 || sub_1007A470(this[6], v8, a3)) )
    {
      if ( sub_1007EA60((int)this, (int)&savedregs, a3, (int)this, v8, a3, 0, 1) )
        return 1;
      v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]);
      v9 = v7 + v9;
      if ( sub_1007EA60((int)this, (int)&savedregs, a3, (int)this, v8, a3, 0, 1) )
        return 1;
    }
  }
  else
  {
    DevMsg("CanFitAtNode() called with no network!\n");
    return 0;
  }
  return result;
}
