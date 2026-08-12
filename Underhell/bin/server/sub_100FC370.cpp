int __thiscall sub_100FC370(int this)
{
  int v2; // edx
  const char *v3; // eax
  int v4; // edx
  int v5; // ecx
  _BYTE v7[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100E11A0(this, &flt_106F1CB4);
  sub_100E0970(this, v2, 7, 0);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v7);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v3);
  sub_100EA940((int *)this, 0x1000000);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v5 = *(_DWORD *)(this + 424);
    if ( v5 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 0);
    sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
    sub_100EAB80((_DWORD *)this, 32);
  }
  return sub_100E0970(this, v4, 7, 0);
}
