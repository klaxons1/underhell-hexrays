char *__cdecl sub_101AE140(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(848);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *((_DWORD *)v3 + 200) = &IMotionEvent::`vftable';
    *((float *)v3 + 210) = 15.0;
    *(_DWORD *)v3 = &CKeepUpright::`vftable';
    *((_DWORD *)v3 + 200) = &CKeepUpright::`vftable';
    *((_DWORD *)v3 + 209) = -1;
    v3[845] = 0;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
