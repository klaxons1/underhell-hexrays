void __cdecl sub_101B6250(int *a1)
{
  double v1; // st7
  const char *v2; // eax
  float v3; // [esp+4h] [ebp-4h]

  if ( dword_106BAFF4 )
  {
    if ( *a1 >= 2 )
    {
      v2 = String;
      if ( *a1 > 1 )
        v2 = (const char *)a1[259];
      v3 = atof(v2);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 20))(dword_106BAFF4, LODWORD(v3));
    }
    else
    {
      v1 = ((double (*)(void))*(_DWORD *)(*(_DWORD *)dword_106BAFF4 + 24))();
      Msg("air_density <value>\nCurrent air density is %.2f\n", v1);
    }
  }
}
