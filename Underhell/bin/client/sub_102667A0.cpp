int __thiscall sub_102667A0(int *this, int a2)
{
  int result; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[73] && a2 <= this[79] )
  {
    v4 = this[72];
    if ( *(_DWORD *)(v4 + 12 * a2 + 4) != a2 || *(_DWORD *)(v4 + 12 * a2 + 8) == a2 )
    {
      this[102] = a2;
      sub_100C2010(this + 97, this[100], &a2);
      v5 = (_DWORD *)sub_10229D00(32);
      if ( v5 )
        v6 = sub_10229D20(v5, (int)"ItemSelected");
      else
        v6 = 0;
      (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v6);
      return (*(int (__thiscall **)(int *))(*this + 16))(this);
    }
  }
  return result;
}
