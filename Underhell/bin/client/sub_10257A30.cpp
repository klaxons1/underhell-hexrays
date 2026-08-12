void __thiscall sub_10257A30(int *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 == 107 )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
    {
      v4 = sub_1022B1A0(v3, (int)"ClickPanel", "index", this[52]);
      (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v4);
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD))(*this + 180))(this, 0);
    }
  }
}
