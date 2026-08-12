void *__thiscall sub_10067B10(_DWORD *this)
{
  float *v1; // esi
  _DWORD *v2; // ecx
  void *result; // eax

  v1 = (float *)(this - 3);
  if ( this[308] )
  {
    v2 = this - 3;
    if ( *((_BYTE *)v1 + 1196) )
    {
      result = (void *)sub_100679E0(v2);
      if ( !*((_BYTE *)v1 + 1197) )
      {
        sub_101EA120(*((_DWORD *)v1 + 311), v1[300]);
        result = off_103DC81C;
        v1[300] = *((float *)off_103DC81C + 4) + v1[300];
      }
    }
    else
    {
      return (void *)sub_10066F70(v2);
    }
  }
  return result;
}
