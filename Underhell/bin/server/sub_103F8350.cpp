int __usercall sub_103F8350@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int result; // eax
  int v8; // edi
  const char *v9; // esi
  float v10; // [esp+8h] [ebp-10h]

  sub_103F7FF0(a1, a2, a3);
  *(_BYTE *)(a1 + 1396) = 1;
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v5 = *(_DWORD **)(a1 + 1100);
  if ( v5 && *v5 )
    v6 = *(_DWORD *)(a1 + 1100);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  v10 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)a1 + 736))(a1, v6, 181)
      + *(float *)(dword_106B31C8 + 12);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 960))(a1, LODWORD(v10));
  result = sub_100D1940((_DWORD *)a1);
  v8 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      ++*(_DWORD *)(a1 + 1372);
      v9 = *(const char **)(a1 + 92);
      if ( !v9 )
        v9 = String;
      return (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v8,
               1,
               v9);
    }
  }
  return result;
}
