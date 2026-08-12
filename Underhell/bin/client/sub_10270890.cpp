int __thiscall sub_10270890(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int result; // eax
  _DWORD *v7; // edi
  int v8; // [esp-1Ch] [ebp-20h]
  int v9; // [esp-18h] [ebp-1Ch]
  int v10; // [esp-14h] [ebp-18h]
  int v11; // [esp-10h] [ebp-14h]

  result = this[53];
  switch ( result )
  {
    case 0:
      v7 = a2;
      *a2 += this[56];
      v11 = a4 - *a3;
      v10 = *a2 + this[57];
      v9 = *a3;
      v8 = *a2;
      goto LABEL_6;
    case 1:
      *a2 -= this[57] + this[56];
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 *a2,
                 *a3,
                 *a2 + this[57],
                 a4 - *a3);
      break;
    case 2:
      *a3 -= this[57] + this[56];
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 *a2,
                 *a3,
                 a5 - *a2,
                 *a3 + this[57]);
      break;
    case 3:
      v7 = a3;
      *a3 += this[56];
      v11 = *a3 + this[57];
      v10 = a5 - *a2;
      v9 = *a3;
      v8 = *a2;
LABEL_6:
      result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 v8,
                 v9,
                 v10,
                 v11);
      *v7 += this[57];
      break;
    default:
      return result;
  }
  return result;
}
