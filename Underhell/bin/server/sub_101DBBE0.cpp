char __cdecl sub_101DBBE0(int a1, float *a2)
{
  int (__thiscall *v2)(int); // edx
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  float v7[3]; // [esp+Ch] [ebp-10h] BYREF
  char v8; // [esp+1Bh] [ebp-1h]

  v2 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 68);
  v8 = 0;
  v3 = v2(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 316))(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) )
  {
    while ( 1 )
    {
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, 1);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 68))(v5) != v3 )
      {
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v4 + 20))(v4, v7);
        if ( a2[1] * v7[1] + *a2 * v7[0] + a2[2] * v7[2] > 0.0 )
          break;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 48))(v4);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) )
        goto LABEL_7;
    }
    v8 = 1;
  }
LABEL_7:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 320))(a1, v4);
  return v8;
}
