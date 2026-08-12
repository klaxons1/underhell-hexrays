void __thiscall sub_1005BDC0(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax

  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  if ( sub_10023D10(*(_DWORD **)(this + 4), 21) )
  {
    v2 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
    v4 = v3;
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    if ( *(float *)(v2 + 588) - *(float *)(v4 + 588) >= 36.0 )
    {
      if ( (unsigned __int8)sub_100B8CF0(*(_DWORD *)(this + 4) + 2760) )
      {
        v5 = sub_10039AE0(*(_DWORD **)(this + 4), 137, 0);
        sub_100C74B0(v5, 1);
        v6 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 936))(*(_DWORD *)(this + 4), 17, 0);
        sub_100C8CD0(v6, 0.0);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1896))(*(_DWORD *)(this + 4));
      }
    }
  }
}
