int __thiscall sub_10160D50(int this)
{
  bool v2; // zf
  int v3; // eax
  int result; // eax
  _DWORD *v5; // esi

  *(_BYTE *)(this + 2474) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 20))(off_10627F88);
  v2 = (**(unsigned __int8 (__thiscall ***)(int))off_10627F88)(off_10627F88) == 0;
  v3 = *(_DWORD *)off_10627F88;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (**)(void))(v3 + 12))() )
    {
      sub_1015F8C0((_DWORD *)this, 1);
      sub_10160360((_DWORD *)this);
    }
  }
  else
  {
    if ( (*(unsigned __int8 (**)(void))(v3 + 176))() )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 196))(off_10627F88) )
      (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 168))(off_10627F88);
  }
  result = dword_106B3F14;
  if ( dword_106B3F14 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(
               dword_106B31D8 + 4,
               dword_106B3F14);
    dword_106B3F14 = 0;
  }
  v5 = *(_DWORD **)(this + 2592);
  if ( v5 )
  {
    if ( *v5 )
    {
      sub_1042B1A0(*v5);
      *v5 = 0;
    }
    result = sub_10184660(v5);
    *(_DWORD *)(this + 2592) = 0;
  }
  return result;
}
