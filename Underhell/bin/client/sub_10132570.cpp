void __thiscall sub_10132570(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx

  if ( (_BYTE)a2 && !this[1] )
  {
    v3 = (_DWORD *)sub_100DDA40(264);
    if ( v3 )
      v4 = sub_101323F0(v3, this[3]);
    else
      v4 = 0;
    sub_10236050(v4);
    this[1] = v4;
  }
  v5 = this[1];
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 124))(v5, a2);
}
