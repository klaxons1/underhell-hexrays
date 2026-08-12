float *__cdecl sub_1014BCD0(float *a1, float *a2)
{
  int v2; // eax
  float *v3; // esi
  float *v5; // eax
  float v6[3]; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h] BYREF

  v2 = sub_101811E0("window_pane", -1);
  v3 = (float *)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 24) )
    {
      sub_100E10C0(v2, a1);
      sub_100E11A0((int)v3, a2);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 96))(v3);
      *((_DWORD *)v3 + 49) = sub_1014B5A0;
      v5 = sub_1014AE30(v6, -50.0, 50.0);
      sub_100D7260(v3, v5);
      v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
      sub_100C0F20((_DWORD *)v3 + 213, &v7);
    }
    return v3;
  }
  else
  {
    Msg("NULL Ent in CreateWindowPane!\n");
    return 0;
  }
}
