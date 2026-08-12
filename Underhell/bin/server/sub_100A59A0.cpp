_DWORD *__thiscall sub_100A59A0(_DWORD *this)
{
  bool v2; // zf
  _DWORD *result; // eax

  sub_100A51A0(this);
  sub_10170440("CDefaultResponseSystem");
  *this = &CDefaultResponseSystem::`vftable';
  this[336] = &CDefaultResponseSystem::`vftable';
  this[339] = 0;
  this[340] = 0;
  this[341] = 0;
  this[342] = 0;
  this[343] = -1;
  this[344] = 0;
  this[345] = -1;
  this[346] = -1;
  v2 = this[339] == 0;
  this[347] = this[340];
  result = this;
  if ( v2 )
    this[339] = sub_10002010;
  return result;
}
