char __thiscall sub_103F6E40(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this[300] > 0 )
    return sub_102B2150((int)this);
  v2 = *this;
  v3 = (*(int (__thiscall **)(int *))(*this + 1212))(this);
  v4 = (*(int (__thiscall **)(int *, int, int))(*this + 1208))(this, 471, v3);
  v5 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1204))(this, 0, v4);
  return (*(int (__thiscall **)(int *, int))(v2 + 984))(this, v5);
}
