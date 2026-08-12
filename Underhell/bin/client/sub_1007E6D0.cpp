void __thiscall sub_1007E6D0(int this, int a2, int a3, void (__thiscall ***a4)(_DWORD, _DWORD))
{
  int v4; // ebx
  int v6; // esi
  unsigned __int16 v7; // ax
  int v8; // ebx
  int v9; // esi
  int v10; // [esp+8h] [ebp-4h]

  v4 = a2;
  if ( a2 )
  {
    ++*(_DWORD *)(this + 388);
    v6 = 0;
    v10 = 0;
    if ( a2 > 0 )
    {
      do
      {
        v7 = *(_WORD *)(*(int (__cdecl **)(_DWORD))(this + 260))(*(unsigned __int16 *)(a3 + 2 * v6));
        if ( v7 != 0xFFFF )
        {
          do
          {
            v8 = 8 * v7;
            v9 = *(_DWORD *)(this + 68) + 16 * *(unsigned __int16 *)(*(_DWORD *)(this + 184) + v8);
            if ( *(_DWORD *)(v9 + 4) != *(_DWORD *)(this + 388) )
            {
              (**a4)(a4, *(unsigned __int16 *)(v9 + 8));
              *(_DWORD *)(v9 + 4) = *(_DWORD *)(this + 388);
            }
            v7 = *(_WORD *)(*(_DWORD *)(this + 184) + v8 + 6);
          }
          while ( v7 != 0xFFFF );
          v6 = v10;
          v4 = a2;
        }
        v10 = ++v6;
      }
      while ( v6 < v4 );
    }
  }
}
