_DWORD *__thiscall sub_100805B0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  char v4; // cl

  sub_1007F490((int)(this + 26), a2);
  sub_1007F790((int)(this + 66), a2);
  result = (_DWORD *)(this[8] + 36 * (unsigned __int16)a2);
  v4 = *((_BYTE *)result + 24);
  if ( (v4 & 4) != 0 )
    return (_DWORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 100))(
                       off_103DD080,
                       *result,
                       0);
  if ( (v4 & 8) != 0 )
    return (_DWORD *)(*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)off_103DD080 + 100))(
                       off_103DD080,
                       *result,
                       2);
  return result;
}
