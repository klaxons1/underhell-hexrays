_DWORD *__thiscall sub_10056BD0(int *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = (_DWORD *)sub_100517B0(this, 0);
  if ( v2 )
  {
    if ( !sub_10051900((unsigned int)v2, this + 7) )
    {
      v3 = (_DWORD *)v2[17];
      if ( v3 != v2 )
      {
        if ( v3 )
          v3[18] = v2[18];
        else
          this[3] = v2[18];
        v4 = v2[18];
        if ( v4 )
          *(_DWORD *)(v4 + 68) = v2[17];
        else
          this[4] = v2[17];
        v2[18] = v2;
        v2[17] = v2;
        --this[6];
      }
    }
  }
  v2[18] = 0;
  v5 = this[4];
  v2[17] = v5;
  this[4] = (int)v2;
  if ( v5 )
    *(_DWORD *)(v5 + 72) = v2;
  else
    this[3] = (int)v2;
  ++this[6];
  *v2 = -1;
  v2[1] = -1;
  memset(v2 + 2, 0, 0x38u);
  v2[16] = 0;
  return v2;
}
