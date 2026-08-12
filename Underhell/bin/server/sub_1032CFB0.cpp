void __thiscall sub_1032CFB0(int *this, _DWORD *a2)
{
  _BYTE *v3; // esi
  void (__thiscall *v4)(_BYTE *, _DWORD *); // edx
  char v5; // al

  if ( *a2 == 152 )
  {
    v5 = (*(int (__thiscall **)(int *))(*this + 732))(this);
  }
  else
  {
    if ( *a2 != 155 )
    {
      v3 = (_BYTE *)this[906];
      if ( !v3 || (v4 = *(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v3 + 112), v3[8] = 1, v4(v3, a2), !v3[8]) )
        sub_100497D0(this, a2);
      return;
    }
    v5 = sub_10022810((float *)this);
  }
  if ( v5 )
    sub_10027CD0(this, 0);
}
