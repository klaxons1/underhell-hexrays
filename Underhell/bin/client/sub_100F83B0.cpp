bool __thiscall sub_100F83B0(_DWORD *this, int a2)
{
  bool result; // al
  int v4; // edi
  int i; // ebx

  result = 1;
  if ( (this[78] & 0x400000) == 0 )
  {
    if ( a2 != 2 )
    {
      result = sub_100F7A60((int)this, -1, (void (__thiscall *)(char *))sub_100F7500, 0, 0, 0);
      if ( !result )
        return 0;
    }
    if ( a2 != 1 )
    {
      v4 = 0;
      if ( (int)this[52] > 0 )
      {
        for ( i = 0; ; i += 32 )
        {
          result = sub_100F7A60(
                     (int)this,
                     v4,
                     *(void (__thiscall **)(char *))(this[49] + i),
                     *(_DWORD *)(i + this[49] + 4),
                     *(_DWORD *)(i + this[49] + 8),
                     *(_DWORD *)(i + this[49] + 12));
          if ( !result )
            break;
          if ( ++v4 >= this[52] )
            return result;
        }
        return 0;
      }
    }
  }
  return result;
}
