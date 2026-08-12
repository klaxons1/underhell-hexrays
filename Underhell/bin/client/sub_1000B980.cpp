char __thiscall sub_1000B980(_DWORD *this, int a2)
{
  int v2; // ebx
  int v4; // eax
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // [esp-4h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+4h] [ebp-14h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = dword_1047CA8C;
  v12 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v4 = sub_10029CF0(a2);
  if ( v4 == -1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    return 0;
  }
  else
  {
    v9 = this[452];
    this[502] = a2;
    this[501] = v4;
    v6 = sub_10029BC0(v9, v4, 0);
    if ( a2 == 172 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 916))(this) || v6 == this[501] )
    {
      v10 = this[501];
      this[500] = this[502];
      sub_10029860(v10);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 856))(this, this[501]);
    }
    else
    {
      this[500] = 2;
      sub_10029860(v6);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 856))(this, v6);
    }
    v7 = this[452];
    if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
      sub_10026520(this);
    v8 = (_DWORD *)this[485];
    if ( !v8 || !*v8 )
      v8 = 0;
    v11 = sub_10025700(v8, v7) + *((float *)off_103DC81C + 3);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 868))(this, LODWORD(v11));
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
    return 1;
  }
}
