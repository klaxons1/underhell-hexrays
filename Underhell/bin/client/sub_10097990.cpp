int __thiscall sub_10097990(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( (*((_BYTE *)this + 21) & 1) != 0 )
  {
    v4 = 0;
    sub_1022F5B0(this, "%d", &v4);
    return v4;
  }
  else if ( (unsigned __int8)sub_1022E380(4) )
  {
    v2 = *this - this[8];
    if ( (this[11] & 1) != 0 )
    {
      sub_1003EE40((_BYTE *)this + 44, &v4, (char *)(this[3] + v2), 1);
      this[3] += 4;
      return v4;
    }
    else
    {
      result = *(_DWORD *)(v2 + this[3]);
      this[3] += 4;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
