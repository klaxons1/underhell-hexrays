int __cdecl sub_100F0DC0(unsigned __int8 a1)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // esi

  v1 = dword_10435CD8[a1];
  if ( v1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(v1 + 12) + 40))(v1 + 12, 1);
  v2 = dword_10435CE0[a1];
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(v2 + 12) + 40))(v2 + 12, 1);
  result = dword_10435CE8[a1];
  if ( result )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(result + 12) + 40))(result + 12, 1);
  v4 = dword_10435CF0[a1];
  if ( v4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)(v4 + 12) + 40))(v4 + 12, 1);
  return result;
}
