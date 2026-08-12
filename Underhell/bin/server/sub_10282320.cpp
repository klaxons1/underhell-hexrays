_DWORD *__thiscall sub_10282320(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = &CBaseTempEntity::`vftable';
  this[1] = a2;
  this[2] = dword_106D233C;
  dword_106D233C = (int)this;
  return result;
}
