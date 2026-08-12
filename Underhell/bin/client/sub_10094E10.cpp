int __thiscall sub_10094E10(_DWORD *this, float *a2, float *a3)
{
  int v4; // eax
  int result; // eax
  int v6; // edi
  int v7; // eax

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, this[9]);
  if ( v4 == 3 || v4 == 1 )
  {
    v6 = *(_DWORD *)dword_10413178;
    v7 = (*(int (__thiscall **)(_DWORD *, float *, float *))(*this + 36))(this, a2, a3);
    return (*(int (__thiscall **)(int, int))(v6 + 28))(dword_10413178, v7);
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    result = (int)a3;
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = 0.0;
  }
  return result;
}
