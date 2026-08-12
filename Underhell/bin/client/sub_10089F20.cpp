char __thiscall sub_10089F20(_DWORD *this, unsigned __int16 a2, char a3, float a4)
{
  unsigned __int16 *v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  bool v10; // dl
  int v11; // ebx
  unsigned __int16 v13; // ax
  int v14; // edx
  unsigned __int16 *i; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // ecx
  unsigned __int16 *v20; // [esp+0h] [ebp-8h]
  int v21; // [esp+4h] [ebp-4h]
  unsigned __int16 v22; // [esp+18h] [ebp+10h]
  int v23; // [esp+18h] [ebp+10h]

  v5 = (unsigned __int16 *)(this[1] + 10 * a2);
  v6 = 4;
  v20 = v5;
  v7 = 16;
  if ( a4 > 256.0 )
  {
    while ( v6 < v5[2] )
    {
      v7 *= 2;
      ++v6;
      if ( (double)(v7 * v7) >= a4 )
        goto LABEL_6;
    }
    v6 = v5[2];
  }
LABEL_6:
  v8 = *v5;
  v21 = -1;
  v22 = *v5;
  if ( *v5 != 0xFFFF )
  {
    v9 = *((unsigned __int16 *)this + *(unsigned __int16 *)(this[8] + 16 * v8) + 53);
    v21 = v9;
    v10 = !a3 && v6 < 8 && v6 - v9 <= 1;
    if ( v9 == v6 || v10 )
    {
      v11 = 16 * v8;
      sub_10087FE0(
        this + 8,
        *((_WORD *)this + *((unsigned __int16 *)this + *(unsigned __int16 *)(16 * v8 + this[8]) + 53) + 44),
        0xFFFFu,
        v22);
      *(_DWORD *)(this[8] + v11 + 8) = this[35];
      return 0;
    }
  }
  v13 = -1;
  v14 = v6;
  for ( i = (unsigned __int16 *)this + v6 + 44; v14 >= 0; --i )
  {
    v13 = *(_WORD *)(this[11] + 10 * *i);
    if ( v13 != 0xFFFF && *(_DWORD *)(this[8] + 16 * v13 + 8) != this[35] )
      break;
    --v14;
  }
  if ( v22 != 0xFFFF )
  {
    if ( v14 <= v21 )
    {
      sub_10089ED0(this, v22);
      return 0;
    }
    v16 = this[8] + 16 * v22;
    v17 = *(unsigned __int16 *)(v16 + 4);
    if ( (_WORD)v17 != 0xFFFF )
    {
      *(_WORD *)(this[1] + 10 * v17) = -1;
      *(_WORD *)(v16 + 4) = -1;
    }
  }
  if ( v13 == 0xFFFF )
    return 0;
  v18 = 16 * v13;
  v23 = v18 + this[8];
  v19 = *(unsigned __int16 *)(v23 + 4);
  if ( (_WORD)v19 != 0xFFFF )
  {
    *(_WORD *)(this[1] + 10 * v19) = -1;
    *(_WORD *)(v23 + 4) = -1;
  }
  *v20 = v13;
  *(_WORD *)(this[8] + v18 + 4) = a2;
  sub_10087FE0(
    this + 8,
    *((_WORD *)this + *((unsigned __int16 *)this + *(unsigned __int16 *)(this[8] + 16 * v13) + 53) + 44),
    0xFFFFu,
    v13);
  *(_DWORD *)(this[8] + v18 + 8) = this[35];
  return 1;
}
