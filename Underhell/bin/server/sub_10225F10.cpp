int __thiscall sub_10225F10(int this, int *a2)
{
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+10h] [ebp+8h]

  result = sub_100DA910((_DWORD *)this, a2);
  v10 = result;
  if ( *(_DWORD *)(this + 1524) && result != 16 )
  {
    v5 = 0;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1524) + 12))(*(_DWORD *)(this + 1524)) <= 0 )
    {
      return 16;
    }
    else
    {
      while ( 1 )
      {
        v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1524) + 16))(*(_DWORD *)(this + 1524), v5);
        v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v6);
        if ( v7 || (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 12);
          if ( v8 )
          {
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
            if ( v9 )
            {
              if ( *(_DWORD *)(v9 + 24) == *a2 )
                break;
            }
          }
        }
        if ( ++v5 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1524) + 12))(*(_DWORD *)(this + 1524)) )
          return 16;
      }
      return v10;
    }
  }
  return result;
}
