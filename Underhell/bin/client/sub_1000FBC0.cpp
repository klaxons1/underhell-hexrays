int __thiscall sub_1000FBC0(int this, int a2, char a3)
{
  if ( !a2 )
    return sub_1003CD00();
  sub_1003CB30(a2, 0);
  sub_10035C70(0, 0);
  if ( a3 )
    *(_DWORD *)(this + 112) |= 1u;
  sub_1008FB60(*(unsigned __int16 *)(this + 388) | 4);
  sub_10034A30(&flt_10459240);
  return sub_10034B10(&flt_1045924C);
}
