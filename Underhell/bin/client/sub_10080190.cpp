_DWORD *__thiscall sub_10080190(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *result; // eax
  int v6; // ebx
  int v7; // eax
  char v8; // cl

  v4 = *(unsigned __int16 *)(this[17] + 16 * (unsigned __int16)a3 + 10);
  result = (_DWORD *)this[8];
  v6 = 36 * (unsigned __int16)a2;
  if ( (result[v6 / 4u + 6] & 0xE) != 0 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)result[9 * (unsigned __int16)a2] + 92))(
                         result[9 * (unsigned __int16)a2],
                         v4);
    if ( (_BYTE)result )
    {
      sub_1007F610((int)(this + 66), a2, a3);
      v7 = this[8];
      v8 = *(_BYTE *)(v7 + v6 + 24);
      result = (_DWORD *)(v6 + v7);
      if ( (v8 & 4) != 0 )
      {
        return (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 96))(
                           *(unsigned __int16 *)(this[17] + 16 * (unsigned __int16)a3 + 8),
                           *result,
                           0);
      }
      else if ( (v8 & 2) != 0 )
      {
        return (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)off_103DD080 + 96))(
                           *(unsigned __int16 *)(this[17] + 16 * (unsigned __int16)a3 + 8),
                           *result,
                           1);
      }
      else if ( (v8 & 8) != 0 )
      {
        return (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)off_103DD080 + 96))(
                           *(unsigned __int16 *)(this[17] + 16 * (unsigned __int16)a3 + 8),
                           *result,
                           2);
      }
    }
  }
  return result;
}
