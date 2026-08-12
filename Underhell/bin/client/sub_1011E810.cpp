void __stdcall sub_1011E810(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  _DWORD v7[512]; // [esp+10h] [ebp-810h] BYREF
  float v8[4]; // [esp+810h] [ebp-10h] BYREF

  v3 = (unsigned int)a2;
  v4 = a1;
  if ( a2 != a1 )
  {
    v8[0] = 1.0;
    v8[1] = 1.0;
    v8[2] = 1.0;
    v8[3] = 1.0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v8);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
    v5 = 0;
    v6 = 512;
    if ( a1 < a2 )
    {
      do
      {
        if ( *v4 )
        {
          v7[v5] = *v4;
          --v6;
          ++v5;
          if ( v6 <= 0 )
          {
            (*(void (__stdcall **)(_DWORD *, int, int, bool))(*(_DWORD *)dword_10413190 + 52))(
              v7,
              v5,
              a3,
              *(_DWORD *)(dword_1040375C + 48) != 0);
            v3 = (unsigned int)a2;
            v5 = 0;
            v6 = 512;
          }
        }
        v4 += 3;
      }
      while ( (unsigned int)v4 < v3 );
      if ( v5 )
        (*(void (__stdcall **)(_DWORD *, int, int, bool))(*(_DWORD *)dword_10413190 + 52))(
          v7,
          v5,
          a3,
          *(_DWORD *)(dword_1040375C + 48) != 0);
    }
  }
}
