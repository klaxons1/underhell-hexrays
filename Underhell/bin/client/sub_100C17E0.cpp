int __thiscall sub_100C17E0(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // esi
  const void *v10; // edi
  void *v11; // eax
  int v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  result = *(unsigned __int16 *)(this + 264);
  for ( i = this; result != 0xFFFF; result = *(unsigned __int16 *)(*(_DWORD *)(this + 252) + v5 + 6) )
  {
    v5 = 8 * (unsigned __int16)result;
    v6 = *(_DWORD *)(v5 + *(_DWORD *)(this + 252));
    v7 = 0;
    v13 = v5;
    v14 = v6;
    v12 = *(_DWORD *)(v6 + 20);
    v15 = 0;
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v7);
        if ( !*(_DWORD *)(v8 + 12) )
        {
          v9 = *(_DWORD *)(*(_DWORD *)(this + 432) + 84 * a2 + 28) + 12 * *(_DWORD *)(v8 + 4);
          if ( *(_DWORD *)(v9 + 4) == a3 )
          {
            v10 = (const void *)(*(_DWORD *)(a4 + 4) + *(unsigned __int16 *)(v9 + 8));
            v11 = (void *)sub_100DDA40(
                            (unsigned __int64)(*(unsigned __int16 *)(v9 + 10) >> 1) >> 31 != 0
                          ? -1
                          : 2 * (*(unsigned __int16 *)(v9 + 10) >> 1));
            *(_DWORD *)(v8 + 12) = v11;
            memcpy_0(v11, v10, *(unsigned __int16 *)(v9 + 10));
            v7 = v15;
            v5 = v13;
          }
          this = i;
        }
        v15 = ++v7;
        if ( v7 >= v12 )
          break;
        v6 = v14;
      }
    }
  }
  return result;
}
