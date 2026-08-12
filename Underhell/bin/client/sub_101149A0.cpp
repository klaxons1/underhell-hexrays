int __cdecl sub_101149A0(int *a1, int a2, int a3, float a4)
{
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int result; // eax
  int v8[3]; // [esp+10h] [ebp-24h] BYREF
  _BYTE v9[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v10[3]; // [esp+28h] [ebp-Ch] BYREF

  v4 = 0;
  if ( *a1 > 0 )
  {
    v5 = a1 + 6;
    v6 = a1 + 147;
    do
    {
      sub_1001BFA0((float *)v8, (float *)v10, a2 + 48 * *v6, 48 * *v6 + a3, a4);
      (*(void (__thiscall **)(_DWORD, _BYTE *, int *))(*(_DWORD *)*v5 + 232))(*v5, v9, v10);
      result = (*(int (__thiscall **)(_DWORD, int *, _BYTE *))(*(_DWORD *)*v5 + 208))(*v5, v8, v9);
      ++v4;
      ++v6;
      v5 += 6;
    }
    while ( v4 < *a1 );
  }
  return result;
}
