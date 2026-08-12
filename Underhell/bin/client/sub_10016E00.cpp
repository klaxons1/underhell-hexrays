int __thiscall sub_10016E00(int this, char a2, char a3)
{
  int v4; // edi
  int v5; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 188) )
  {
    v4 = *(_DWORD *)(this + 184);
    v5 = sub_10016D90(v4, *(_DWORD *)(this + 420));
    sub_10016B00((_DWORD *)(this + 192), v4, v5);
  }
  if ( a2 )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(this + 180) + 60))(
      *(_DWORD *)(this + 180),
      *(_DWORD *)(this + 420),
      *(_DWORD *)(this + 216),
      this);
  result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(this + 180) + 80))(
             *(_DWORD *)(this + 180),
             *(_DWORD *)(this + 420),
             *(_DWORD *)(this + 216),
             this);
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 416) = 0;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 320) = -1;
  if ( a3 )
    result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 180) + 48))(
               *(_DWORD *)(this + 180),
               -1,
               0);
  *(_DWORD *)(this + 180) = 0;
  return result;
}
