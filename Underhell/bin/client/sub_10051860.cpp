int __thiscall sub_10051860(int this)
{
  int result; // eax
  int v3; // edx
  int v4; // edi
  int i; // esi
  char v6; // al
  char v7; // al
  int v8; // [esp+4h] [ebp-4h]

  result = sub_10039ED0((unsigned __int16 *)this);
  v3 = 0;
  v8 = 0;
  if ( *(int *)(this + 1196) > 0 )
  {
    v4 = this + 1788;
    do
    {
      for ( i = 0; i < *(_DWORD *)(this + 1200); ++i )
      {
        v6 = *(_BYTE *)(v4 + i);
        if ( v3 < *(_DWORD *)(this + 1196) )
        {
          v3 = v8;
          if ( i < *(_DWORD *)(this + 1200) && v8 >= 0 && i >= 0 )
          {
            if ( (*(_BYTE *)(v4 + i) & 1) != 0 )
              v7 = v6 | 1;
            else
              v7 = v6 & 0xFE;
            *(_BYTE *)(v4 + i) = v7;
          }
          if ( v8 < *(_DWORD *)(this + 1196) && i < *(_DWORD *)(this + 1200) && v8 >= 0 && i >= 0 )
            *(_BYTE *)(v4 + i) |= 2u;
        }
        sub_100514A0(this, v3, i, (*(unsigned __int8 *)(v4 + i) >> 2) & 3);
        v3 = v8;
      }
      ++v3;
      v4 += 16;
      v8 = v3;
    }
    while ( v3 < *(_DWORD *)(this + 1196) );
  }
  return result;
}
