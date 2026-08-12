int __cdecl sub_1011B550(_DWORD *a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  float *v6; // eax
  double v7; // st7
  float v8; // [esp+8h] [ebp-4h]

  v8 = 3.4028235e38;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = sub_1012BC90(v1, "phys_ragdollmagnet");
    v1 = v3;
    if ( !v3 )
      break;
    if ( !*(_BYTE *)(v3 + 800) )
    {
      v4 = *(_DWORD *)(v3 + 212);
      if ( v4 )
      {
        if ( a1[65] == v4 )
          return v1;
      }
      else
      {
        v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 576))(a1);
        v7 = sub_1011B370(v1, v6);
        if ( v8 > v7 && v7 <= *(float *)(v1 + 804) )
        {
          v8 = v7;
          v2 = v1;
        }
      }
    }
  }
  return v2;
}
