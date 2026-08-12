void __thiscall sub_100EF0E0(int this)
{
  int i; // eax
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ebx
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(this + 144) )
  {
    for ( i = *(unsigned __int16 *)(this + 196); i != 0xFFFF; i = *(unsigned __int16 *)(*(_DWORD *)(this + 184) + v3 + 6) )
    {
      v3 = 8 * (unsigned __int16)i;
      v4 = *(_DWORD *)(v3 + *(_DWORD *)(this + 184));
      v5 = *(_DWORD **)(v4 + 8);
      v7 = v3;
      v8 = v4;
      if ( v5 != (_DWORD *)(v4 + 4) )
      {
        do
        {
          v6 = (_DWORD *)v5[1];
          *(_DWORD *)(*v5 + 4) = v6;
          *(_DWORD *)v5[1] = *v5;
          --*(_WORD *)(this + 132);
          (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 140) + 32))(*(_DWORD *)(this + 140), v5);
          --*(_DWORD *)(*(_DWORD *)(this + 144) + 4);
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          v5 = v6;
        }
        while ( v6 != (_DWORD *)(v8 + 4) );
        v3 = v7;
        v4 = v8;
      }
      sub_10034930(v4);
    }
    sub_100EC500((_WORD *)(this + 184));
    if ( *(int *)(this + 192) >= 0 )
    {
      if ( *(_DWORD *)(this + 184) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 184));
        *(_DWORD *)(this + 184) = 0;
      }
      *(_DWORD *)(this + 188) = 0;
    }
    *(_DWORD *)(this + 208) = *(_DWORD *)(this + 184);
    *(_WORD *)(this + 200) = -1;
    *(_WORD *)(this + 204) = -1;
    *(_DWORD *)(this + 152) = 0;
    *(_DWORD *)(this + 156) = 0;
    *(_DWORD *)(this + 160) = 0;
    *(_DWORD *)(this + 164) = 0;
    *(_DWORD *)(this + 168) = 0;
    *(_DWORD *)(this + 172) = 0;
    *(_DWORD *)(this + 176) = 0;
    *(_DWORD *)(this + 180) = 0;
  }
}
