void __thiscall sub_1029D8C0(_DWORD *this, void *a2)
{
  char *v3; // eax
  _DWORD *v4; // esi
  const char *v5; // eax
  char *v6; // ecx
  _DWORD *v7; // eax

  if ( sub_1029D720(a2, (int *)&a2) )
  {
    v3 = (char *)this[53];
    if ( !v3 )
      v3 = (char *)String;
    v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
    if ( v4 )
    {
      v6 = (char *)this[239];
      v7 = 0;
      if ( v6 )
        v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
      (*(void (__thiscall **)(void *, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)a2 + 280))(a2, this, v4, v7);
    }
    else
    {
      v5 = sub_100D6390(this);
      DevMsg("ai_goal_operator called %s with invalid position ent!\n", v5);
    }
  }
}
