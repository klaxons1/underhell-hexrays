int __thiscall sub_1004CCB0(float *this)
{
  int v2; // ecx
  _BYTE *v3; // edx
  double v4; // st7
  int v5; // edi
  int result; // eax
  int (__thiscall *v7)(float *, _DWORD); // eax
  int v8; // [esp+4h] [ebp-8h]

  v2 = *((_DWORD *)this + 950);
  if ( v2 == 10 || (v3 = (char *)this + 255 * v2 + 1192, (float *)((char *)this + 255 * v2) == (float *)-1192) || !*v3 )
  {
    v7 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 408);
    this[946] = 0.0;
    result = v7(this, -1.0);
    if ( *((_BYTE *)this + 3793) && !*((_BYTE *)this + 3792) )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, 0);
  }
  else
  {
    v4 = -1.0;
    if ( -1.0 != this[v2 + 936] )
      v4 = *((float *)off_103DC81C + 3) + this[v2 + 936];
    this[951] = v4;
    v5 = (*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           v3,
           "ClientEffect textures",
           0);
    if ( v5 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 168))(v5) )
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, v5, 0);
    Warning("env_screenoverlay couldn't find overlay %s.\n", (const char *)this + 255 * *((_DWORD *)this + 950) + 1192);
    result = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 408))(-1.0, v8);
    if ( *((_BYTE *)this + 3793) && !*((_BYTE *)this + 3792) )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, 0);
  }
  return result;
}
