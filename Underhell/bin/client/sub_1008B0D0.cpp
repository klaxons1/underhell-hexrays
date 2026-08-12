__int16 __thiscall sub_1008B0D0(int this, unsigned __int16 a2)
{
  int v3; // eax
  int v4; // edi

  LOWORD(v3) = sub_10087A80((_WORD *)(this + 220), (int)&a2);
  v4 = (unsigned __int16)v3;
  if ( (unsigned __int16)v3 != 0xFFFF )
  {
    v3 = sub_1007A730(off_103DCD78, *(_DWORD *)(168 * a2 + *(_DWORD *)(this + 36)));
    if ( v3 )
      LOWORD(v3) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, 0);
    if ( (_WORD)v4 != 0xFFFF )
    {
      sub_10089A50(this + 220, v4);
      v3 = 10 * v4;
      *(_WORD *)(v3 + *(_DWORD *)(this + 224)) = v4;
      *(_WORD *)(*(_DWORD *)(this + 224) + v3 + 2) = *(_WORD *)(this + 240);
      LOWORD(v3) = -1;
      --*(_WORD *)(this + 238);
      *(_WORD *)(this + 240) = v4;
    }
  }
  return v3;
}
