unsigned int __thiscall sub_10063A40(_DWORD *this, int a2)
{
  int v4; // edi
  int v5; // ecx
  unsigned int *v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int result; // eax
  unsigned int v11; // ebx
  int v12; // edi
  int *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int *v17; // edi
  unsigned int v18; // [esp+Ch] [ebp-4h]
  unsigned int v19; // [esp+18h] [ebp+8h]

  v4 = 8 * this[16];
  v5 = this[v4 + 5];
  v6 = &this[v4];
  if ( a2 )
    v7 = ~(v5 - 1) & (v5 + a2 - 1);
  else
    v7 = v5;
  v8 = *v6;
  v9 = *v6 + v7;
  v19 = *v6;
  v18 = v9;
  if ( v9 > v6[1] )
  {
    if ( !(unsigned __int8)sub_1022E130(v9) )
    {
      result = 0;
      goto LABEL_9;
    }
    v8 = v19;
    v9 = v18;
  }
  *v6 = v9;
  result = v8;
LABEL_9:
  if ( !result )
  {
    Warning(
      "Overflowed rope queued rendering memory stack. Needed %d, have %d/%d\n",
      a2,
      this[8 * this[16] + 4] + this[8 * this[16] + 3] - this[8 * this[16]],
      this[8 * this[16] + 4]);
    v11 = sub_100DDA40(a2);
    v12 = this[5 * this[16] + 20];
    v13 = &this[5 * this[16] + 17];
    v14 = v13[1];
    if ( v12 + 1 > v14 )
      sub_1010AFF0(v12 - v14 + 1);
    ++v13[3];
    v15 = *v13;
    v16 = v13[3] - v12 - 1;
    v13[4] = *v13;
    if ( v16 > 0 )
      memcpy((void *)(v15 + 4 * v12 + 4), (const void *)(v15 + 4 * v12), 4 * v16);
    v17 = (unsigned int *)(*v13 + 4 * v12);
    result = v11;
    if ( v17 )
      *v17 = v11;
  }
  return result;
}
