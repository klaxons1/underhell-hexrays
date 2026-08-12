_DWORD *__thiscall sub_100BC450(void *this)
{
  int v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  sub_1025AD90();
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  result = (_DWORD *)__RTDynamicCast(
                       v2,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                       (int)&CBaseHudChat `RTTI Type Descriptor',
                       0);
  v4 = result;
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)result[77] + 48))(result[77], 0);
    result = sub_100BBFF0(v4);
    if ( result )
    {
      v5 = sub_100BBFF0(v4);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 128))(v5) )
      {
        v6 = sub_100BBFF0(v4);
        return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 124))(v6, 0);
      }
      else
      {
        v7 = sub_100BBFF0(v4);
        (*(void (__thiscall **)(_DWORD *, int))(*v7 + 124))(v7, 1);
        sub_100BBFF0(v4);
        sub_10237000(1, 0);
        v8 = sub_100BBFF0(v4);
        return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 520))(v8, 1);
      }
    }
  }
  return result;
}
