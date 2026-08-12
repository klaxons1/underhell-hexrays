void __thiscall sub_102BFD50(_DWORD *this, int a2)
{
  int v3; // eax
  bool v4; // cf

  sub_1015F8A0(this, a2);
  v3 = this[23];
  if ( *(_DWORD *)(v3 + 364) || *(_DWORD *)(v3 + 360) )
  {
    v4 = (*(_DWORD *)(v3 + 360))-- != 0;
    *(_DWORD *)(v3 + 364) = v4 + *(_DWORD *)(v3 + 364) - 1;
  }
  sub_1015EFA0(
    (int)this,
    "%I64u decrement entering NOCLIP (entering vehicle doesn't count)\n",
    *(_QWORD *)(this[23] + 360));
}
