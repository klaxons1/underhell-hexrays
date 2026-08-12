int __stdcall sub_101897F0(_DWORD *a1, int a2)
{
  int v3; // ebx
  int *v4; // ecx
  int v5; // esi
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]
  _DWORD *v10; // [esp+20h] [ebp+Ch]

  v3 = 0;
  v9 = -1;
  v8 = -1;
  v7 = 0;
  if ( a2 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1240))(a2)
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 980))(a2) )
    {
      return 0;
    }
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1232))(a2);
  }
  v10 = a1 + 477;
  do
  {
    if ( *v10 != -1 )
    {
      v4 = &off_1061BE18[4 * (*v10 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == *v10 >> 12 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          if ( !a2 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1236))(*v4) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1232))(v5) <= -1
              || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1232))(v5) != v9
              || v5 == a2 )
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1232))(v5) > v8
                && v5 != a2
                && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 968))(v5) )
              {
                v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1232))(v5);
                v7 = v5;
              }
            }
            else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 968))(v5)
                   && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 972))(a1, v5) )
            {
              return v5;
            }
          }
        }
      }
    }
    ++v10;
    ++v3;
  }
  while ( v3 < 48 );
  return v7;
}
