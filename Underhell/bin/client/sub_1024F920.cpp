int __thiscall sub_1024F920(_DWORD **this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int (__thiscall *v4)(_DWORD **); // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  bool v9; // zf
  float v10; // [esp+Ch] [ebp-18h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68);
  if ( v2 == ((int (__thiscall *)(_DWORD **))**this)(this) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 80))(dword_1047CA68);
    if ( this[101] )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1047CA68 + 76))(dword_1047CA68, this[101]);
      this[101] = 0;
    }
  }
  sub_1024BB90(this);
  if ( 0.0 == *((float *)this + 91) )
  {
    ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[31])(this, 0);
    v9 = *((_BYTE *)this + 360) == 0;
    *((_BYTE *)this + 358) = 0;
    *((_BYTE *)this + 359) = 0;
    if ( !v9 )
      ((void (__thiscall *)(_DWORD **))(*this)[75])(this);
    return ((int (__thiscall *)(_DWORD **))(*this)[248])(this);
  }
  else
  {
    v10 = *((float *)this + 91);
    v3 = (_DWORD *)sub_10248A20();
    sub_10247080(v3, (int (__thiscall ***)(_DWORD))this, "alpha", 0.0, 0.0, v10, 0, 0.0);
    v4 = (int (__thiscall *)(_DWORD **))**this;
    *((_BYTE *)this + 359) = 1;
    v5 = dword_1047CA6C;
    v6 = *(_DWORD *)dword_1047CA6C;
    v7 = v4(this);
    return (*(int (__thiscall **)(int, int))(v6 + 332))(v5, v7);
  }
}
