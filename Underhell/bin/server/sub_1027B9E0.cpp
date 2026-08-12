int __thiscall sub_1027B9E0(int *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edx
  bool v5; // al
  bool v6; // zf
  int (__thiscall *v7)(int *, int, _DWORD); // eax
  float v8; // [esp+0h] [ebp-8h]

  result = sub_100D1940(this);
  if ( result )
  {
    v3 = sub_100D1940(this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
    if ( (_BYTE)result )
    {
      result = sub_100D1940(this);
      if ( (*(_DWORD *)(result + 3296) & 0x800) != 0 )
      {
        v4 = *this;
        v5 = *((_BYTE *)this + 1411) == 0;
        *((_BYTE *)this + 1411) = v5;
        v8 = 0.0;
        v6 = !v5;
        v7 = *(int (__thiscall **)(int *, int, _DWORD))(v4 + 1132);
        if ( v6 )
          return v7(this, 13, LODWORD(v8));
        else
          return v7(this, 12, LODWORD(v8));
      }
    }
  }
  return result;
}
