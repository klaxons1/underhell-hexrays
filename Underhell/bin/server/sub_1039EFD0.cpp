char __thiscall sub_1039EFD0(unsigned __int16 *this)
{
  int v2; // eax
  int v3; // edi
  int v5; // eax
  int v6; // edx

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 592))(this);
  sub_101129A0(this + 160, this[178] & 0xFFFB);
  v2 = (*(int (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 80) + 48))(this + 160);
  v3 = sub_100E9550(this, 6, v2, 0, 0);
  if ( !v3 )
    return 0;
  v5 = (*(int (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this + 1868);
  *((_DWORD *)this + 942) = v5;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 8))(v5, v3, 1);
  sub_100E0970((int)this, v6, 6, 0);
  return 1;
}
