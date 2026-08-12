int __thiscall sub_10333D90(_DWORD *this, int a2)
{
  __int16 *v4; // eax
  int v5; // eax

  if ( a2 == 64 )
    return 281;
  if ( sub_100CF460(this) )
  {
    v4 = (__int16 *)sub_100CF460(this);
    if ( *(_DWORD *)(sub_100D0CC0(v4) + 440) == 1 )
    {
      v5 = this[581];
      if ( (v5 == 2 || v5 == 3) && (a2 == 1 || a2 == 79) && !sub_10227410((int)this, 1) )
        return 308;
    }
  }
  switch ( a2 )
  {
    case 353:
      return 348;
    case 352:
      return 344;
    case 309:
      return 306;
    case 273:
      return 270;
  }
  return sub_10398300(a2);
}
