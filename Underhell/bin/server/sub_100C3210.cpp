char __thiscall sub_100C3210(float *this, int a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  _DWORD v16[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( (_BYTE)a4 && ((_DWORD)this[64] & 0x2000) == 0 || ((_DWORD)this[64] & 0x10000000) != 0 )
    return 0;
  HIBYTE(a4) = 0;
  v11 = sub_1012A440((int)this, a2, a3, a5, (int)&a4 + 3);
  v12 = v11;
  if ( v11 )
  {
    sub_100EBDE0(v11);
    sub_100EA940(0x10000000);
    v13 = a6;
    this[225] = a3;
    v16[0] = v13;
    v16[1] = a7;
    v16[2] = a8;
    sub_1014EFD0(v16);
    sub_100C1FC0(v12, a9);
  }
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 220))(this)
    && (*((char **)this + 23) == "prop_ragdoll" || (unsigned __int8)sub_100D6240("prop_ragdoll")) )
  {
    v14 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
            dword_106B31F8,
            "ragdoll_dissolved",
            0);
    if ( v14 )
    {
      v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v14 + 40))(v14, "entindex", v15);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v14, 0);
    }
  }
  return HIBYTE(a4);
}
