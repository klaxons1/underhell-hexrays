int __thiscall sub_101791D0(int this)
{
  int v1; // edx

  if ( !*(_BYTE *)(this + 20) )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DCDDC + 4))(
             off_103DCDDC,
             *(unsigned __int16 *)(this + 8));
  v1 = *(unsigned __int16 *)(this + 8);
  if ( (_WORD)v1 == 0xFFFF )
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)off_103DCDDC + 16))(off_103DCDDC, this + 4, 8);
  else
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, v1);
}
