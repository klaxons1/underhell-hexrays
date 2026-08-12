_BYTE *__thiscall sub_100588A0(_DWORD *this, const char *a2)
{
  _BYTE *result; // eax

  result = (_BYTE *)this[52];
  if ( !result || !*result || strcmp(a2, "TLK_LEAD_MISSING_WEAPON") )
    return sub_10058660((int)this, a2);
  return result;
}
