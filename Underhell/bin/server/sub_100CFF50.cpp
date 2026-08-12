int __thiscall sub_100CFF50(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  const char *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  const char *v10; // edi
  float v11; // [esp+Ch] [ebp-1Ch]
  int v12; // [esp+10h] [ebp-18h]
  char v13[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = this[103];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (const char *)this[23];
  if ( !v5 )
    v5 = String;
  v12 = v4;
  v6 = (*(int (__thiscall **)(int, char *, _DWORD *))(*(_DWORD *)dword_106B3CDC + 336))(dword_106B3CDC, v13, this);
  v7 = sub_100E3960(v5, v6, this + 182, v12);
  v8 = v7;
  if ( v7 )
  {
    sub_100EAB80(v7, 32);
    *(_DWORD *)(v8 + 196) = 0;
    sub_100EC3F0((int)sub_100CFBD0, 0.0, 0);
    sub_102615C0(this, 33570827, 0);
    v11 = ((double (__thiscall *)(int, _DWORD *))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 328))(dword_106B3CDC, this)
        + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0(v11, 0);
    return v8;
  }
  else
  {
    v10 = (const char *)this[23];
    if ( !v10 )
      v10 = String;
    Warning("Respawn failed to create %s!\n", v10);
    return 0;
  }
}
