int __thiscall sub_1024D820(_BYTE *this)
{
  int v2; // edi
  int v3; // ebp
  int v4; // eax

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 212))(this);
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 124))(this, 1);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 200))(this, 1);
  if ( this[359] )
  {
    this[359] = 0;
    this[358] = 0;
  }
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (**(int (__thiscall ***)(_BYTE *, _DWORD))this)(this, 0);
  return (*(int (__thiscall **)(int, int))(v3 + 168))(v2, v4);
}
