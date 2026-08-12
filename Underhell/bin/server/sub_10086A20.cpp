int __thiscall sub_10086A20(_DWORD *this)
{
  int v2; // edi
  int v3; // edi

  v2 = this[201];
  *this = &CAI_NetworkManager::`vftable';
  if ( v2 )
  {
    sub_10123F80(0);
    sub_10184660(*(_DWORD *)(v2 + 12));
    sub_10184660(v2);
  }
  v3 = this[202];
  if ( v3 )
  {
    sub_10085E10((_DWORD *)this[202]);
    sub_10184660(v3);
  }
  if ( (_DWORD *)dword_10693628 == this )
    dword_10693628 = 0;
  return sub_100DF1D0(this);
}
