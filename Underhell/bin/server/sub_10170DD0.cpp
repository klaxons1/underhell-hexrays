char *__cdecl sub_10170DD0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  char *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = (char *)sub_100D6340(812);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 1);
    *(_DWORD *)v3 = &CInfoCameraLink::`vftable';
    *((_DWORD *)v3 + 200) = -1;
    *((_DWORD *)v3 + 201) = -1;
    v5 = v3;
    sub_10170D30(&dword_10629750, &v5);
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
