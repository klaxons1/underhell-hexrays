int __thiscall sub_1024D960(_BYTE *this)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 128))(this)
    && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 932))(this)
    || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 5) )
  {
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 872))(this);
  }
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**(int (__thiscall ***)(_BYTE *))this)(this);
  (*(void (__thiscall **)(int, int))(v4 + 84))(v3, v5);
  v6 = dword_1047CA6C;
  v7 = *(_DWORD *)dword_1047CA6C;
  v8 = (**(int (__thiscall ***)(_BYTE *, int))this)(this, 1);
  (*(void (__thiscall **)(int, int))(v7 + 168))(v6, v8);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 124))(this, 1);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 200))(this, 1);
  if ( this[359] )
  {
    this[359] = 0;
    this[358] = 0;
  }
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 936))(this);
}
