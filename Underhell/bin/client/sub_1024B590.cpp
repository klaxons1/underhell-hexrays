int __thiscall sub_1024B590(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int result; // eax
  int v7; // edi

  nullsub_5(a2);
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
  result = (*(int (__thiscall **)(int, int, int))(v4 + 216))(v3, a2, v5);
  v7 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 284))(result, this[53]);
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 172))(v7, this);
  }
  return result;
}
