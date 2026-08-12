int __thiscall sub_10146EB0(int this)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 164))(v2, 0);
  if ( (*(_BYTE *)(this + 132) & 3) != 0 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, *(_DWORD *)(this + 124));
    if ( flt_103E7EFC >= 0.0 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 608))(v2, &flt_103E7EFC);
      flt_103E7EFC = -1.0;
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
