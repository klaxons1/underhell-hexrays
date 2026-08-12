char __thiscall sub_100EAEF0(int this, int a2, int a3)
{
  _DWORD *v4; // edi
  int v5; // esi
  int v6; // esi
  __int16 v7; // ax

  if ( *(_DWORD *)(this + 24)
    && (!(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2)
      ? (v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2))
      : (v4 = 0),
        (v5 = **(_DWORD **)(this + 12),
         !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, v5))
      ? (v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5))
      : (v6 = 0),
        v4
     && v6
     && sub_10019B00(v4) == v6
     && (v7 = *(_WORD *)(v6 + 356), (v7 & 4) != 0)
     && (v7 & 2) != 0
     && (*(_BYTE *)(v6 + 356) & 1) != 0) )
  {
    return 0;
  }
  else
  {
    return sub_10265CD0(a2, a3);
  }
}
