__int16 __thiscall sub_1011C9A0(_DWORD *this)
{
  int v2; // eax
  __int16 result; // ax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( (*((_BYTE *)this + 21) & 1) != 0 )
  {
    v4 = 0;
    sub_1022F5B0(this, "%d", &v4);
    return v4;
  }
  else if ( (unsigned __int8)sub_1022E380(2) )
  {
    v2 = *this - this[8];
    if ( (this[11] & 1) != 0 )
    {
      sub_1011C410((_BYTE *)this + 44, (char *)&v4, (char *)(this[3] + v2), 1);
      this[3] += 2;
      return v4;
    }
    else
    {
      result = *(_WORD *)(v2 + this[3]);
      this[3] += 2;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
