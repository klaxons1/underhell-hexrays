__int16 *__thiscall sub_1025B1F0(_BYTE *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  _BYTE *v4; // eax
  int v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  __int16 *result; // eax

  v2 = a2;
  sub_1024A020((int)this, a2);
  v4 = (_BYTE *)sub_1022B4C0(v2, "command", (int)Locale);
  if ( *v4 )
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 1032))(this, v4);
  if ( sub_1022A800(v2, "default", 0) && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 976))(this) )
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 980))(this, 1);
  v5 = sub_1022A800(v2, "selected", -1);
  if ( v5 != -1 )
  {
    LOBYTE(v5) = v5 != 0;
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 928))(this, v5);
    this[360] = 1;
  }
  v6 = (const char *)sub_1022B4C0(v2, "sound_armed", (int)Locale);
  if ( *v6 )
    *((_WORD *)this + 177) = *sub_10230F20(dword_1047F658, (__int16 *)&a2, v6);
  v7 = (const char *)sub_1022B4C0(v2, "sound_depressed", (int)Locale);
  if ( *v7 )
    *((_WORD *)this + 178) = *sub_10230F20(dword_1047F658, (__int16 *)&a2, v7);
  result = (__int16 *)sub_1022B4C0(v2, "sound_released", (int)Locale);
  if ( *(_BYTE *)result )
  {
    result = sub_10230F20(dword_1047F658, (__int16 *)&a2, (const char *)result);
    *((_WORD *)this + 179) = *result;
  }
  return result;
}
