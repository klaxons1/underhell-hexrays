int __thiscall sub_10016A80(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = ++this[45];
  if ( v1 > this[44] )
    this[44] = v1;
  this[46] += *this;
  this[47] += this[3];
  this[48] += this[6];
  this[49] += this[7];
  this[50] += this[8];
  this[51] += this[9];
  this[52] += this[10];
  this[53] += this[11];
  this[54] += this[12];
  this[55] += this[13];
  result = this[4];
  this[56] += result;
  return result;
}
