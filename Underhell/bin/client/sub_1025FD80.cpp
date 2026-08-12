int __thiscall sub_1025FD80(_DWORD **this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned __int16 v10[256]; // [esp+20h] [ebp-400h] BYREF
  unsigned __int16 v11[256]; // [esp+220h] [ebp-200h] BYREF

  ((void (__thiscall *)(_DWORD **, unsigned __int16 *, int))(*this)[194])(this, v11, 254);
  v3 = 0;
  result = (*(int (__thiscall **)(_DWORD *))(*this[238] + 932))(this[238]);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v5 = (*(int (__thiscall **)(_DWORD *, int))(*this[238] + 936))(this[238], v3);
      v6 = sub_1026B780(v5);
      (*(void (__thiscall **)(int, unsigned __int16 *, int))(*(_DWORD *)v6 + 776))(v6, v10, 254);
      result = wcscmp(v10, v11);
      if ( !result )
        break;
      ++v3;
      result = (*(int (__thiscall **)(_DWORD *))(*this[238] + 932))(this[238]);
      if ( v3 >= result )
        return result;
    }
    if ( v3 >= 0 )
    {
      v7 = a2 + v3;
      if ( v7 >= 0 )
      {
        if ( v7 >= (*(int (__thiscall **)(_DWORD *))(*this[238] + 932))(this[238]) )
          v7 = (*(int (__thiscall **)(_DWORD *))(*this[238] + 932))(this[238]) - 1;
      }
      else
      {
        v7 = 0;
      }
      v8 = (*(int (__thiscall **)(_DWORD *, int))(*this[238] + 936))(this[238], v7);
      v9 = sub_1026B780(v8);
      (*(void (__thiscall **)(int, unsigned __int16 *, int))(*(_DWORD *)v9 + 776))(v9, v10, 255);
      ((void (__thiscall *)(_DWORD **, unsigned __int16 *))(*this)[256])(this, v10);
      sub_102531C0(this, 0);
      return (*(int (__thiscall **)(_DWORD *, int))(*this[238] + 920))(this[238], v7);
    }
  }
  return result;
}
