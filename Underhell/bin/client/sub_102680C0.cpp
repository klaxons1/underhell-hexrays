void __thiscall sub_102680C0(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 == 107 || a2 == 108 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 832))(this);
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    if ( a2 == 108 )
    {
      v3 = (_DWORD *)sub_10229D00(32);
      if ( v3 )
      {
        v4 = sub_1022B1A0(v3, (int)"OpenContextMenu", "itemID", -1);
        (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 180))(this, v4);
      }
      else
      {
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 180))(this, 0);
      }
    }
  }
}
