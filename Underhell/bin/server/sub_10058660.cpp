_BYTE *__thiscall sub_10058660(int this, const char *a2)
{
  _BYTE *result; // eax

  result = *(_BYTE **)(this + 48);
  if ( !result || !*result || strcmp(a2, "TLK_LEAD_START") )
  {
    result = *(_BYTE **)(this + 52);
    if ( !result || !*result || strcmp(a2, "TLK_LEAD_ATTRACTPLAYER") )
    {
      result = *(_BYTE **)(this + 56);
      if ( !result || !*result || strcmp(a2, "TLK_LEAD_WAITOVER") )
      {
        result = *(_BYTE **)(this + 60);
        if ( !result || !*result || strcmp(a2, "TLK_LEAD_ARRIVAL") )
        {
          result = *(_BYTE **)(this + 68);
          if ( !result || !*result || strcmp(a2, "TLK_LEAD_SUCCESS") )
          {
            result = *(_BYTE **)(this + 72);
            if ( !result || !*result || strcmp(a2, "lead_fail") )
            {
              result = *(_BYTE **)(this + 76);
              if ( !result || !*result || strcmp(a2, "TLK_LEAD_RETRIEVE") )
              {
                result = *(_BYTE **)(this + 80);
                if ( !result || !*result || strcmp(a2, "TLK_LEAD_COMINGBACK") )
                {
                  if ( !*(_BYTE *)(this + 4) )
                    return 0;
                  result = *(_BYTE **)(this + 64);
                  if ( !result || !*result )
                    return 0;
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
