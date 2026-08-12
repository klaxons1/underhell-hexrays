bool __cdecl sub_101B5840(int a1, float a2, int *a3, int a4, float *a5)
{
  int v5; // edi
  int v6; // esi
  int v7; // ebx
  double v8; // st7
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]

  v5 = a1;
  v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 116))(a1);
  *a3 = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 316))(v5);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) )
  {
    do
    {
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 8))(v6, 1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7) )
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 116))(v7) > v11 )
        {
          v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 24))(v6);
          v10 = v8;
          if ( v8 > a2 )
          {
            *a3 = v7;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 16))(v6, a4);
            (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 20))(v6, a5);
            *a5 = *a5 * v10;
            a5[1] = a5[1] * v10;
            a5[2] = v10 * a5[2];
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 48))(v6);
    }
    while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) );
    v5 = a1;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 320))(v5, v6);
  return *a3 != 0;
}
