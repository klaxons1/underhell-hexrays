char __thiscall sub_1041A0B0(_DWORD *this)
{
  char result; // al
  char v3; // [esp+7h] [ebp-1h] BYREF

  if ( (*((_BYTE *)this + 21) & 1) != 0 )
  {
    v3 = 0;
    sub_1042E720(this, "%u", &v3);
    return v3;
  }
  else if ( (unsigned __int8)sub_1042D170(1) )
  {
    result = *(_BYTE *)(this[3] - this[8] + *this);
    ++this[3];
  }
  else
  {
    return 0;
  }
  return result;
}
