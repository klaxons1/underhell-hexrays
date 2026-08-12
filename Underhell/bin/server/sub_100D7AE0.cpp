int __cdecl sub_100D7AE0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  int result; // eax

  v4 = (int)(*(float *)(a2 + 128) / *(float *)(dword_106B31C8 + 28) + 0.5);
  result = *(_DWORD *)(dword_106B31C8 + 52)
         * ((*(_DWORD *)(dword_106B31C8 + 24)
           - (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24))
           % *(_DWORD *)(dword_106B31C8 + 56))
          / *(_DWORD *)(dword_106B31C8 + 52));
  if ( v4 < result )
    *a4 = 0;
  else
    *a4 = (unsigned __int8)(v4 - result);
  return result;
}
