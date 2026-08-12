int __thiscall sub_101233B0(int *this, char a2)
{
  int v2; // esi

  v2 = (int)(this - 1);
  sub_1011A810(this + 8);
  sub_1011A810((int *)(v2 + 16));
  sub_100D3350((_DWORD *)(v2 + 4));
  if ( (a2 & 1) != 0 )
    sub_10034930(v2);
  return v2;
}
