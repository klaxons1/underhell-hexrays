int sub_10075690()
{
  _DWORD *v0; // ebx
  int result; // eax
  int v2; // esi
  int v3; // edi
  char v4; // al
  int v5; // esi

  v0 = off_103DCD78;
  for ( result = *((unsigned __int16 *)off_103DCD78 + 49202);
        result != 0xFFFF;
        result = *(unsigned __int16 *)(v3 + v0[24598] + 14) )
  {
    v2 = v0[24598];
    v3 = 16 * (unsigned __int16)result;
    v4 = *(_BYTE *)(v2 + v3 + 8);
    v5 = v3 + v2;
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 2) == 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DCDDC + 20))(
               off_103DCDDC,
               *(_DWORD *)(v5 + 4)) )
        {
          *(_BYTE *)(v5 + 8) |= 2u;
        }
      }
    }
    else if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DCDDC + 20))(
                off_103DCDDC,
                *(_DWORD *)(v5 + 4)) )
    {
      *(_BYTE *)(v5 + 8) |= 7u;
    }
  }
  return result;
}
