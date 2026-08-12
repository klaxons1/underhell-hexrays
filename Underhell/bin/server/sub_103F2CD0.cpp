void __thiscall sub_103F2CD0(_BYTE *this, _DWORD *a2)
{
  int v3; // edi
  int (__thiscall *v4)(_BYTE *); // eax
  char v5; // bl
  int v6; // eax

  if ( !this[2113]
    && (*a2 && (v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 288))(*a2)) != 0 || (v3 = sub_1025FB50(1)) != 0) )
  {
    v4 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 340);
    v5 = this[2112];
    this[2112] = 0;
    v6 = v4(this);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 68))(v6, v3, 1);
    this[2112] = v5;
  }
}
