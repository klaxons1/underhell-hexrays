char *__thiscall sub_10337D80(float *this)
{
  char *result; // eax
  _DWORD *v3; // ecx
  int v4; // edi

  result = (char *)dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    if ( sub_100296A0(this) )
    {
      sub_10335B60(this, (int)"TLK_STOPFOLLOW", 0);
      return sub_10337C80(this);
    }
    else
    {
      sub_10337BF0(this);
      if ( sub_103341B0(this) )
      {
        return (char *)sub_10335B60(v3, (int)"TLK_COMMANDED", 0);
      }
      else
      {
        v4 = sub_10050FC0((_DWORD *)this + 1127);
        result = (char *)sub_10261B20();
        if ( (char *)v4 == result )
          return (char *)sub_10335B60(this, (int)"TLK_STARTFOLLOW", 0);
      }
    }
  }
  return result;
}
