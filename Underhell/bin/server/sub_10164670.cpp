int __thiscall sub_10164670(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // [esp-4h] [ebp-10h]

  result = sub_10037820((int)this, a2);
  v4 = result;
  if ( result )
  {
    v7 = (*(int (__thiscall **)(_DWORD *))(*this + 1384))(this);
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1380))(this);
    v6 = sub_1004B890(a2, v5, v7);
    if ( v6 == -1 )
      this[906] = 0;
    else
      this[906] = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 1380))(this) + 4 * v6);
    return v4;
  }
  return result;
}
