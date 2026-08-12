int __thiscall sub_10349070(float *this, int a2)
{
  void (__noreturn ***v3)(); // edi
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // eax
  float v9; // [esp+18h] [ebp-14h]
  float v10; // [esp+18h] [ebp-14h]
  float v11; // [esp+18h] [ebp-14h]
  float v12; // [esp+28h] [ebp-4h]

  v3 = sub_1023DBA0();
  v4 = *((_DWORD *)this + 945);
  v5 = this[991] * 0.8 + 0.2;
  v12 = v5;
  if ( v4 )
  {
    v9 = v5 + (double)a2;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[11])(v3, v4, LODWORD(v9), 0.1);
    v5 = v12;
  }
  v6 = *((_DWORD *)this + 1041);
  if ( v6 )
  {
    v10 = v5 + (double)a2;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[11])(v3, v6, LODWORD(v10), 0.1);
    v5 = v12;
  }
  v7 = *((_DWORD *)this + 1039);
  if ( v7 )
  {
    v11 = v5 + (double)a2;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[11])(v3, v7, LODWORD(v11), 0.1);
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 2340))(this);
}
