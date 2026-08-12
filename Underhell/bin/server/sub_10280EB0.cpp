int __thiscall sub_10280EB0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  _BYTE *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  sub_100E10C0((int)this, &flt_106F1CA8);
  sub_100E11A0((int)this, &flt_106F1CB4);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 32))(this, 1);
  v2 = *(_DWORD *)dword_106B31F0;
  v3 = sub_100D7240(this);
  v4 = (_BYTE *)(*(int (__thiscall **)(int, int))(v2 + 12))(dword_106B31F0, v3);
  this[115] = *sub_10162BE0(&v8, v4);
  sub_100D8500(this);
  sub_100EA940(this, 0x1000000);
  sub_1010C0E0(dword_10614CA8);
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  v5 = *(char **)(dword_106B31C8 + 60);
  if ( !v5 )
    v5 = (char *)String;
  sub_10167E00("is_console", v5, 0);
  v6 = *(char **)(dword_106B31C8 + 60);
  if ( !v6 )
    v6 = (char *)String;
  return sub_10167E00("is_pc", v6, 1);
}
