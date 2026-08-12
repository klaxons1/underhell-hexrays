unsigned int __thiscall sub_10033340(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // ecx
  int v5; // esi
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // ecx
  char *v9; // esi

  this[564] = this[548];
  this[565] = this[549];
  this[566] = this[550];
  this[567] = this[551];
  this[568] = this[552];
  this[569] = this[553];
  this[570] = this[554];
  this[571] = this[555];
  this[548] &= this[572];
  this[549] &= this[573];
  this[550] &= this[574];
  this[551] &= this[575];
  this[552] &= this[576];
  this[553] &= this[577];
  result = this[554] & this[578];
  this[554] = result;
  this[555] &= this[579];
  if ( this[581] == 4 )
  {
    v2 = this[672];
    if ( v2 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (v2 & 0xFFF) + 1];
      v3 = v2 >> 12;
      if ( *(_DWORD *)(result + 4) == v3 )
      {
        if ( *(_DWORD *)result )
        {
          v4 = *(_DWORD *)(result + 4) == v3 ? *(_DWORD *)result : 0;
          v5 = v4;
          if ( !*(_BYTE *)(v4 + 876)
            || (v6 = *(_DWORD *)(v4 + 880), v6 == -1)
            || off_1061BE18[4 * (*(_DWORD *)(v4 + 880) & 0xFFF) + 2] != v6 >> 12
            || (v7 = off_1061BE18[4 * (*(_DWORD *)(v4 + 880) & 0xFFF) + 1]) == 0
            || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7), !(_BYTE)result) )
          {
            result = *(_DWORD *)(v5 + 880);
            if ( result != -1 )
            {
              result >>= 12;
              if ( off_1061BE18[4 * (*(_DWORD *)(v5 + 880) & 0xFFF) + 2] == result )
              {
                v8 = off_1061BE18[4 * (*(_DWORD *)(v5 + 880) & 0xFFF) + 1];
                if ( v8 )
                {
                  result = sub_100D7680(v8);
                  v9 = (char *)result;
                  if ( result )
                  {
                    sub_10023E00((char *)result, 17);
                    return (unsigned int)sub_10023E00(v9, 18);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
