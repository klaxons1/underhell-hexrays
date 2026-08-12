void __stdcall sub_100F6C10(int a1, int a2)
{
  int v4; // esi
  int v5; // ecx
  double v6; // st6
  float v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+1Ch] [ebp+8h]
  float v9; // [esp+20h] [ebp+Ch]

  v4 = *(_DWORD *)(a2 + 4 * a1);
  if ( v4 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 4))(*(_DWORD *)(a2 + 4 * a1)) )
    {
      v8 = *(_DWORD *)(a2 + 4 * a1 + 8);
      v9 = *(float *)(a2 + 24) * *(float *)(a2 + 24);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 68))(v4);
      if ( v5 )
      {
        v6 = 0.0000097656248 * v9;
        if ( v6 > 1.0 )
          v6 = 1.0;
        if ( v8 >= 0 )
        {
          v7 = v6;
          sub_100F6A90(&dword_10435ED8, v5, v4, v8, *(_DWORD *)(a2 + 4 * (a1 == 0) + 8), v7, v9);
        }
      }
    }
  }
}
