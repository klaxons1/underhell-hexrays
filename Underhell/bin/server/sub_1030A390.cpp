char __thiscall sub_1030A390(int this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  float v8; // [esp+14h] [ebp-10h]

  if ( !sub_102654D0(a2, a3) || !sub_10265430(a3, a2, *(_DWORD *)(this + 4)) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
    if ( v4 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 68))(v4, *(_DWORD *)(this + 8), a3) )
        return 0;
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
              dword_106B3CDC,
              *(_DWORD *)(this + 8),
              *(_DWORD *)(v4 + 420)) )
        return 0;
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4) && *(_BYTE *)(v4 + 306) == 6 )
      {
        v5 = *(_DWORD *)(v4 + 424);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5) )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 116))(v5) < *(float *)(this + 12) )
            return 0;
        }
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) == 4 )
      {
        v6 = sub_10265000(*(_DWORD *)(this + 4));
        v8 = (float)*(int *)(v4 + 220);
        sub_10370AF0(v6, v4, v8);
        return 0;
      }
    }
  }
  return 1;
}
