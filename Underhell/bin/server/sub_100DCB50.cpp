void __thiscall sub_100DCB50(void *this, int a2)
{
  int v3; // edi
  bool v4; // al
  bool v5; // zf
  int v6; // edi
  int v7; // eax
  const char *v8; // eax
  const char *v9; // esi
  int v10; // eax
  _BYTE v11[4]; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-8h]
  bool v13; // [esp+12h] [ebp-2h]
  char v14; // [esp+13h] [ebp-1h]

  v3 = *((_DWORD *)this + 6);
  v12 = v3;
  if ( !v3 || !(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3) )
    return;
  v4 = (*((_BYTE *)this + 356) & 8) != 0;
  v5 = *((_BYTE *)this + 361) == 0;
  v13 = v4;
  if ( v5 || (*((_BYTE *)this + 356) & 4) != 0 || v4 )
  {
    v14 = 0;
    if ( !v4 )
      return;
  }
  else
  {
    v14 = 1;
  }
  if ( (*(int (__thiscall **)(int))(*((_DWORD *)this + 80) + 44))((int)this + 320) == 1 )
  {
    v6 = *(_DWORD *)dword_106B31F0;
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 24))(this);
    if ( !(*(int (__thiscall **)(int, int))(v6 + 4))(dword_106B31F0, v7) )
    {
      v8 = *(const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v11);
      if ( !v8 )
        v8 = String;
      if ( !strlen(v8) )
      {
        v9 = (const char *)*((_DWORD *)this + 23);
        if ( !v9 )
          v9 = String;
        Warning("Inserted %s with no model\n", v9);
        return;
      }
    }
    v3 = v12;
  }
  v10 = *((_DWORD *)this + 63);
  ++*((_DWORD *)this + 35);
  if ( (v10 & 0x1000000) == 0 )
  {
    *((_DWORD *)this + 63) = v10 | 0x1000000;
    sub_1012DAC0(this);
  }
  if ( v14 )
    (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 296))(
      dword_106B31D0,
      v3,
      (int)this + 320,
      a2,
      (unsigned __int8)byte_1060F308);
  if ( v13 )
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 300))(
      dword_106B31D0,
      v3,
      (unsigned __int8)byte_1060F308);
}
