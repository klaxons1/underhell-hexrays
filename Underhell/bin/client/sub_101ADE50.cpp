int __thiscall sub_101ADE50(int this)
{
  wchar_t *v2; // eax

  v2 = (wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                    dword_1047CA78,
                    "#Valve_Hud_SUIT");
  sub_100D0E50((wchar_t *)this, v2);
  return sub_100D0E20((_DWORD *)this, *(_DWORD *)(this + 428));
}
