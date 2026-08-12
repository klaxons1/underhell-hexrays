void __cdecl sub_10181430(_DWORD *a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // esi

  if ( a1 )
  {
    v1 = a1[3];
    if ( v1 )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1);
      v3 = v2;
      if ( v2 )
      {
        a1[3] = 0;
        *a1 = 0;
        sub_101C5BF0(v2);
        sub_101C5EA0(v3);
        sub_1025FAE0(v3);
      }
    }
  }
}
