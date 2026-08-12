int __thiscall sub_1009C260(_DWORD *this, int a2)
{
  int v3; // ecx
  double v4; // st7
  int result; // eax
  float v6; // [esp+0h] [ebp-8h]

  v3 = this[2];
  if ( v3 )
  {
    v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 108))(v3);
    v6 = (1.0 - (1.0 - v4) * (1.0 - v4) * ((1.0 - v4) * (1.0 - v4))) * 0.25;
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this[2] + 12))(LODWORD(v6));
  }
  return result;
}
