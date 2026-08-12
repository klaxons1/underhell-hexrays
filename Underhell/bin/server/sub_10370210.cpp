char __thiscall sub_10370210(int this)
{
  int v2; // ebx
  int (__thiscall *v3)(int); // eax
  char result; // al

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/headcrabclassic.mdl");
  sub_1036DBD0(this);
  v2 = (int)*(float *)(dword_106E81AC + 44);
  if ( *(_DWORD *)(this + 220) != v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v2;
  }
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1164);
  *(float *)(this + 3660) = 0.0;
  *(_BYTE *)(this + 3653) = 0;
  *(_BYTE *)(this + 3657) = 0;
  result = v3(this);
  if ( *(_BYTE *)(this + 3654) )
  {
    sub_1036DD60(this, 1);
    result = sub_100457E0((_DWORD *)this, 102);
  }
  if ( (*(_DWORD *)(this + 248) & 0x20000) != 0 )
  {
    result = sub_100457E0((_DWORD *)this, 107);
    *(float *)(this + 3676) = -1.0;
  }
  return result;
}
