wchar_t *__thiscall sub_101ACEA0(char *this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx

  v2 = (wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                    dword_1047CA78,
                    "#Valve_Hud_AMMO_ALT");
  v3 = (wchar_t *)(this - 380);
  if ( v2 )
    return sub_100D0E50(v3, v2);
  else
    return sub_100D0E50(v3, (wchar_t *)L"ALT");
}
