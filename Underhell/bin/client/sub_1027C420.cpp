int __thiscall sub_1027C420(_DWORD *this)
{
  int v2; // ebp
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // esi
  void (__thiscall *v6)(int, _DWORD); // eax
  int v7; // esi
  int v8; // eax
  int v9; // edx
  int result; // eax

  v2 = this[61];
  if ( v2 != -1 )
  {
    v3 = this + 67;
    do
    {
      v4 = 12 * v2;
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this[58] + v4) + 124))(*(_DWORD *)(this[58] + v4), 0);
      v5 = *(_DWORD *)(this[58] + v4);
      v6 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 264);
      *(_BYTE *)(v5 + 352) = 0;
      *(_BYTE *)(v5 + 353) = 0;
      *(_DWORD *)(v5 + 296) = -1;
      v6(v5, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 868))(v5, -1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 852))(v5);
      v7 = sub_1027A4F0(this + 67, 0);
      sub_10265FF0(this + 67, v7);
      v8 = 12 * v7 + *v3;
      *(_DWORD *)(v8 + 8) = -1;
      v9 = this[71];
      *(_DWORD *)(v8 + 4) = v9;
      this[71] = v7;
      if ( v9 == -1 )
        this[70] = v7;
      else
        *(_DWORD *)(*v3 + 12 * v9 + 8) = v7;
      ++this[73];
      *(_DWORD *)(12 * v7 + *v3) = *(_DWORD *)(this[58] + v4);
      v2 = *(_DWORD *)(this[58] + v4 + 8);
    }
    while ( v2 != -1 );
  }
  sub_1026C690(this + 58);
  this[79] = 0;
  sub_102393F0(this + 52, 0);
  result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  *((_BYTE *)this + 353) = 1;
  return result;
}
