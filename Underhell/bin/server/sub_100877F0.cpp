int __thiscall sub_100877F0(_DWORD *this, char a2)
{
  int result; // eax

  result = sub_1042D470(1);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this[4] - this[8] + *this) = a2;
    ++this[4];
    return sub_1042D4C0(this);
  }
  return result;
}
