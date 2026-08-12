int __thiscall sub_10164B90(_DWORD *this, int a2, float *a3, int a4, char a5)
{
  int v6; // edi
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v6 = this[906];
  this[906] = 0;
  if ( v6 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6);
    sub_1004AF00(this);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2224))(this, v6, 0);
  }
  return sub_10042A00((int)&savedregs, a2, a3, a4, a5);
}
