_DWORD *__thiscall sub_10023080(_DWORD *this, char *String2, int a3)
{
  int v4; // edi
  int v6; // esi

  *this = String2;
  this[1] = a3;
  this[4] = 0xFFFF;
  v4 = dword_106C4744;
  if ( dword_106C4744 )
  {
    v6 = *(_DWORD *)(dword_106C4744 + 8);
    if ( _stricmp(*(const char **)dword_106C4744, String2) <= 0 )
    {
      while ( v6 && _stricmp(*(const char **)v6, String2) <= 0 )
      {
        v4 = v6;
        v6 = *(_DWORD *)(v6 + 8);
      }
      this[2] = v6;
      *(_DWORD *)(v4 + 8) = this;
      return this;
    }
    else
    {
      this[2] = dword_106C4744;
      dword_106C4744 = (int)this;
      return this;
    }
  }
  else
  {
    dword_106C4744 = (int)this;
    this[2] = 0;
    return this;
  }
}
