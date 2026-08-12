char __cdecl sub_101BD560(void *Src, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  char result; // al
  int v8; // edi
  char v9; // [esp+6h] [ebp-12h]
  char v10; // [esp+14h] [ebp-4h]

  v6 = a6;
  if ( a6 )
  {
    if ( a6 == 2 )
      v6 = 3;
  }
  else
  {
    v6 = 12;
  }
  switch ( v6 )
  {
    case 3:
      v10 = 24;
      break;
    case 5:
      v9 = 1;
      v10 = 8;
      goto LABEL_13;
    case 12:
      v10 = 32;
      break;
    default:
      return 0;
  }
  v9 = 2;
LABEL_13:
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, v9);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, 0);
  sub_1011C5F0((int)a2, a3);
  sub_1011C5F0((int)a2, SBYTE1(a3));
  sub_1011C5F0((int)a2, a4);
  sub_1011C5F0((int)a2, SBYTE1(a4));
  sub_1011C5F0((int)a2, v10);
  sub_1011C5F0((int)a2, 32);
  v8 = a4 * a3 * (_DWORD)sub_101BD400(v6)[1];
  sub_1022E770(v8 + a2[4]);
  result = sub_101C3C70(Src, a5, (void *)(*a2 + a2[4] - a2[8]), v6, a3, a4, 0, 0);
  if ( result )
  {
    sub_1022ED70(1, v8);
    return 1;
  }
  return result;
}
