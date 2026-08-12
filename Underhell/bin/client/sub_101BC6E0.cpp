char __thiscall sub_101BC6E0(int this, int a2)
{
  unsigned __int16 v2; // ax
  int v4; // esi
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  LOBYTE(v2) = a2;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 172);
    *(_DWORD *)(a2 + 172) = 0;
    if ( v4 )
    {
      v6[0] = v4;
      v6[1] = -1;
      v2 = sub_101BA800((_WORD *)(this + 8), (int)v6);
      if ( v2 != 0xFFFF )
      {
        sub_101BC5E0(this + 8, v2);
        a2 = v4;
        LOBYTE(v2) = sub_1012D820((_DWORD *)(this + 36), &a2);
      }
    }
  }
  return v2;
}
