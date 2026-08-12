int __thiscall sub_100F51B0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // eax

  ++this[44];
  if ( a4 == a5
    && ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 76))(a2) & 8) != 0
    && (v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 164))(a4)) != 0
    && *(_DWORD *)(v7 + 1192)
    && (v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 1192) + 32))(*(_DWORD *)(v7 + 1192))) != 0 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 24))(v8, a2, a3);
    --this[44];
    return 0;
  }
  else
  {
    --this[44];
    return 1;
  }
}
