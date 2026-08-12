bool __stdcall sub_10135E50(int a1, int a2)
{
  _DWORD *v2; // esi
  bool result; // al

  result = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a1) )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2)
        || sub_100D7680((int)v2)
        || v2[23] == dword_106AFE90 )
      {
        return 1;
      }
    }
  }
  return result;
}
