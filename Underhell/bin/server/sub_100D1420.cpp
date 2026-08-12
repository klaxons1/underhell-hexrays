char __thiscall sub_100D1420(int *this)
{
  int v1; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v3 = *this;
  v4 = (*(int (__thiscall **)(int *))(*this + 1212))(this);
  v5 = (*(int (__thiscall **)(int *, int))(*this + 1084))(this, v4);
  v6 = (*(int (__thiscall **)(int *, int))(*this + 1208))(this, v5);
  v7 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1204))(this, 0, v6);
  LOBYTE(v3) = (*(int (__thiscall **)(int *, int))(v3 + 984))(this, v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  return v3;
}
