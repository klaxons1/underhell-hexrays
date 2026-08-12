int __thiscall sub_100C9E20(_DWORD *this, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD *v8; // eax
  int v9; // eax

  v5 = a2;
  if ( a2 <= 0 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, unsigned int))(*(_DWORD *)dword_106B3CDC + 368))(
          dword_106B3CDC,
          this,
          a3)
    || a3 > 0x1F )
  {
    return 0;
  }
  v8 = (_DWORD *)sub_102D9B20();
  v9 = sub_100BA1B0(v8, a3) - this[a3 + 445];
  if ( a2 >= v9 )
    v5 = v9;
  if ( v5 < 1 )
    return 0;
  if ( !(_BYTE)a4 )
    sub_1023C380(a5, 0.0, 0);
  a4 = v5 + this[a3 + 445];
  sub_100C8790(this + 445, a3, &a4);
  return v5;
}
