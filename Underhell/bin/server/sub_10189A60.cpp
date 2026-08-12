int __thiscall sub_10189A60(void *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-8h]
  char *Str1; // [esp+10h] [ebp-4h]

  v3 = 0;
  Str1 = "world";
  v11 = 0;
  if ( a3[10] != -1 )
  {
    if ( off_1061BE18[4 * (a3[10] & 0xFFF) + 2] == a3[10] >> 12 )
      v3 = off_1061BE18[4 * (a3[10] & 0xFFF) + 1];
    else
      v3 = 0;
  }
  if ( a3[11] == -1 || off_1061BE18[4 * (a3[11] & 0xFFF) + 2] != a3[11] >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (a3[11] & 0xFFF) + 1];
  v6 = (_DWORD *)(*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 508))(this, v5, v3, a2);
  if ( a3[17] )
  {
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 308))(this, a3);
    if ( v6 )
      v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, v6[6]);
    goto LABEL_22;
  }
  if ( !v6 )
    goto LABEL_17;
  v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, v6[6]);
  if ( v3 )
  {
    if ( (_DWORD *)v3 == v6 )
    {
      if ( sub_100CF460(v6) )
      {
        v7 = sub_100CF460(v6);
        Str1 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1172))(v7);
      }
      goto LABEL_19;
    }
LABEL_17:
    Str1 = *(char **)(v3 + 92);
    if ( !Str1 )
      Str1 = (char *)String;
  }
LABEL_19:
  if ( strncmp(Str1, "weapon_", 7u) && strncmp(Str1, "NPC_", 4u) )
    strncmp(Str1, "func_", 5u);
LABEL_22:
  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "player_death",
             0);
  v9 = result;
  if ( result )
  {
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "userid", v10);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "attacker", v11);
    (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 40))(v9, "customkill", a3[17]);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "priority", 7);
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v9, 0);
  }
  return result;
}
