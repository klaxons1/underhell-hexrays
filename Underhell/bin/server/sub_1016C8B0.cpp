int __thiscall sub_1016C8B0(_DWORD *this)
{
  int v2; // eax

  v2 = this[6] + (int)(6.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( this[13] < v2 )
    v2 = this[13];
  this[13] = v2;
  if ( RandomFloat(0.0, 1.0) < 0.25 && *(_DWORD *)(dword_106B5744 + 48) )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 24))(this, 0);
  else
    return (*(int (__thiscall **)(_DWORD *))(*this + 28))(this);
}
