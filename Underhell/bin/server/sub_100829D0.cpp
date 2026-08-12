BOOL __thiscall sub_100829D0(int this, float a2, float a3)
{
  int v4; // eax
  char v5; // al

  v4 = *(_DWORD *)(this + 4);
  if ( *(_DWORD *)(v4 + 2808) )
  {
    if ( sub_1007EE30((_DWORD **)this, v4 + 716, 1.0, (int)&flt_106F1CA8) )
      return 1;
    v5 = sub_100828A0((_DWORD *)this, a2, a3, 5);
  }
  else
  {
    if ( sub_100828A0((_DWORD *)this, a2, a3, 5) )
      return 1;
    v5 = sub_1007EE30((_DWORD **)this, *(_DWORD *)(this + 4) + 716, 1.0, (int)&flt_106F1CA8);
  }
  return v5 != 0;
}
