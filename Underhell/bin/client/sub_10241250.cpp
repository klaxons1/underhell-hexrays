int __usercall sub_10241250@<eax>(unsigned int *a1@<ecx>, int a2@<esi>)
{
  int result; // eax
  char v4; // bl
  int i; // esi
  int (__thiscall **v6)(unsigned int *, int); // esi
  int v7; // eax
  int v8; // eax

  result = (*(int (__thiscall **)(unsigned int *))(*a1 + 128))(a1);
  v4 = result;
  if ( (_BYTE)result )
  {
    result = a1[9];
    if ( !*(_BYTE *)(result + 1) )
    {
      result = sub_10237C80(&dword_103FCF4C);
      if ( !result )
      {
        result = (*(int (__thiscall **)(unsigned int *))(*a1 + 148))(a1);
        for ( i = result; result; i = result )
        {
          v4 &= (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 60))(dword_1047CA70, i);
          result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 76))(dword_1047CA70, i);
        }
        if ( v4 )
        {
          v6 = (int (__thiscall **)(unsigned int *, int))(*a1 + 160);
          v7 = (*(int (**)(void))(*(_DWORD *)dword_1047CA6C + 24))();
          result = (*v6)(a1, v7);
          if ( (_BYTE)result )
          {
            (*(void (__thiscall **)(unsigned int *, int))(*a1 + 236))(a1, a2);
            if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 288))(a1) )
            {
              v8 = sub_10240220(a1 + 33);
              (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v8 + 100))(v8, a1);
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 48))(dword_1047CA68) )
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 48))(dword_1047CA68);
            return (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 200))(dword_1047CA6C);
          }
        }
      }
    }
  }
  return result;
}
