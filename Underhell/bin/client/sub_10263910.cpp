bool __thiscall sub_10263910(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // ecx

  v2 = this[3];
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    v3 = -1;
  }
  else
  {
    v4 = (_DWORD *)*this;
    while ( *v4 != *a2 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  return v3 >= 0;
}
