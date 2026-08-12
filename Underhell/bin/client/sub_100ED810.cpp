int __thiscall sub_100ED810(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax
  int v4; // esi
  void *v5; // esi
  int v6; // ebx
  unsigned __int16 *v7; // eax

  a2[1677] = this[17];
  v2 = this[17];
  if ( v2 )
    *(_DWORD *)(v2 + 6712) = a2;
  a2[1678] = 0;
  this[17] = a2;
  result = (**(int (__thiscall ***)(void *, int, _DWORD))off_103DCDDC)(off_103DCDDC, (int)(a2 + 2), 0);
  v4 = a2[20];
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 512) )
    {
      v5 = off_103DCDDC;
      v6 = *(_DWORD *)off_103DCDDC;
      v7 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD *))(a2[2] + 32))(a2 + 2);
      return (*(int (__thiscall **)(void *, _DWORD, int))(v6 + 52))(v5, *v7, 11);
    }
  }
  return result;
}
