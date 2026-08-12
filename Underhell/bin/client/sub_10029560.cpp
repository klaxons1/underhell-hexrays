void __thiscall sub_10029560(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  bool v4; // bl
  _DWORD *v5; // eax
  int v6; // [esp+4h] [ebp-4h]

  if ( *((_BYTE *)this + 1760) && this[326] != -1 )
  {
    v2 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    v3 = dword_104037A0 + 8 * this[326];
    *(_DWORD *)(v3 + 4) = (*(int (__thiscall **)(_DWORD *))(*this + 692))(this);
    v4 = (this[28] & 8) != 0;
    v6 = this[452];
    if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
      sub_10026520((int)this);
    v5 = (_DWORD *)this[485];
    if ( !v5 || !*v5 )
      v5 = 0;
    sub_1011CAB0(v5, v6, this[441] != this[443], !v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  }
}
