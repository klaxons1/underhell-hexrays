void __thiscall sub_10233EF0(int this)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  if ( *(_DWORD *)(this + 4) )
  {
    *(_DWORD *)(this + 4) = 0;
  }
  else
  {
    v1 = this + 12;
    if ( *(_BYTE *)(this + 200) )
    {
      v2 = *(_DWORD *)(this + 196);
      v3 = sub_10016D90(v2, *(_DWORD *)(this + 432));
      sub_10016B00((_DWORD *)(v1 + 192), v2, v3);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v1 + 180) + 80))(
      *(_DWORD *)(v1 + 180),
      *(_DWORD *)(v1 + 420),
      *(_DWORD *)(v1 + 216),
      v1);
    *(_DWORD *)(v1 + 208) = 0;
    *(_DWORD *)(v1 + 212) = 0;
    *(_DWORD *)(v1 + 416) = 0;
    *(_DWORD *)(v1 + 408) = 0;
    *(_DWORD *)(v1 + 320) = -1;
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v1 + 180) + 48))(*(_DWORD *)(v1 + 180), -1, 0);
    *(_DWORD *)(v1 + 180) = 0;
  }
}
