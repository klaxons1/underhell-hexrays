double __thiscall sub_1001BA70(_DWORD *this, char *String2)
{
  char *v2; // ebx
  const char *v4; // eax
  const char *v5; // ebx
  const char *v6; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  _BYTE v10[4]; // [esp+20h] [ebp-4h] BYREF

  v2 = String2;
  if ( !String2 || !*String2 )
  {
    v8 = this[954];
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (this[954] & 0xFFF) + 1];
      if ( off_1061BE18[4 * (this[954] & 0xFFF) + 2] == v8 >> 12 )
      {
        if ( *v9 )
          sub_10225FD0(this, this[954]);
      }
    }
    this[953] = 0;
    return 0.0;
  }
  if ( this[953] )
  {
    v4 = (const char *)this[953];
    if ( !v4 )
      v4 = String;
    if ( !_stricmp(v4, String2) )
      return 0.0;
  }
  if ( (unsigned __int8)sub_103E0CF0(0) )
    sub_10225FD0(this, this[954]);
  if ( *(_DWORD *)(dword_1069034C + 48) )
  {
    v5 = (const char *)this[23];
    if ( !v5 )
      v5 = String;
    v6 = (const char *)sub_100D6390(this);
    Msg("%s (%s) set expression to: %s\n", v5, v6, String2);
    v2 = String2;
  }
  this[953] = 0;
  sub_102286F0((int)this, v2, (int)(this + 954), 0.0, 1, 0, 0, 0);
  if ( (unsigned __int8)sub_103E0CF0(0) )
    this[953] = *(_DWORD *)sub_10162BE0(v10, v2);
  return (float)0.0;
}
