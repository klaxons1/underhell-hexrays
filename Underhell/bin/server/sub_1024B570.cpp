int __usercall sub_1024B570@<eax>(_DWORD *a1@<esi>)
{
  int result; // eax
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // esi

  result = dword_106C68CC;
  v2 = 0;
  v3 = dword_106C68CC;
  if ( dword_106C68CC <= 0 )
  {
    dword_106C68CC = 0;
  }
  else
  {
    do
    {
      v4 = *(_DWORD **)(dword_106C68C0 + 4 * v2);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4, a1);
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[1]);
      if ( v4[5] )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[5]);
      a1 = v4;
      result = (*(int (__thiscall **)(_DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc);
      ++v2;
    }
    while ( v2 < v3 );
    dword_106C68CC = 0;
  }
  return result;
}
