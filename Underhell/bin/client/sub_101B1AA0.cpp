int __thiscall sub_101B1AA0(wchar_t *this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx

  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 108) = 0;
  v2 = (wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                    dword_1047CA78,
                    "#Valve_Hud_HEALTH");
  v3 = this + 22;
  if ( v2 )
    sub_100D0E50(v3, v2);
  else
    sub_100D0E50(v3, (wchar_t *)L"HEALTH");
  return sub_100D0E20((_DWORD *)this + 11, *((_DWORD *)this + 107));
}
