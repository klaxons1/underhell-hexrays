int __userpurge sub_1016FCC0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // esi
  int result; // eax
  int v6; // eax
  int v7; // eax

  v4 = a1 - 12;
  result = sub_1016F900((_DWORD *)(a1 - 12), -1);
  if ( a3 )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 12))(a3, a2);
    v7 = sub_1025FB50(v6 + 1);
    *(_DWORD *)(a1 + 36) = v7;
    if ( v7 && *(_BYTE *)(v7 + 3280) )
    {
      *(_DWORD *)(a1 + 4) = a3;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = 0;
      Error("Couldn't find HLTV client player.");
    }
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31F8 + 12))(dword_106B31F8, v4, "player_hurt");
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
      dword_106B31F8,
      v4,
      "player_death",
      1);
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
      dword_106B31F8,
      v4,
      "round_end",
      1);
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
      dword_106B31F8,
      v4,
      "round_start",
      1);
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
      dword_106B31F8,
      v4,
      "hltv_cameraman",
      1);
    *(_BYTE *)(v4 + 4) = 1;
    (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
      dword_106B31F8,
      v4,
      "hltv_rank_entity",
      1);
    *(_BYTE *)(v4 + 4) = 1;
    return (*(int (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
             dword_106B31F8,
             v4,
             "hltv_rank_camera",
             1);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}
