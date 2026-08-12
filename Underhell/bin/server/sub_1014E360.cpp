int __thiscall sub_1014E360(unsigned __int16 *this)
{
  const char *v2; // eax
  char v3; // cl
  char v4; // dl
  char v5; // al
  int v6; // ebx
  int *v8; // ecx
  int v9; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, int *))(*(_DWORD *)this + 28))(this, &v9);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_101129A0(this + 160, this[178] | 0x20);
  v3 = *((_BYTE *)this + 801);
  v4 = *((_BYTE *)this + 802);
  LOBYTE(v9) = *((_BYTE *)this + 800);
  v5 = *((_BYTE *)this + 840);
  BYTE1(v9) = v3;
  BYTE2(v9) = v4;
  HIBYTE(v9) = v5;
  v6 = v9;
  if ( *((_DWORD *)this + 200) != v9 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 200) = v6;
      return nullsub_4(this);
    }
    v8 = (int *)*((_DWORD *)this + 6);
    if ( v8 )
      sub_100194B0(v8, 800);
    *((_DWORD *)this + 200) = v6;
  }
  return nullsub_4(this);
}
