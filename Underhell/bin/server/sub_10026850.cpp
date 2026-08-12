char *__thiscall sub_10026850(char *this)
{
  int v2; // eax
  char v3; // cl
  char *v4; // eax
  int v5; // eax
  char v6; // cl
  char *v7; // eax
  int v8; // eax
  char v9; // cl
  char *v10; // eax
  char *result; // eax
  char v12; // cl

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
  v2 = sub_1007DB30(17);
  if ( v2 != -1 )
  {
    v3 = v2;
    if ( v2 != 999999999 )
    {
      v4 = &this[4 * ((v2 - 1000000000) >> 5) + 2192];
      *(_DWORD *)v4 &= ~(1 << (v3 & 0x1F));
    }
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
  v5 = sub_1007DB30(18);
  if ( v5 != -1 )
  {
    v6 = v5;
    if ( v5 != 999999999 )
    {
      v7 = &this[4 * ((v5 - 1000000000) >> 5) + 2192];
      *(_DWORD *)v7 &= ~(1 << (v6 & 0x1F));
    }
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
  v8 = sub_1007DB30(19);
  if ( v8 != -1 )
  {
    v9 = v8;
    if ( v8 != 999999999 )
    {
      v10 = &this[4 * ((v8 - 1000000000) >> 5) + 2192];
      *(_DWORD *)v10 &= ~(1 << (v9 & 0x1F));
    }
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
  result = (char *)sub_1007DB30(67);
  if ( result != (char *)-1 )
  {
    v12 = (char)result;
    if ( result != (char *)999999999 )
    {
      result = &this[4 * ((int)(result - 1000000000) >> 5) + 2192];
      *(_DWORD *)result &= ~(1 << (v12 & 0x1F));
    }
  }
  return result;
}
