int __thiscall sub_1025A7B0(int *this, __int16 *a2)
{
  __int16 *i; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int *v7; // esi
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  _WORD *v11; // eax
  int v12; // edx
  int (__thiscall *v13)(int *); // eax
  __int16 v15; // [esp+Ch] [ebp+4h]

  for ( i = a2; *i; ++i )
  {
    v15 = *i;
    if ( *i != 13 )
    {
      v4 = this[79];
      if ( v4 > 0 && this[59] > v4 )
        sub_1025A630((int)this);
      v5 = this[59];
      v6 = this[57];
      v7 = this + 56;
      if ( v5 + 1 > v6 )
        sub_102532C0(this + 56, v5 - v6 + 1);
      ++this[59];
      v8 = *v7;
      v9 = this[59] - v5 - 1;
      v10 = this[59] - v5 == 1;
      this[60] = this[56];
      if ( v9 >= 0 && !v10 )
        memcpy((void *)(v8 + 2 * v5 + 2), (const void *)(v8 + 2 * v5), 2 * v9);
      v11 = (_WORD *)(*v7 + 2 * v5);
      if ( v11 )
        *v11 = v15;
      v12 = *this;
      this[72] = this[64] - 2;
      (*(void (__thiscall **)(int *))(v12 + 16))(this);
    }
  }
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  v13 = *(int (__thiscall **)(int *))(*this + 16);
  *((_BYTE *)this + 284) = 1;
  return v13(this);
}
