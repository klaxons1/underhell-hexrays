void __thiscall sub_1002DB30(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // [esp+8h] [ebp-4h]

  if ( *(_BYTE *)(this + 1997) )
  {
    if ( byte_104373E8 )
      v2 = *(_DWORD *)(dword_104038AC + 48);
    else
      v2 = *(_DWORD *)(dword_10403864 + 48);
    v3 = (double)HIBYTE(*(_DWORD *)(this + 88)) - (double)v2 * *((float *)off_103DC81C + 4);
    if ( v3 <= 0.0 )
      v3 = 0.0;
    sub_10035090(4, 0);
    LOWORD(v4) = *(_DWORD *)(this + 88);
    BYTE2(v4) = BYTE2(*(_DWORD *)(this + 88));
    HIBYTE(v4) = (int)v3;
    if ( *(_DWORD *)(this + 88) != v4 )
      *(_DWORD *)(this + 88) = v4;
    if ( !(int)v3 )
      *(_BYTE *)(this + 1996) = 1;
  }
}
