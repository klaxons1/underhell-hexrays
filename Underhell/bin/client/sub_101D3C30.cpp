_DWORD *__thiscall sub_101D3C30(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  bool v12; // zf

  sub_101C6BE0(this, a3, a4, a5, a6);
  this[7] = a2;
  *this = &off_103933E0;
  switch ( a2 )
  {
    case 6:
      v7 = 4;
      this[11] = 4;
      goto LABEL_11;
    case 7:
      v7 = 4;
      this[11] = 8;
      goto LABEL_11;
    case 8:
      v7 = 4;
      this[11] = 16;
      goto LABEL_11;
    case 9:
      v7 = 4;
      goto LABEL_10;
    case 10:
      v7 = 8;
      this[11] = 4;
      goto LABEL_11;
    case 11:
      v7 = 8;
      this[11] = 8;
      goto LABEL_11;
    case 12:
      v7 = 8;
      this[11] = 16;
      goto LABEL_11;
    case 13:
      v7 = 8;
LABEL_10:
      this[11] = 32;
LABEL_11:
      this[10] = v7;
      this[9] = v7;
      break;
    default:
      break;
  }
  v8 = this[9];
  v9 = this[10];
  v10 = (this[1] + v8 - 1) / v8;
  v11 = (v8 * v9 * this[11]) >> 3;
  this[8] = v11;
  v12 = this[5] == 0;
  this[3] = v10 * v11;
  if ( v12 )
    this[5] = sub_100DDA40(v10 * v11 * ((this[2] + v9 - 1) / v9));
  return this;
}
