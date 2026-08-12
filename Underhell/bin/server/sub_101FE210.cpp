int __thiscall sub_101FE210(int *this)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // eax

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
  }
  else
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0);
    if ( (_BYTE)result )
      return result;
    result = sub_1025FC50();
  }
  v3 = result;
  if ( result )
  {
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(result + 24),
      "developer 0");
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v3 + 24),
      "cl_drawhud 0");
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v3 + 24),
      "sv_cheats 1");
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v3 + 24),
      "god");
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v3 + 24),
      "notarget");
    sub_101129A0((unsigned __int16 *)(v3 + 320), *(_WORD *)(v3 + 356) | 4);
    sub_101E3190((int *)v3, 0);
    sub_101E7640((_DWORD *)v3, (int)this);
    sub_100F8040(v3, (int)this, this[201], 0.0, 0);
    if ( sub_100CF460((_DWORD *)v3) )
    {
      v4 = (_DWORD *)sub_100CF460((_DWORD *)v3);
      sub_100EAB80(v4, 32);
    }
    sub_100D8500(this);
    sub_100EC3F0(this, (int)sub_101FE170, 0.0, 0);
    return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
