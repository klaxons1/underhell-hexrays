char __thiscall sub_100E3DA0(int this)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ebx
  unsigned __int16 v9; // di
  unsigned __int16 v11; // [esp+4h] [ebp-8h]
  unsigned __int16 v12; // [esp+8h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  LOBYTE(v3) = -1;
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v12 = v4;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v5 = v4;
        v11 = v4;
        if ( v4 < v3 && v4 <= v2 )
        {
          LOBYTE(v3) = sub_100DB890((_DWORD *)this, v12) != (__int16)v4;
          if ( (_BYTE)v3 )
          {
            v6 = *(_DWORD *)(this + 4);
            v7 = 24 * v4;
            v8 = (_DWORD *)(v6 + v7 + 8);
            if ( *(int *)(v6 + v7 + 16) >= 0 )
            {
              if ( *v8 )
              {
                (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v8);
                *v8 = 0;
              }
              v8[1] = 0;
            }
            LOBYTE(v3) = v12;
            *(_WORD *)(*(_DWORD *)(this + 4) + v7 + 2) = *(_WORD *)(this + 20);
            *(_WORD *)(v7 + *(_DWORD *)(this + 4)) = v12;
            v5 = v11;
            *(_WORD *)(this + 20) = v12;
            v4 = v12;
          }
        }
        v2 = *(_WORD *)(this + 22);
        if ( v4 == v2 )
          break;
        v3 = *(_DWORD *)(this + 8);
        v9 = (unsigned __int16)(v12 + 1) >= v3 ? -1 : v5 + 1;
        v12 = v9;
        if ( v9 == 0xFFFF )
          break;
        v4 = v9;
      }
    }
    *(_DWORD *)(this + 16) = 0xFFFF;
  }
  return v3;
}
