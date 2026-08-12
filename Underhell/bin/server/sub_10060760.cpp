int __thiscall sub_10060760(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  sub_100781D0();
  v2 = this[35];
  if ( v2 != -1 )
  {
    sub_100C4FB0(v2, 0.2, 0.1);
    this[35] = -1;
  }
  result = this[36];
  if ( result != -1 )
  {
    result = sub_100C4FB0(result, 0.2, 0.1);
    this[36] = -1;
  }
  this[37] = -1;
  this[38] = -1;
  this[43] = -1;
  this[44] = -1;
  return result;
}
