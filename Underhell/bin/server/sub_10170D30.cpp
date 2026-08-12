_DWORD *__thiscall sub_10170D30(int *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax

  v3 = (_DWORD *)sub_10170620(this, 0);
  if ( v3 )
  {
    if ( !sub_10170770((unsigned int)v3, this + 7) )
    {
      v4 = (_DWORD *)v3[1];
      if ( v4 != v3 )
      {
        if ( v4 )
          v4[2] = v3[2];
        else
          this[3] = v3[2];
        v5 = v3[2];
        if ( v5 )
          *(_DWORD *)(v5 + 4) = v3[1];
        else
          this[4] = v3[1];
        v3[2] = v3;
        v3[1] = v3;
        --this[6];
      }
    }
  }
  v3[2] = 0;
  v6 = this[4];
  v3[1] = v6;
  this[4] = (int)v3;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = v3;
    ++this[6];
  }
  else
  {
    ++this[6];
    this[3] = (int)v3;
  }
  *v3 = *a2;
  return v3;
}
