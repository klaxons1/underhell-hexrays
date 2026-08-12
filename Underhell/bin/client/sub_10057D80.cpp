int __thiscall sub_10057D80(char *this)
{
  char *v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  char *v5; // ecx
  int v6; // edi
  float v8; // [esp+Ch] [ebp-18h]
  _DWORD v9[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this - 12;
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this - 3) + 36))((_DWORD *)this - 3);
  v9[0] = *v3;
  v9[1] = v3[1];
  v9[2] = v3[2];
  v4 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_1041315C + 124))(dword_1041315C, v9, v9);
  v5 = this + 1204;
  if ( v4 )
    sub_100B0E30(v5);
  else
    sub_100AF950(v5);
  v6 = *(_DWORD *)v2;
  v8 = RandomFloat(1.0, 3.0) + *((float *)off_103DC81C + 3);
  return (*(int (__thiscall **)(char *, _DWORD))(v6 + 408))(v2, LODWORD(v8));
}
