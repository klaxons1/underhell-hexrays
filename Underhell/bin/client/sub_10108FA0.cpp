void __thiscall sub_10108FA0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  void (__thiscall *v6)(_DWORD *, int, int, int, int); // edx
  _BYTE v7[60]; // [esp+Ch] [ebp-40h] BYREF
  int v8; // [esp+48h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CPrediction::Update", 0, "Prediction", 0, 4);
  LOBYTE(v8) = 1;
  if ( this[3] == a2 && *(_DWORD *)(dword_10436C0C + 48) )
    LOBYTE(v8) = (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) == 0;
  v6 = *(void (__thiscall **)(_DWORD *, int, int, int, int))(*this + 84);
  this[3] = a2;
  qmemcpy(v7, off_103DC81C, sizeof(v7));
  v6(this, v8, a3, a4, a5);
  qmemcpy(off_103DC81C, v7, 0x3Cu);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
