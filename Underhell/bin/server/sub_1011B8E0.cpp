int __cdecl sub_1011B8E0(int a1, float *a2, int a3, int *a4, _DWORD *a5)
{
  int v6; // esi
  _DWORD *v7; // eax
  int result; // eax
  int v9; // [esp+24h] [ebp+18h]

  *a4 = -1;
  *a5 = 0;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v7 = *(_DWORD **)(a1 + 1100);
  if ( !v7 || (v9 = *(_DWORD *)(a1 + 1100), !*v7) )
    v9 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  if ( v9 )
  {
    *a4 = sub_1011B7F0(a1, a2);
    result = a3 - 1;
    *a5 = 1;
    switch ( a3 )
    {
      case 1:
        *a5 = 1;
        break;
      case 2:
      case 3:
        *a5 = 2;
        break;
      case 4:
        *a5 = 3;
        break;
      case 5:
        *a5 = 4;
        break;
      case 6:
        *a5 = 5;
        break;
      case 7:
        *a5 = 6;
        break;
      default:
        return result;
    }
  }
  return result;
}
