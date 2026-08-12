int __thiscall sub_10060A10(_DWORD *this, int a2, int a3, float a4, float a5)
{
  int v6; // eax
  int v7; // eax

  v6 = this[35];
  if ( v6 != -1 )
    sub_100C6460(v6, 0.0);
  v7 = this[36];
  if ( v7 != -1 )
    sub_100C6460(v7, 0.0);
  return sub_10078350(a2, a3, LODWORD(a4), LODWORD(a5));
}
