wchar_t *__thiscall sub_101AC9A0(_DWORD *this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx

  this[14] = -1;
  this[15] = -1;
  this[16] = 0;
  v2 = (wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                    dword_1047CA78,
                    "#Valve_Hud_AMMO");
  v3 = (wchar_t *)(this - 95);
  if ( v2 )
    return sub_100D0E50(v3, v2);
  else
    return sub_100D0E50(v3, (wchar_t *)L"AMMO");
}
