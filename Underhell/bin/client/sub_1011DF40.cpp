int __cdecl sub_1011DF40(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  int *v11; // [esp+Ch] [ebp-4h]

  v2 = dword_10439968;
  v3 = 0;
  v11 = (int *)dword_10439968;
  v9 = a1[3];
  v10 = 0;
  if ( v9 > 0 )
  {
    do
    {
      v4 = (***(int (__thiscall ****)(_DWORD))(*a1 + 4 * v3))(*(_DWORD *)(*a1 + 4 * v3));
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5) )
      {
        v6 = *v11;
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
        (*(void (__thiscall **)(int *, int))(v6 + 116))(v11, v7);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, a2 | 1);
        v3 = v10;
      }
      v10 = ++v3;
    }
    while ( v3 < v9 );
    v2 = (int)v11;
  }
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 116))(v2, 0);
}
