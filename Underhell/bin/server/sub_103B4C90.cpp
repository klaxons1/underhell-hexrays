void __thiscall sub_103B4C90(_BYTE *this, int a2, int *a3, float a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // [esp+5Ch] [ebp+Ch]

  if ( a3 || (dword_1069042C & 1) != 0 )
  {
    v8 = *a3;
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 24))(a2, 0);
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 24))(a2, v6);
    (*(void (__thiscall **)(int *, const char *, int))(v8 + 148))(a3, "InputTargeted", v7);
    this[4] = 1;
    if ( a4 <= 0.0 )
      a4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             4.0,
             8.0);
    sub_103B1780((int)this, a2, (int)a3, 1);
    sub_103B13F0((int)this, a2, (int)a3, a4);
  }
}
