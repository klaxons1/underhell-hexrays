int __cdecl sub_100D7A70(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  int result; // eax
  unsigned __int8 v6; // si

  v4 = (int)(*(float *)(a2 + 124) / *(float *)(dword_106B31C8 + 28) + 0.5);
  result = *(_DWORD *)(dword_106B31C8 + 52)
         * ((*(_DWORD *)(dword_106B31C8 + 24)
           - (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24))
           % *(_DWORD *)(dword_106B31C8 + 56))
          / *(_DWORD *)(dword_106B31C8 + 52));
  if ( v4 < result - 100 )
  {
    *a4 = 0;
  }
  else
  {
    v6 = v4 - result;
    result = (int)a4;
    *a4 = v6;
  }
  return result;
}
