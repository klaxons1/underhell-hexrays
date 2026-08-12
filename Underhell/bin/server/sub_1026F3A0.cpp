void __thiscall sub_1026F3A0(_BYTE *this, int *a2)
{
  int v3; // edi
  char v4; // bl
  int (__thiscall *v5)(_BYTE *); // eax
  int v6; // eax

  if ( !this[2093]
    && ((v3 = *a2) != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(*a2)
     || *(int *)(dword_106B31C8 + 20) <= 1 && (v3 = sub_10261B20()) != 0) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 1476))(v3, 0);
    v4 = this[2092];
    v5 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 340);
    this[2092] = 0;
    v6 = v5(this);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 68))(v6, v3, 1);
    this[2092] = v4;
  }
}
