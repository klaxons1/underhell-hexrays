int __thiscall sub_101E5490(int this, int a2, int a3, float a4)
{
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  double v8; // st7
  int v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  LOBYTE(v10) = *(_BYTE *)(this + 256) & 1;
  v5 = sub_101C5260((_DWORD *)this);
  if ( !v5
    || *(_BYTE *)(v5 + 306) != 6
    || (v6 = *(_DWORD *)(v5 + 424)) == 0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6)
    || (v7 = *(_DWORD *)(this + 424),
        v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6),
        v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 116))(v7),
        v8 + v8 >= v11) )
  {
    v6 = 0;
  }
  return (*(int (__stdcall **)(int, int, _DWORD, int, int))(**(_DWORD **)(this + 3588) + 4))(
           a2,
           a3,
           LODWORD(a4),
           v10,
           v6);
}
