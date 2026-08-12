int __thiscall sub_10020810(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // [esp+14h] [ebp+Ch]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_1001EF70(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 132 * (a2 + a3)), (const void *)(v9 + 132 * a2), 132 * v11);
  if ( a4 && a3 > 0 )
  {
    v12 = 132 * a2;
    v13 = a4;
    do
    {
      sub_1001C990((_DWORD *)(v12 + *this), v13);
      v13 += 132;
      v12 += 132;
      --v4;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
