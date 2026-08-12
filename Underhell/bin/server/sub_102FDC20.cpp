int __thiscall sub_102FDC20(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edx
  int v4; // edx

  result = this[62] >> 17;
  if ( (this[62] & 0x20000) != 0 )
  {
    result = *(_DWORD *)(this[647] + 36);
    if ( result )
    {
      if ( *(_DWORD *)(dword_106E2C8C + 48) )
      {
        v2 = *(_DWORD *)result;
        while ( v2 )
        {
          v3 = *(_DWORD *)(v2 + 40);
          if ( v3 && *(_DWORD *)(v3 + 36) == 1 && (result = *(_DWORD *)(v2 + 16), result != -1) )
          {
            v4 = *(_DWORD *)(this[647] + 32);
            if ( result < 0 || result >= *(_DWORD *)(v4 + 4) )
            {
              ++dword_10691DE0;
            }
            else
            {
              result = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * result);
              if ( result )
              {
                *(float *)(result + 92) = *(float *)(dword_106B31C8 + 12) + 0.5;
                return result;
              }
            }
          }
          else
          {
            v2 = *(_DWORD *)(v2 + 40);
          }
        }
      }
    }
  }
  return result;
}
