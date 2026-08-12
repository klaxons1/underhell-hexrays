_BYTE *__thiscall sub_10263790(_DWORD *this, _DWORD *a2)
{
  _BYTE *result; // eax
  int v4; // esi
  bool v5; // cc
  int v6; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  result = (_BYTE *)sub_1022A800(a2, "lastBarWidth", 0);
  v4 = 0;
  v5 = this[68] <= 0;
  this[71] = result;
  if ( !v5 )
  {
    do
    {
      _snprintf(Buffer, 0x40u, "%d_hidden", v4);
      v6 = sub_1022A800(a2, Buffer, -1);
      if ( v6 )
      {
        if ( v6 == 1 )
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 832))(this, v4, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 832))(this, v4, 1);
      }
      _snprintf(Buffer, 0x40u, "%d_width", v4);
      result = (_BYTE *)sub_1022A800(a2, Buffer, -1);
      if ( (int)result >= 0 )
        result = (_BYTE *)sub_10239D70(
                            *(int (__thiscall ****)(void *, _BYTE *, int *))(this[54]
                                                                           + 72 * *(unsigned __int8 *)(this[65] + v4)),
                            result);
      ++v4;
    }
    while ( v4 < this[68] );
  }
  return result;
}
