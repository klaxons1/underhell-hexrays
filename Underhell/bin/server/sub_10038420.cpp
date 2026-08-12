char __thiscall sub_10038420(int *this, int a2, int a3, int a4)
{
  int v5; // edi
  int *v6; // ecx
  int v7; // edi
  int v8; // eax

  if ( a2 != dword_106E50B0 )
    return sub_100C7860(a2, a3, a4);
  (*(void (__thiscall **)(int *))(*this + 408))(this);
  (*(void (__thiscall **)(int *))(*this + 1640))(this);
  sub_100EC3F0(0, 0.0, 0);
  v5 = this[62] | 2;
  if ( this[62] != v5 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v6 = (int *)this[6];
      if ( v6 )
        sub_100194B0(v6, 248);
    }
    this[62] = v5;
  }
  if ( sub_100CF460(this) )
  {
    v7 = *this;
    v8 = sub_100CF460(this);
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(v7 + 960))(this, v8, 0, 0);
  }
  return 1;
}
