int __cdecl sub_100144F0(int a1, float *a2, int a3)
{
  int v3; // edi
  int result; // eax

  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 776))(a2);
  sub_10116120(a1, (int)a2, a3);
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 776))(a2);
  if ( result != v3 )
  {
    result = sub_10025680(0.0);
    a2[24] = *((float *)off_103DC81C + 3);
  }
  return result;
}
