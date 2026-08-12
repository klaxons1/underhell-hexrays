int __cdecl sub_1040F170(const char *a1, int a2, float *a3, float *a4, int a5)
{
  int v5; // eax
  int v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // eax

  v5 = sub_101811E0("grenade_homer", -1);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 24) )
    {
      *(_DWORD *)(v5 + 2156) = a2;
      v8 = a5;
      if ( (a5 || (v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
        && (v9 = *(_DWORD *)(v8 + 12)) != 0 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
      }
      else
      {
        v10 = 0;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, v10);
      sub_100E10C0(v6, a3);
      sub_100E11A0(v6, a4);
      v11 = a1;
      if ( !a1 )
        v11 = String;
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 104))(v6, v11);
    }
    return v6;
  }
  else
  {
    Warning("NULL Ent in Create!\n");
    return 0;
  }
}
