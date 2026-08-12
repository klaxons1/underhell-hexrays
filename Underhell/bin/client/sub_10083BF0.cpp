int __stdcall sub_10083BF0(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  unsigned __int16 v4; // ax
  int v5; // eax

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 92))(a1, 3);
  if ( (_BYTE)result )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413190 + 32))(dword_10413190, a1);
      }
      else
      {
        result = a2 - 2;
        if ( a2 == 2 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1);
          if ( (_WORD)result != 0xFFFF )
          {
            v3 = *(_DWORD *)dword_1041318C;
            v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1);
            return (*(int (__thiscall **)(int, _DWORD))(v3 + 44))(dword_1041318C, v4);
          }
        }
      }
    }
    else
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041318C + 32))(dword_1041318C, v5);
    }
  }
  return result;
}
