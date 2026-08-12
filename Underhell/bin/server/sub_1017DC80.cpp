int __thiscall sub_1017DC80(int this)
{
  _DWORD *v2; // eax
  int i; // ecx

  sub_100E33C0((char *)this, 1);
  *(_DWORD *)this = &CLogicCase::`vftable';
  v2 = (_DWORD *)(this + 888);
  for ( i = 15; i >= 0; --i )
  {
    v2[3] = -1;
    *v2 = 0;
    v2[4] = 5;
    v2 += 6;
  }
  *(_DWORD *)(this + 1284) = -1;
  *(_DWORD *)(this + 1272) = 0;
  *(_DWORD *)(this + 1288) = 5;
  return this;
}
