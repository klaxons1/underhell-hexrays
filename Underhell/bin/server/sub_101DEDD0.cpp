void __thiscall sub_101DEDD0(char *this)
{
  const char *v2; // eax
  int v3; // edx
  _BYTE *v4; // esi
  char v5[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100E0970((int)this, v3, 6, 0);
  sub_10112C00((int)(this + 320), 6);
  v4 = this + 225;
  if ( *v4 != 1 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 225) + 480))(v4 - 225, v4);
    *v4 = 1;
  }
}
